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

// Function: caseD_b
// Address: 0x2ddd40 - 0x2dddc8
void caseD_b_0x2ddd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x2ddd40");
#endif

    switch (ctx->pc) {
        case 0x2ddd50u: goto label_2ddd50;
        case 0x2ddd60u: goto label_2ddd60;
        case 0x2ddd74u: goto label_2ddd74;
        case 0x2ddd80u: goto label_2ddd80;
        default: break;
    }

    ctx->pc = 0x2ddd40u;

    // 0x2ddd40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddd44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddd48: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DDD48u;
    SET_GPR_U32(ctx, 31, 0x2DDD50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDD48u, 0x2DDD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD50u;
label_2ddd50:
    // 0x2ddd50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddd54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DDD58u;
    SET_GPR_U32(ctx, 31, 0x2DDD60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDD58u, 0x2DDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD60u;
label_2ddd60:
    // 0x2ddd60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddd64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddd68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddd6c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DDD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDD74u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDD6Cu, 0x2DDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD74u;
label_2ddd74:
    // 0x2ddd74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd78: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DDD78u;
    SET_GPR_U32(ctx, 31, 0x2DDD80u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDD78u, 0x2DDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD80u;
label_2ddd80:
    // 0x2ddd80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddd84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd88: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2ddd88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ddd8c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DDD8Cu;
    {
        const bool branch_taken_0x2ddd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd8c) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDD94u;
    // 0x2ddd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ddd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd9c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2ddd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ddda0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddda4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x2ddda4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddda8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddda8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dddac: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2dddacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dddb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dddb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dddb8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dddb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dddbc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2dddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2dddc0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDDC0u;
    {
        const bool branch_taken_0x2dddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dddc0) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDDC8u;
}
