public enum Status{
    ACTIVE("Active"),
    HYBERNATED("Hybernated"),
    STOPPED("Stopped"),
    TERMINATED("Terminated");
    
    private final String label;
    
    private Status(String label) {
        this.label = label;
    }
    
    public String getLabel(){
        return label;
    }
    
    public void setLabel(String label){
        this.label = label;
    }
}