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

// Function: entry_00235f48
// Address: 0x235f48 - 0x2360a8
void entry_00235f48_0x235f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235f48_0x235f48");
#endif

    switch (ctx->pc) {
        case 0x235f64u: goto label_235f64;
        case 0x235f88u: goto label_235f88;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fe4u: goto label_235fe4;
        case 0x23600cu: goto label_23600c;
        case 0x236028u: goto label_236028;
        case 0x23604cu: goto label_23604c;
        case 0x236064u: goto label_236064;
        case 0x236078u: goto label_236078;
        default: break;
    }

    ctx->pc = 0x235f48u;

    // 0x235f48: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f4c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x235f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x235f50: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x235f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x235f54: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235f5c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x235F5Cu;
    SET_GPR_U32(ctx, 31, 0x235F64u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F5Cu, 0x235F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F64u;
label_235f64:
    // 0x235f64: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f68: 0x8c470058  lw          $a3, 0x58($v0)
    ctx->pc = 0x235f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x235f6c: 0x24e601b0  addiu       $a2, $a3, 0x1B0
    ctx->pc = 0x235f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
    // 0x235f70: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x235f70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235f74: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235f7c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235f80: 0xc079140  jal         func_1E4500
    ctx->pc = 0x235F80u;
    SET_GPR_U32(ctx, 31, 0x235F88u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F80u, 0x235F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F88u;
label_235f88:
    // 0x235f88: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f8c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x235f90: 0x245105a0  addiu       $s1, $v0, 0x5A0
    ctx->pc = 0x235f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x235f94: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f98: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235f9c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x235F9Cu;
    SET_GPR_U32(ctx, 31, 0x235FA4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F9Cu, 0x235FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FA4u;
label_235fa4:
    // 0x235fa4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235fa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235fa8: 0x8fb50118  lw          $s5, 0x118($sp)
    ctx->pc = 0x235fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235fac: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x235fb0: 0x24510630  addiu       $s1, $v0, 0x630
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x235fb4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235fb8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235fbc: 0xc079140  jal         func_1E4500
    ctx->pc = 0x235FBCu;
    SET_GPR_U32(ctx, 31, 0x235FC4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235FBCu, 0x235FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FC4u;
label_235fc4:
    // 0x235fc4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235fc8: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x235fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x235fcc: 0x24c203f0  addiu       $v0, $a2, 0x3F0
    ctx->pc = 0x235fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x235fd0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x235fd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235fd4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235fd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x235fdc: 0xc079140  jal         func_1E4500
    ctx->pc = 0x235FDCu;
    SET_GPR_U32(ctx, 31, 0x235FE4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235FDCu, 0x235FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FE4u;
label_235fe4:
    // 0x235fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235fe8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235fec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x235ff0: 0x24440510  addiu       $a0, $v0, 0x510
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x235ff4: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x235ff4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x235ff8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235ffc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236000: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x236000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x236004: 0xc079140  jal         func_1E4500
    ctx->pc = 0x236004u;
    SET_GPR_U32(ctx, 31, 0x23600Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236004u, 0x23600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23600Cu;
label_23600c:
    // 0x23600c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x23600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x236010: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x236010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x236014: 0x24d102d0  addiu       $s1, $a2, 0x2D0
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 720));
    // 0x236018: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23601c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x23601cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x236020: 0xc079140  jal         func_1E4500
    ctx->pc = 0x236020u;
    SET_GPR_U32(ctx, 31, 0x236028u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236020u, 0x236028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236028u;
label_236028:
    // 0x236028: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x236028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23602c: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x23602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x236030: 0x24a40750  addiu       $a0, $a1, 0x750
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    // 0x236034: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x236034u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x236038: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23603c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x23603cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236040: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x236040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x236044: 0xc079140  jal         func_1E4500
    ctx->pc = 0x236044u;
    SET_GPR_U32(ctx, 31, 0x23604Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236044u, 0x23604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23604Cu;
label_23604c:
    // 0x23604c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x236050: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x236050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x236054: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x236054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x236058: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23605c: 0xc07e3d0  jal         func_1F8F40
    ctx->pc = 0x23605Cu;
    SET_GPR_U32(ctx, 31, 0x236064u);
    ctx->pc = 0x1F8F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F40u, 0x23605Cu, 0x236064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236064u;
label_236064:
    // 0x236064: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x236064u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236068: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x236068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23606c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23606cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236070: 0xc08ff8c  jal         func_23FE30
    ctx->pc = 0x236070u;
    SET_GPR_U32(ctx, 31, 0x236078u);
    ctx->pc = 0x23FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FE30u, 0x236070u, 0x236078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x236078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23607c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x23607cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236080: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x236080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236084: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x236084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x236088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23608c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23608cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23609c: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x23609cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2360a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2360A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2360A8u;
}
