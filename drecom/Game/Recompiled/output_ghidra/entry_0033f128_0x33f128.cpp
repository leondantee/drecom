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

// Function: entry_0033f128
// Address: 0x33f128 - 0x33f154
void entry_0033f128_0x33f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f128_0x33f128");
#endif

    ctx->pc = 0x33f128u;

    // 0x33f128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f12c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f130: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33f130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f138: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x33f138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f140: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f144: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f148: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f150: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x33f154u;
}
