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

// Function: point_serch_connection_y
// Address: 0x253590 - 0x2536d4
void point_serch_connection_y_0x253590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("point_serch_connection_y_0x253590");
#endif

    switch (ctx->pc) {
        case 0x253628u: goto label_253628;
        case 0x253680u: goto label_253680;
        default: break;
    }

    ctx->pc = 0x253590u;

    // 0x253590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x253590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x253594: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x253594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x253598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25359c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2535a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2535a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2535a4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2535a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2535a8: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2535a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x2535ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2535acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2535b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2535b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2535b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2535b8: 0x8c520104  lw          $s2, 0x104($v0)
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2535bc: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2535bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2535c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2535c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2535c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2535c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2535c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2535c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2535cc: 0x0  nop
    ctx->pc = 0x2535ccu;
    // NOP
    // 0x2535d0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2535d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2535d4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2535d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2535d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2535d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2535dc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2535dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2535e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2535e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2535e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2535e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2535e8: 0x0  nop
    ctx->pc = 0x2535e8u;
    // NOP
    // 0x2535ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2535ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2535f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2535f4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2535f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2535f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2535f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2535fc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2535fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253600: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253600u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253608: 0x0  nop
    ctx->pc = 0x253608u;
    // NOP
    // 0x25360c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x253610: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253614: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x253614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253618: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25361c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253620: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253620u;
    SET_GPR_U32(ctx, 31, 0x253628u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253620u, 0x253628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253628u;
label_253628:
    // 0x253628: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x253628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25362c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25362cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253630: 0x0  nop
    ctx->pc = 0x253630u;
    // NOP
    // 0x253634: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253638: 0x0  nop
    ctx->pc = 0x253638u;
    // NOP
    // 0x25363c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25363Cu;
    {
        const bool branch_taken_0x25363c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25363c) {
            ctx->pc = 0x253648u;
            goto label_253648;
        }
    }
    ctx->pc = 0x253644u;
    // 0x253644: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253648:
    // 0x253648: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25364c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x25364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x253650: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253654: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253658: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253658u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25365c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25365cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253660: 0x0  nop
    ctx->pc = 0x253660u;
    // NOP
    // 0x253664: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x253664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x253668: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25366c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253670: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253674: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x253674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253678: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253678u;
    SET_GPR_U32(ctx, 31, 0x253680u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253678u, 0x253680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253680u;
label_253680:
    // 0x253680: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x253680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253688: 0x0  nop
    ctx->pc = 0x253688u;
    // NOP
    // 0x25368c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253690: 0x0  nop
    ctx->pc = 0x253690u;
    // NOP
    // 0x253694: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x253694u;
    {
        const bool branch_taken_0x253694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253694) {
            ctx->pc = 0x2536A0u;
            goto label_2536a0;
        }
    }
    ctx->pc = 0x25369Cu;
    // 0x25369c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25369cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2536a0:
    // 0x2536a0: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536A0u;
    {
        const bool branch_taken_0x2536a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2536a0) {
            ctx->pc = 0x2536B4u;
            goto label_2536b4;
        }
    }
    ctx->pc = 0x2536A8u;
    // 0x2536a8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2536a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2536ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2536ACu;
    {
        const bool branch_taken_0x2536ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2536ac) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x2536B4u;
label_2536b4:
    // 0x2536b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2536b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2536b8:
    // 0x2536b8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2536b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2536bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2536bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2536c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2536c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2536c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2536c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536c8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2536c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2536cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2536CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2536D4u;
}
