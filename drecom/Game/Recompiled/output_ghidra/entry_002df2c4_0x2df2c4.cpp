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

// Function: entry_002df2c4
// Address: 0x2df2c4 - 0x2df34c
void entry_002df2c4_0x2df2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df2c4_0x2df2c4");
#endif

    switch (ctx->pc) {
        case 0x2df2d4u: goto label_2df2d4;
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df2fcu: goto label_2df2fc;
        default: break;
    }

    ctx->pc = 0x2df2c4u;

    // 0x2df2c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df2c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df2cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF2CCu;
    SET_GPR_U32(ctx, 31, 0x2DF2D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF2CCu, 0x2DF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2D4u;
label_2df2d4:
    // 0x2df2d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF2D8u;
    SET_GPR_U32(ctx, 31, 0x2DF2E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF2D8u, 0x2DF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2E0u;
label_2df2e0:
    // 0x2df2e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df2e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df2e8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF2E8u;
    SET_GPR_U32(ctx, 31, 0x2DF2F0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF2E8u, 0x2DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2F0u;
label_2df2f0:
    // 0x2df2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF2F4u;
    SET_GPR_U32(ctx, 31, 0x2DF2FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF2F4u, 0x2DF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2FCu;
label_2df2fc:
    // 0x2df2fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df300: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2df304: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df308: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df30c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF30Cu;
    {
        const bool branch_taken_0x2df30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df30c) {
            ctx->pc = 0x2DF34Cu;
            return;
        }
    }
    ctx->pc = 0x2DF314u;
    // 0x2df314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df31c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df320: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df330: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df344: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF344u;
    {
        const bool branch_taken_0x2df344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df344) {
            ctx->pc = 0x2DF39Cu;
            return;
        }
    }
    ctx->pc = 0x2DF34Cu;
}
