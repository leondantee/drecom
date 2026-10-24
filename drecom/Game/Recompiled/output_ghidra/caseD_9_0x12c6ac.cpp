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
// Address: 0x12c6ac - 0x12c744
void caseD_9_0x12c6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x12c6ac");
#endif

    switch (ctx->pc) {
        case 0x12c6c0u: goto label_12c6c0;
        case 0x12c6d4u: goto label_12c6d4;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c6f8u: goto label_12c6f8;
        default: break;
    }

    ctx->pc = 0x12c6acu;

    // 0x12c6ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c6b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c6b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12C6B8u;
    SET_GPR_U32(ctx, 31, 0x12C6C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C6B8u, 0x12C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6C0u;
label_12c6c0:
    // 0x12c6c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c6c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12c6c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12c6cc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12C6CCu;
    SET_GPR_U32(ctx, 31, 0x12C6D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12C6CCu, 0x12C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6D4u;
label_12c6d4:
    // 0x12c6d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c6d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c6dc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12C6DCu;
    SET_GPR_U32(ctx, 31, 0x12C6E4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C6DCu, 0x12C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6E4u;
label_12c6e4:
    // 0x12c6e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12c6e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c6e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c6f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12C6F0u;
    SET_GPR_U32(ctx, 31, 0x12C6F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C6F0u, 0x12C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6F8u;
label_12c6f8:
    // 0x12c6f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6fc: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x12c6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x12c700: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12C700u;
    {
        const bool branch_taken_0x12c700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c700) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C708u;
    // 0x12c708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c70c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c710: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x12c710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12c714: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12c714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c71c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c724: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x12c724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c72c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c730: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12c738: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x12c738u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c73c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C87Cu;
            return;
        }
    }
    ctx->pc = 0x12C744u;
}
