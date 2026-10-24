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

// Function: entry_00371620
// Address: 0x371620 - 0x371708
void entry_00371620_0x371620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371620_0x371620");
#endif

    switch (ctx->pc) {
        case 0x371634u: goto label_371634;
        case 0x371640u: goto label_371640;
        case 0x371648u: goto label_371648;
        case 0x371660u: goto label_371660;
        case 0x3716a4u: goto label_3716a4;
        case 0x3716b0u: goto label_3716b0;
        case 0x3716b8u: goto label_3716b8;
        case 0x3716fcu: goto label_3716fc;
        default: break;
    }

    ctx->pc = 0x371620u;

    // 0x371620: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371624: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371628: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37162c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x37162Cu;
    SET_GPR_U32(ctx, 31, 0x371634u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x37162Cu, 0x371634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371634u;
label_371634:
    // 0x371634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371638: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371638u;
    SET_GPR_U32(ctx, 31, 0x371640u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371638u, 0x371640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371640u;
label_371640:
    // 0x371640: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x371640u;
    SET_GPR_U32(ctx, 31, 0x371648u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x371640u, 0x371648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371648u;
label_371648:
    // 0x371648: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x371648u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37164c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371650: 0x1623002d  bne         $s1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x371650u;
    {
        const bool branch_taken_0x371650 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x371650) {
            ctx->pc = 0x371708u;
            return;
        }
    }
    ctx->pc = 0x371658u;
    // 0x371658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371658u;
    SET_GPR_U32(ctx, 31, 0x371660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371658u, 0x371660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371660u;
label_371660:
    // 0x371660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371664: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371668: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37166c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371670: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371678: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37167c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x371680: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x371680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371684: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371688: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x371688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37168c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x37168cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x371690: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x371690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x371694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371698: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x371698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37169c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x37169Cu;
    SET_GPR_U32(ctx, 31, 0x3716A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x37169Cu, 0x3716A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716A4u;
label_3716a4:
    // 0x3716a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3716a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3716a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3716A8u;
    SET_GPR_U32(ctx, 31, 0x3716B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3716A8u, 0x3716B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B0u;
label_3716b0:
    // 0x3716b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3716B0u;
    SET_GPR_U32(ctx, 31, 0x3716B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3716B0u, 0x3716B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B8u;
label_3716b8:
    // 0x3716b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3716b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3716bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3716bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3716c0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3716c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3716c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3716c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3716c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3716c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3716cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3716ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3716d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3716d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3716d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3716d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3716d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3716d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3716dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3716dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3716e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3716e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3716e4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3716e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3716e8: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x3716e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x3716ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3716ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3716f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3716f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3716f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3716F4u;
    SET_GPR_U32(ctx, 31, 0x3716FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3716F4u, 0x3716FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716FCu;
label_3716fc:
    // 0x3716fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3716fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x371700: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x371700u;
    SET_GPR_U32(ctx, 31, 0x371708u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x371700u, 0x371708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371708u;
}
