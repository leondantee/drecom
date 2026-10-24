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

// Function: entry_00194d28
// Address: 0x194d28 - 0x194d30
void entry_00194d28_0x194d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d28_0x194d28");
#endif

    ctx->pc = 0x194d28u;

    // 0x194d28: 0x1ef182  srl         $fp, $fp, 6
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
    // 0x194d2c: 0x0  nop
    ctx->pc = 0x194d2cu;
    // NOP
    ctx->pc = 0x194d30u;
}
