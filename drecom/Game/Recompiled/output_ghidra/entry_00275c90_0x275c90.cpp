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

// Function: entry_00275c90
// Address: 0x275c90 - 0x275c98
void entry_00275c90_0x275c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275c90_0x275c90");
#endif

    ctx->pc = 0x275c90u;

    // 0x275c90: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x275c90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x275c94: 0x0  nop
    ctx->pc = 0x275c94u;
    // NOP
    ctx->pc = 0x275c98u;
}
