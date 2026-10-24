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

// Function: entry_001ec604
// Address: 0x1ec604 - 0x1ec6e8
void entry_001ec604_0x1ec604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec604_0x1ec604");
#endif

    switch (ctx->pc) {
        case 0x1ec618u: goto label_1ec618;
        case 0x1ec628u: goto label_1ec628;
        case 0x1ec63cu: goto label_1ec63c;
        case 0x1ec650u: goto label_1ec650;
        case 0x1ec680u: goto label_1ec680;
        case 0x1ec6c8u: goto label_1ec6c8;
        default: break;
    }

    ctx->pc = 0x1ec604u;

    // 0x1ec604: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec608: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ec60c: 0x24459ca0  addiu       $a1, $v0, -0x6360
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x1ec610: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EC610u;
    SET_GPR_U32(ctx, 31, 0x1EC618u);
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EC610u, 0x1EC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC618u;
label_1ec618:
    // 0x1ec618: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec61c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ec61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec620: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1EC620u;
    SET_GPR_U32(ctx, 31, 0x1EC628u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC620u, 0x1EC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC628u;
label_1ec628:
    // 0x1ec628: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ec628u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ec62c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec630: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x1ec630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec634: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1EC634u;
    SET_GPR_U32(ctx, 31, 0x1EC63Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC634u, 0x1EC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC63Cu;
label_1ec63c:
    // 0x1ec63c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1ec63cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ec640: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec644: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x1ec644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec648: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1EC648u;
    SET_GPR_U32(ctx, 31, 0x1EC650u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC648u, 0x1EC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC650u;
label_1ec650:
    // 0x1ec650: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1ec654: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ec654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ec658: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ec65c: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x1ec65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
    // 0x1ec660: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ec660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ec664: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1ec668: 0x24650ca8  addiu       $a1, $v1, 0xCA8
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3240));
    // 0x1ec66c: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1ec66cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ec670: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x1ec670u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1ec674: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1ec674u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ec678: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1EC678u;
    SET_GPR_U32(ctx, 31, 0x1EC680u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC678u, 0x1EC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC680u;
label_1ec680:
    // 0x1ec680: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec684: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ec684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec688: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1ec688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec690: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1ec690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ec694: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1ec694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec698: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec69c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1ec69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ec6a0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1ec6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec6a4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1ec6a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ec6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec6ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ec6b0: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x1ec6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
    // 0x1ec6b4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1ec6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ec6b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1ec6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1ec6bc: 0x24450cb8  addiu       $a1, $v0, 0xCB8
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x1ec6c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1EC6C0u;
    SET_GPR_U32(ctx, 31, 0x1EC6C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC6C0u, 0x1EC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6C8u;
label_1ec6c8:
    // 0x1ec6c8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1ec6c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec6dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ec6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ec6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6E8u;
}
