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

// Function: caseD_1
// Address: 0x3511bc - 0x35124c
void caseD_1_0x3511bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x3511bc");
#endif

    switch (ctx->pc) {
        case 0x3511ccu: goto label_3511cc;
        case 0x3511dcu: goto label_3511dc;
        case 0x3511f0u: goto label_3511f0;
        case 0x351200u: goto label_351200;
        case 0x351240u: goto label_351240;
        default: break;
    }

    ctx->pc = 0x3511bcu;

    // 0x3511bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3511c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3511c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3511c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3511C4u;
    SET_GPR_U32(ctx, 31, 0x3511CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3511C4u, 0x3511CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511CCu;
label_3511cc:
    // 0x3511cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3511ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3511d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3511d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3511D4u;
    SET_GPR_U32(ctx, 31, 0x3511DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3511D4u, 0x3511DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511DCu;
label_3511dc:
    // 0x3511dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3511dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3511e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3511e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3511e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3511e8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3511E8u;
    SET_GPR_U32(ctx, 31, 0x3511F0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3511E8u, 0x3511F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511F0u;
label_3511f0:
    // 0x3511f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3511f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3511f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3511f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3511F8u;
    SET_GPR_U32(ctx, 31, 0x351200u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3511F8u, 0x351200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351200u;
label_351200:
    // 0x351200: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351204: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351208: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x351208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35120c: 0x106002a3  beqz        $v1, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x35120Cu;
    {
        const bool branch_taken_0x35120c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35120c) {
            ctx->pc = 0x351C9Cu;
            return;
        }
    }
    ctx->pc = 0x351214u;
    // 0x351214: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351218: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35121c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x35121cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x351220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351224: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351228: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x351228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35122c: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x35122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
    // 0x351230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351238: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351238u;
    SET_GPR_U32(ctx, 31, 0x351240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351238u, 0x351240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351240u;
label_351240:
    // 0x351240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351244: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x351244u;
    {
        const bool branch_taken_0x351244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351244) {
            ctx->pc = 0x351C9Cu;
            return;
        }
    }
    ctx->pc = 0x35124Cu;
}
