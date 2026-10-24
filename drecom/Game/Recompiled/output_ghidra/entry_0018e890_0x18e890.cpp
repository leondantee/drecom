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

// Function: entry_0018e890
// Address: 0x18e890 - 0x18e898
void entry_0018e890_0x18e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e890_0x18e890");
#endif

    ctx->pc = 0x18e890u;

    // 0x18e890: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x18e890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x18e894: 0x0  nop
    ctx->pc = 0x18e894u;
    // NOP
    ctx->pc = 0x18e898u;
}
