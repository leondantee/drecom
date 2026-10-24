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

// Function: Em0a_R1_br_run
// Address: 0x364590 - 0x364a90
void Em0a_R1_br_run_0x364590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_br_run_0x364590");
#endif

    switch (ctx->pc) {
        case 0x3645c8u: goto label_3645c8;
        case 0x3645d8u: goto label_3645d8;
        case 0x3645f0u: goto label_3645f0;
        case 0x36466cu: goto label_36466c;
        case 0x364798u: goto label_364798;
        case 0x3647d0u: goto label_3647d0;
        case 0x3647e8u: goto label_3647e8;
        case 0x3648dcu: goto label_3648dc;
        case 0x36495cu: goto label_36495c;
        case 0x364974u: goto label_364974;
        default: break;
    }

    ctx->pc = 0x364590u;

    // 0x364590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x364594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x364598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36459c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x36459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3645a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3645a4: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x3645a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3645a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3645a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3645ac: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3645acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3645b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3645b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3645b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3645b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3645b8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3645b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3645bc: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x3645bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x3645c0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3645C0u;
    SET_GPR_U32(ctx, 31, 0x3645C8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3645C0u, 0x3645C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645C8u;
label_3645c8:
    // 0x3645c8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x3645c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3645cc: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x3645ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3645d0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x3645D0u;
    SET_GPR_U32(ctx, 31, 0x3645D8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x3645D0u, 0x3645D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645D8u;
label_3645d8:
    // 0x3645d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3645d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3645dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3645dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3645e0: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x3645e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3645e4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x3645e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3645e8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3645E8u;
    SET_GPR_U32(ctx, 31, 0x3645F0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3645E8u, 0x3645F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645F0u;
label_3645f0:
    // 0x3645f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3645f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3645f4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3645f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3645f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3645f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3645fc: 0x0  nop
    ctx->pc = 0x3645fcu;
    // NOP
    // 0x364600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364604: 0x0  nop
    ctx->pc = 0x364604u;
    // NOP
    // 0x364608: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x364608u;
    {
        const bool branch_taken_0x364608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364608) {
            ctx->pc = 0x364624u;
            goto label_364624;
        }
    }
    ctx->pc = 0x364610u;
    // 0x364610: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x364610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x364614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x364614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x364618: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x364618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36461c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36461cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x364620: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_364624:
    // 0x364624: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x364624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x364628: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x364628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x36462c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x36462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x364630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364634: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x364634u;
    {
        const bool branch_taken_0x364634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364634) {
            ctx->pc = 0x364750u;
            goto label_364750;
        }
    }
    ctx->pc = 0x36463Cu;
    // 0x36463c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364640: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364644: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x364644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x364648: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x364648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x36464c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36464cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364650: 0x0  nop
    ctx->pc = 0x364650u;
    // NOP
    // 0x364654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364658: 0x0  nop
    ctx->pc = 0x364658u;
    // NOP
    // 0x36465c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x36465Cu;
    {
        const bool branch_taken_0x36465c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36465c) {
            ctx->pc = 0x364750u;
            goto label_364750;
        }
    }
    ctx->pc = 0x364664u;
    // 0x364664: 0xc067694  jal         func_19DA50
    ctx->pc = 0x364664u;
    SET_GPR_U32(ctx, 31, 0x36466Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x364664u, 0x36466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36466Cu;
label_36466c:
    // 0x36466c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36466cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364670: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x364670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x364674: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x364674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364678: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x364678u;
    {
        const bool branch_taken_0x364678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364678) {
            ctx->pc = 0x364718u;
            goto label_364718;
        }
    }
    ctx->pc = 0x364680u;
    // 0x364680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x364680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364684: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x364684u;
    {
        const bool branch_taken_0x364684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364684) {
            ctx->pc = 0x3646E0u;
            goto label_3646e0;
        }
    }
    ctx->pc = 0x36468Cu;
    // 0x36468c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364690: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364690u;
    {
        const bool branch_taken_0x364690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364690) {
            ctx->pc = 0x3646A8u;
            goto label_3646a8;
        }
    }
    ctx->pc = 0x364698u;
    // 0x364698: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364698u;
    {
        const bool branch_taken_0x364698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364698) {
            ctx->pc = 0x3646A8u;
            goto label_3646a8;
        }
    }
    ctx->pc = 0x3646A0u;
    // 0x3646a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3646A0u;
    {
        const bool branch_taken_0x3646a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646a0) {
            ctx->pc = 0x364750u;
            goto label_364750;
        }
    }
    ctx->pc = 0x3646A8u;
label_3646a8:
    // 0x3646a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3646a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3646ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3646b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3646b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3646b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3646bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3646c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3646c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3646ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3646d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3646d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3646d8: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3646D8u;
    {
        const bool branch_taken_0x3646d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646d8) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x3646E0u;
label_3646e0:
    // 0x3646e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3646e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3646e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3646ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3646f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3646f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3646fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364704: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36470c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36470cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364710: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x364710u;
    {
        const bool branch_taken_0x364710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364710) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364718u;
label_364718:
    // 0x364718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36471c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364720: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364724: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x364724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x364728: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36472c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36472cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364730: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364734: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36473c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36473cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364744: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364748: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x364748u;
    {
        const bool branch_taken_0x364748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364748) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364750u;
label_364750:
    // 0x364750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364754: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x364758: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x364758u;
    {
        const bool branch_taken_0x364758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364758) {
            ctx->pc = 0x364924u;
            goto label_364924;
        }
    }
    ctx->pc = 0x364760u;
    // 0x364760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364764: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x364764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x364768: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x364768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x36476c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x364770: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x364770u;
    {
        const bool branch_taken_0x364770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364770) {
            ctx->pc = 0x3648D4u;
            goto label_3648d4;
        }
    }
    ctx->pc = 0x364778u;
    // 0x364778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36477c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x36477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x364780: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364784: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x364784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x364788: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x364788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36478c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x36478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x364790: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x364790u;
    SET_GPR_U32(ctx, 31, 0x364798u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x364790u, 0x364798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364798u;
label_364798:
    // 0x364798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36479c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x36479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3647a0: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x3647a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x3647a4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x3647a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x3647a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3647a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3647ac: 0x0  nop
    ctx->pc = 0x3647acu;
    // NOP
    // 0x3647b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3647b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3647b4: 0x0  nop
    ctx->pc = 0x3647b4u;
    // NOP
    // 0x3647b8: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x3647B8u;
    {
        const bool branch_taken_0x3647b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3647b8) {
            ctx->pc = 0x364924u;
            goto label_364924;
        }
    }
    ctx->pc = 0x3647C0u;
    // 0x3647c0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x3647c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3647c4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x3647c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3647c8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x3647C8u;
    SET_GPR_U32(ctx, 31, 0x3647D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x3647C8u, 0x3647D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647D0u;
label_3647d0:
    // 0x3647d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3647d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3647d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3647d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3647d8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x3647d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3647dc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x3647dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3647e0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3647E0u;
    SET_GPR_U32(ctx, 31, 0x3647E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3647E0u, 0x3647E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647E8u;
label_3647e8:
    // 0x3647e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3647e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3647ec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3647ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3647f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3647f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3647f4: 0x0  nop
    ctx->pc = 0x3647f4u;
    // NOP
    // 0x3647f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3647f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3647fc: 0x0  nop
    ctx->pc = 0x3647fcu;
    // NOP
    // 0x364800: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x364800u;
    {
        const bool branch_taken_0x364800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364800) {
            ctx->pc = 0x364878u;
            goto label_364878;
        }
    }
    ctx->pc = 0x364808u;
    // 0x364808: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x364808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x36480c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x36480cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x364810: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x364810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364814: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x364814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x364818: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36481c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x36481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364820: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36482c: 0x0  nop
    ctx->pc = 0x36482cu;
    // NOP
    // 0x364830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364834: 0x0  nop
    ctx->pc = 0x364834u;
    // NOP
    // 0x364838: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x364838u;
    {
        const bool branch_taken_0x364838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364838) {
            ctx->pc = 0x364878u;
            goto label_364878;
        }
    }
    ctx->pc = 0x364840u;
    // 0x364840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364848: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36484c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364854: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36485c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36485cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364864: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36486c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36486cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364870: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x364870u;
    {
        const bool branch_taken_0x364870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364870) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364878u;
label_364878:
    // 0x364878: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36487c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x36487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364880: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364888: 0x0  nop
    ctx->pc = 0x364888u;
    // NOP
    // 0x36488c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36488cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364890: 0x0  nop
    ctx->pc = 0x364890u;
    // NOP
    // 0x364894: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x364894u;
    {
        const bool branch_taken_0x364894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364894) {
            ctx->pc = 0x364924u;
            goto label_364924;
        }
    }
    ctx->pc = 0x36489Cu;
    // 0x36489c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3648a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648a8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3648ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3648b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3648b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3648bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3648c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3648c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3648c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3648cc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3648CCu;
    {
        const bool branch_taken_0x3648cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3648cc) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x3648D4u;
label_3648d4:
    // 0x3648d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3648D4u;
    SET_GPR_U32(ctx, 31, 0x3648DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3648D4u, 0x3648DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648DCu;
label_3648dc:
    // 0x3648dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3648dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3648e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3648e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3648e4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3648E4u;
    {
        const bool branch_taken_0x3648e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3648e4) {
            ctx->pc = 0x364924u;
            goto label_364924;
        }
    }
    ctx->pc = 0x3648ECu;
    // 0x3648ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3648ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3648f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3648f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3648fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364900: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364908: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36490c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364910: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364914: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36491c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x36491Cu;
    {
        const bool branch_taken_0x36491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36491c) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364924u;
label_364924:
    // 0x364924: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364928: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36492c: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x36492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
    // 0x364930: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x364934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364938: 0x0  nop
    ctx->pc = 0x364938u;
    // NOP
    // 0x36493c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36493cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364940: 0x0  nop
    ctx->pc = 0x364940u;
    // NOP
    // 0x364944: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x364944u;
    {
        const bool branch_taken_0x364944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364944) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x36494Cu;
    // 0x36494c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x36494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364950: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364954: 0xc0455e6  jal         func_115798
    ctx->pc = 0x364954u;
    SET_GPR_U32(ctx, 31, 0x36495Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364954u, 0x36495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36495Cu;
label_36495c:
    // 0x36495c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364964: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x364964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364968: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x364968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36496c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x36496Cu;
    SET_GPR_U32(ctx, 31, 0x364974u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x36496Cu, 0x364974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364974u;
label_364974:
    // 0x364974: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36497c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36497cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364980: 0x0  nop
    ctx->pc = 0x364980u;
    // NOP
    // 0x364984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364988: 0x0  nop
    ctx->pc = 0x364988u;
    // NOP
    // 0x36498c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x36498Cu;
    {
        const bool branch_taken_0x36498c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36498c) {
            ctx->pc = 0x364A08u;
            goto label_364a08;
        }
    }
    ctx->pc = 0x364994u;
    // 0x364994: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364998: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x364998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x36499c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x36499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3649a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3649a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3649a4: 0x0  nop
    ctx->pc = 0x3649a4u;
    // NOP
    // 0x3649a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3649a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3649ac: 0x0  nop
    ctx->pc = 0x3649acu;
    // NOP
    // 0x3649b0: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x3649B0u;
    {
        const bool branch_taken_0x3649b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3649b0) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x3649B8u;
    // 0x3649b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3649bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3649c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3649c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3649c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3649c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3649c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3649C8u;
    {
        const bool branch_taken_0x3649c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3649c8) {
            ctx->pc = 0x364A00u;
            goto label_364a00;
        }
    }
    ctx->pc = 0x3649D0u;
    // 0x3649d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3649d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3649d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3649d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3649dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3649dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3649e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3649e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3649e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3649ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3649f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3649f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3649f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3649fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_364a00:
    // 0x364a00: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x364A00u;
    {
        const bool branch_taken_0x364a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a00) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364A08u;
label_364a08:
    // 0x364a08: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364a0c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364a10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364a18: 0x0  nop
    ctx->pc = 0x364a18u;
    // NOP
    // 0x364a1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364a20: 0x0  nop
    ctx->pc = 0x364a20u;
    // NOP
    // 0x364a24: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x364A24u;
    {
        const bool branch_taken_0x364a24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364a24) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364A2Cu;
    // 0x364a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x364a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x364a34: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x364a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x364a38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364a3c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x364A3Cu;
    {
        const bool branch_taken_0x364a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x364a3c) {
            ctx->pc = 0x364A74u;
            goto label_364a74;
        }
    }
    ctx->pc = 0x364A44u;
    // 0x364a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364a50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x364a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a58: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364a5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364a64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364a6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_364a74:
    // 0x364a74: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x364A74u;
    {
        const bool branch_taken_0x364a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a74) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364A7Cu;
label_364a7c:
    // 0x364a7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x364a7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364a84: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x364a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x364a88: 0x3e00008  jr          $ra
    ctx->pc = 0x364A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364A90u;
}
