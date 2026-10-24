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

// Function: entry_0035a270
// Address: 0x35a270 - 0x35a2c0
void entry_0035a270_0x35a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a270_0x35a270");
#endif

    ctx->pc = 0x35a270u;

    // 0x35a270: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a274: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x35a274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x35a278: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35a278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35a27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a280: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35A280u;
    {
        const bool branch_taken_0x35a280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a280) {
            ctx->pc = 0x35A2C0u;
            return;
        }
    }
    ctx->pc = 0x35A288u;
    // 0x35a288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a28c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a290: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a294: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a298: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35a298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a29c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2a0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2a8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a2b4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a2b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a2b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35A2B8u;
    {
        const bool branch_taken_0x35a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a2b8) {
            ctx->pc = 0x35A314u;
            return;
        }
    }
    ctx->pc = 0x35A2C0u;
}
