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

// Function: entry_0031c5d4
// Address: 0x31c5d4 - 0x31c6b4
void entry_0031c5d4_0x31c5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c5d4_0x31c5d4");
#endif

    switch (ctx->pc) {
        case 0x31c608u: goto label_31c608;
        case 0x31c614u: goto label_31c614;
        case 0x31c64cu: goto label_31c64c;
        case 0x31c658u: goto label_31c658;
        case 0x31c694u: goto label_31c694;
        case 0x31c6a0u: goto label_31c6a0;
        default: break;
    }

    ctx->pc = 0x31c5d4u;

    // 0x31c5d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c5d8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31c5dc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31c5e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c5e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c5e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31c5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31c5f0: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31c5f4: 0x24042d03  addiu       $a0, $zero, 0x2D03
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11523));
    // 0x31c5f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c5fc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c600: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C600u;
    SET_GPR_U32(ctx, 31, 0x31C608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C600u, 0x31C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C608u;
label_31c608:
    // 0x31c608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c60c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C60Cu;
    SET_GPR_U32(ctx, 31, 0x31C614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C60Cu, 0x31C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C614u;
label_31c614:
    // 0x31c614: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c614u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c618: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c61c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31c620: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31c624: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c628: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c62c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31c630: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31c634: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31c638: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
    // 0x31c63c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c63cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c640: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c644: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C644u;
    SET_GPR_U32(ctx, 31, 0x31C64Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C644u, 0x31C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C64Cu;
label_31c64c:
    // 0x31c64c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c64cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c650: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C650u;
    SET_GPR_U32(ctx, 31, 0x31C658u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C650u, 0x31C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C658u;
label_31c658:
    // 0x31c658: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c658u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c65c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x31c65cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x31c660: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c664: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31c668: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31c66c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c670: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c674: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31c678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31c67c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31c680: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
    // 0x31c684: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c688: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c68c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C68Cu;
    SET_GPR_U32(ctx, 31, 0x31C694u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C68Cu, 0x31C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C694u;
label_31c694:
    // 0x31c694: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c698: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C698u;
    SET_GPR_U32(ctx, 31, 0x31C6A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C698u, 0x31C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6A0u;
label_31c6a0:
    // 0x31c6a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31c6a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c6a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6a8: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
    // 0x31c6ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6b0: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
    ctx->pc = 0x31c6b4u;
}
