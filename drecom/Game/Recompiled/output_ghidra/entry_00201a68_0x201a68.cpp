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

// Function: entry_00201a68
// Address: 0x201a68 - 0x201a70
void entry_00201a68_0x201a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a68_0x201a68");
#endif

    ctx->pc = 0x201a68u;

    // 0x201a68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x201a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x201a6c: 0x0  nop
    ctx->pc = 0x201a6cu;
    // NOP
    ctx->pc = 0x201a70u;
}
