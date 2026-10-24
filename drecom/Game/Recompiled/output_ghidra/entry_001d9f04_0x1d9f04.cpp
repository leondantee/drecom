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

// Function: entry_001d9f04
// Address: 0x1d9f04 - 0x1d9f18
void entry_001d9f04_0x1d9f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f04_0x1d9f04");
#endif

    ctx->pc = 0x1d9f04u;

    // 0x1d9f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9f08: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d9f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d9f0c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x1d9f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9f10: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1d9f14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1d9f18u;
}
