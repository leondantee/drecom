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

// Function: entry_00198310
// Address: 0x198310 - 0x198360
void entry_00198310_0x198310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198310_0x198310");
#endif

    ctx->pc = 0x198310u;

    // 0x198310: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198314: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198314u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198318: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19831c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198320: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x198320u;
    {
        const bool branch_taken_0x198320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198320) {
            ctx->pc = 0x198360u;
            return;
        }
    }
    ctx->pc = 0x198328u;
    // 0x198328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19832c: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x19832cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
    // 0x198330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198334: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198338: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19833c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198344: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198348: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19834c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198350: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198354: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198358: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19835c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19835cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x198360u;
}
