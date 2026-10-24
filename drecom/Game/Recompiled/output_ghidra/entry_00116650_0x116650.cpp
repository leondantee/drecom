#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00116650
// Address: 0x116650 - 0x116658
void entry_00116650_0x116650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116650_0x116650");
#endif

    ctx->pc = 0x116650u;

    // 0x116650: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116654: 0x0  nop
    ctx->pc = 0x116654u;
    // NOP
    ctx->pc = 0x116658u;
}
