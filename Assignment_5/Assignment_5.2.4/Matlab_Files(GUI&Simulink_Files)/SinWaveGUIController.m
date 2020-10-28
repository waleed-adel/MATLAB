function varargout = SinWaveGUIController(varargin)
% SINWAVEGUICONTROLLER MATLAB code for SinWaveGUIController.fig
%      SINWAVEGUICONTROLLER, by itself, creates a new SINWAVEGUICONTROLLER or raises the existing
%      singleton*.
%
%      H = SINWAVEGUICONTROLLER returns the handle to a new SINWAVEGUICONTROLLER or the handle to
%      the existing singleton*.
%
%      SINWAVEGUICONTROLLER('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SINWAVEGUICONTROLLER.M with the given input arguments.
%
%      SINWAVEGUICONTROLLER('Property','Value',...) creates a new SINWAVEGUICONTROLLER or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before SinWaveGUIController_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to SinWaveGUIController_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help SinWaveGUIController

% Last Modified by GUIDE v2.5 01-Feb-2020 11:22:25

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @SinWaveGUIController_OpeningFcn, ...
                   'gui_OutputFcn',  @SinWaveGUIController_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before SinWaveGUIController is made visible.
function SinWaveGUIController_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to SinWaveGUIController (see VARARGIN)

%Global Var. to be seen and used by all functions
global current_choice; 

%to link GUI with simulink you have to load the Simulink model first
%use open_system('simulink_file_name')
open_system('Sine_Wave_Controller');
%open the scope instantly when simulink opens
open_system('Sine_Wave_Controller/Scope');

%to enable parameter editing for that specific block
%set_param('simulink_file_name/block_name','parameter_name','value')
%setting the default amplitude = 1
set_param('Sine_Wave_Controller/Sine Wave','Amplitude','1');

% Choose default command line output for SinWaveGUIController
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes SinWaveGUIController wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = SinWaveGUIController_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global current_choice;
switch current_choice
    case 'Amplitude = 1'
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','1');
    set(handles.text3,'string',current_choice);
    set(handles.text3,'backgroundcolor','g');
    
    case 'Amplitude = 2'
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','2');
    set(handles.text3,'string',current_choice);
    set(handles.text3,'backgroundcolor','g');
    case 'Amplitude = 3'
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','3');
    set(handles.text3,'string',current_choice);
    set(handles.text3,'backgroundcolor','g');
    
    case 'Amplitude = 4'
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','4');
    set(handles.text3,'string',current_choice);
    set(handles.text3,'backgroundcolor','g');
    
    case 'Amplitude = 5'
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','5');
    set(handles.text3,'string',current_choice);
    set(handles.text3,'backgroundcolor','g');
    
    otherwise 
    set_param('Sine_Wave_Controller/Sine Wave','Amplitude','0');   
    set(handles.text3,'string','INVALID AMPLITUDE');
    set(handles.text3,'backgroundcolor','r');
end

% --- Executes on selection change in popupmenu1.
function popupmenu1_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
contents = cellstr(get(hObject,'String'));
global current_choice;
current_choice = contents{get(hObject,'Value')};
% Hints: contents = cellstr(get(hObject,'String')) returns popupmenu1 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu1


% --- Executes during object creation, after setting all properties.
function popupmenu1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
