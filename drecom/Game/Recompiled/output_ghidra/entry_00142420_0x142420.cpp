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

// Function: entry_00142420
// Address: 0x142420 - 0x142428
void entry_00142420_0x142420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142420_0x142420");
#endif

    ctx->pc = 0x142420u;

    // 0x142420: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142424: 0x0  nop
    ctx->pc = 0x142424u;
    // NOP
    ctx->pc = 0x142428u;
}
