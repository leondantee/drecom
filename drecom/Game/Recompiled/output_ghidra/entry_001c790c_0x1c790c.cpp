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

// Function: entry_001c790c
// Address: 0x1c790c - 0x1c793c
void entry_001c790c_0x1c790c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c790c_0x1c790c");
#endif

    ctx->pc = 0x1c790cu;

    // 0x1c790c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7910: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7914: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c7914u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7918: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c791c: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1c791cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7920: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7924: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1c7924u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7928: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c792c: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1c792cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7930: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c7934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7938: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c7938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c793cu;
}
