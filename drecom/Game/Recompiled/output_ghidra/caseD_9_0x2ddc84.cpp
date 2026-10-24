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

// Function: caseD_9
// Address: 0x2ddc84 - 0x2ddd08
void caseD_9_0x2ddc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2ddc84");
#endif

    switch (ctx->pc) {
        case 0x2ddc98u: goto label_2ddc98;
        case 0x2ddca4u: goto label_2ddca4;
        case 0x2ddcb4u: goto label_2ddcb4;
        case 0x2ddcc0u: goto label_2ddcc0;
        default: break;
    }

    ctx->pc = 0x2ddc84u;

    // 0x2ddc84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2ddc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2ddc8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddc8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddc90: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DDC90u;
    SET_GPR_U32(ctx, 31, 0x2DDC98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDC90u, 0x2DDC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC98u;
label_2ddc98:
    // 0x2ddc98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DDCA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDC9Cu, 0x2DDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCA4u;
label_2ddca4:
    // 0x2ddca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddca8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddcac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DDCACu;
    SET_GPR_U32(ctx, 31, 0x2DDCB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDCACu, 0x2DDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCB4u;
label_2ddcb4:
    // 0x2ddcb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcb8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DDCB8u;
    SET_GPR_U32(ctx, 31, 0x2DDCC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDCB8u, 0x2DDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCC0u;
label_2ddcc0:
    // 0x2ddcc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ddcc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddcc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcc8: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2ddcc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ddccc: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2DDCCCu;
    {
        const bool branch_taken_0x2ddccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddccc) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDCD4u;
    // 0x2ddcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddcd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcdc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ddcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ddce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddce4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ddce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddce8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2ddcecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddcf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddcf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddcfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ddd00: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DDD00u;
    {
        const bool branch_taken_0x2ddd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd00) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDD08u;
}
