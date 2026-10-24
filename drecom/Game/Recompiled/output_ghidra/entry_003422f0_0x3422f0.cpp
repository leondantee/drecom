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

// Function: entry_003422f0
// Address: 0x3422f0 - 0x342390
void entry_003422f0_0x3422f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003422f0_0x3422f0");
#endif

    ctx->pc = 0x3422f0u;

    // 0x3422f0: 0x8e340064  lw          $s4, 0x64($s1)
    ctx->pc = 0x3422f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x3422f4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3422f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3422f8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3422fc: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x3422fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x342300: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342308: 0x12820043  beq         $s4, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x342308u;
    {
        const bool branch_taken_0x342308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x342308) {
            ctx->pc = 0x342418u;
            return;
        }
    }
    ctx->pc = 0x342310u;
    // 0x342310: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342314: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342318: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x34231c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x34231cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342320: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x342320u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x342324: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x342324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x342328: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x342328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x34232c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x34232Cu;
    {
        const bool branch_taken_0x34232c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34232c) {
            ctx->pc = 0x342390u;
            return;
        }
    }
    ctx->pc = 0x342334u;
    // 0x342334: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342338: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x342338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34233c: 0x84a6003c  lh          $a2, 0x3C($a1)
    ctx->pc = 0x34233cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x342340: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x342340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x342344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342348: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x342348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x34234c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342350: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x342350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x342354: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342358: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34235c: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x34235cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x342360: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342368: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x342368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x34236c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x34236cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x342370: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x342370u;
    {
        const bool branch_taken_0x342370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342370) {
            ctx->pc = 0x342390u;
            return;
        }
    }
    ctx->pc = 0x342378u;
    // 0x342378: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34237c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342380: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x342384: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x342384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342388: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x342388u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34238c: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x34238cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
    ctx->pc = 0x342390u;
}
