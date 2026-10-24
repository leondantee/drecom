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

// Function: Em1f_R1_fly
// Address: 0x298520 - 0x29879c
void Em1f_R1_fly_0x298520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R1_fly_0x298520");
#endif

    switch (ctx->pc) {
        case 0x298534u: goto label_298534;
        case 0x298568u: goto label_298568;
        case 0x29857cu: goto label_29857c;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985d8u: goto label_2985d8;
        case 0x2986c4u: goto label_2986c4;
        case 0x2986f4u: goto label_2986f4;
        case 0x298778u: goto label_298778;
        default: break;
    }

    ctx->pc = 0x298520u;

    // 0x298520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298524: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x298524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x298528: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x298528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x29852c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x29852Cu;
    SET_GPR_U32(ctx, 31, 0x298534u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x29852Cu, 0x298534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298534u;
label_298534:
    // 0x298534: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x298534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x298538: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x298538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29853c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29853cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298540: 0x0  nop
    ctx->pc = 0x298540u;
    // NOP
    // 0x298544: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x298544u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29854c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298550: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x298554: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x298554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298558: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x298558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29855c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x298560: 0xc05c848  jal         func_172120
    ctx->pc = 0x298560u;
    SET_GPR_U32(ctx, 31, 0x298568u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x298560u, 0x298568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298568u;
label_298568:
    // 0x298568: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29856c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298570: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x298570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298574: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x298574u;
    SET_GPR_U32(ctx, 31, 0x29857Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x298574u, 0x29857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29857Cu;
label_29857c:
    // 0x29857c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298580: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x298580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x298584: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298588: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x298588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29858c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x298590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298594: 0x0  nop
    ctx->pc = 0x298594u;
    // NOP
    // 0x298598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29859c: 0x0  nop
    ctx->pc = 0x29859cu;
    // NOP
    // 0x2985a0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2985A0u;
    {
        const bool branch_taken_0x2985a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2985a0) {
            ctx->pc = 0x2985C4u;
            goto label_2985c4;
        }
    }
    ctx->pc = 0x2985A8u;
    // 0x2985a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2985ac: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2985acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2985b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2985b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2985b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2985b8: 0x0  nop
    ctx->pc = 0x2985b8u;
    // NOP
    // 0x2985bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2985bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2985c0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2985c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2985c4:
    // 0x2985c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2985c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2985C8u;
    SET_GPR_U32(ctx, 31, 0x2985D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2985C8u, 0x2985D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D0u;
label_2985d0:
    // 0x2985d0: 0xc0a60cc  jal         func_298330
    ctx->pc = 0x2985D0u;
    SET_GPR_U32(ctx, 31, 0x2985D8u);
    ctx->pc = 0x298330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298330u, 0x2985D0u, 0x2985D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D8u;
label_2985d8:
    // 0x2985d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2985d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2985dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2985dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2985e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985e4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2985e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2985ec: 0x0  nop
    ctx->pc = 0x2985ecu;
    // NOP
    // 0x2985f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2985F0u;
    {
        const bool branch_taken_0x2985f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2985f0) {
            ctx->pc = 0x298610u;
            goto label_298610;
        }
    }
    ctx->pc = 0x2985F8u;
    // 0x2985f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2985f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2985fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2985fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298600: 0x0  nop
    ctx->pc = 0x298600u;
    // NOP
    // 0x298604: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x298604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x298608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298608u;
    {
        const bool branch_taken_0x298608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298608) {
            ctx->pc = 0x298620u;
            goto label_298620;
        }
    }
    ctx->pc = 0x298610u;
label_298610:
    // 0x298610: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x298610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x298614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298618: 0x0  nop
    ctx->pc = 0x298618u;
    // NOP
    // 0x29861c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x29861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_298620:
    // 0x298620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298624: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298628: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x298628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29862c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29862cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298630: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x298634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298638: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29863c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x298640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298644: 0x0  nop
    ctx->pc = 0x298644u;
    // NOP
    // 0x298648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29864c: 0x0  nop
    ctx->pc = 0x29864cu;
    // NOP
    // 0x298650: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x298650u;
    {
        const bool branch_taken_0x298650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298650) {
            ctx->pc = 0x298668u;
            goto label_298668;
        }
    }
    ctx->pc = 0x298658u;
    // 0x298658: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x29865c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29865cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298664: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_298668:
    // 0x298668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29866c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x29866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298670: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x298670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298678: 0x0  nop
    ctx->pc = 0x298678u;
    // NOP
    // 0x29867c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29867cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298680: 0x0  nop
    ctx->pc = 0x298680u;
    // NOP
    // 0x298684: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298684u;
    {
        const bool branch_taken_0x298684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298684) {
            ctx->pc = 0x29869Cu;
            goto label_29869c;
        }
    }
    ctx->pc = 0x29868Cu;
    // 0x29868c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x29868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298698: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_29869c:
    // 0x29869c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986a0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2986a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2986a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2986a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2986ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2986acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2986b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2986b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2986b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2986b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2986b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2986bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2986BCu;
    SET_GPR_U32(ctx, 31, 0x2986C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2986BCu, 0x2986C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986C4u;
label_2986c4:
    // 0x2986c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986c8: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x2986c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x2986cc: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2986CCu;
    {
        const bool branch_taken_0x2986cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2986cc) {
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x2986D4u;
    // 0x2986d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2986d8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2986d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2986dc: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2986DCu;
    {
        const bool branch_taken_0x2986dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2986dc) {
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x2986E4u;
    // 0x2986e4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2986e8: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x2986e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x2986ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2986ECu;
    SET_GPR_U32(ctx, 31, 0x2986F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2986F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2986F4u) { return; }
    ctx->pc = 0x2986F4u;
label_2986f4:
    // 0x2986f4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2986f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2986f8: 0x24423500  addiu       $v0, $v0, 0x3500
    ctx->pc = 0x2986f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x2986fc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298700: 0xac223540  sw          $v0, 0x3540($at)
    ctx->pc = 0x298700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x813540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813540u, _value); } while (0);
    // 0x298704: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298708: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x298708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29870c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29870cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298710: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x298714: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x298718: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x298718u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x813550u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x813550u, _value); } while (0);
    // 0x29871c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29871cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298720: 0xc4213554  lwc1        $f1, 0x3554($at)
    ctx->pc = 0x298720u;
    { uint32_t bits = FAST_READ32(0x813554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298724: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x298724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x298728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29872c: 0x0  nop
    ctx->pc = 0x29872cu;
    // NOP
    // 0x298730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298734: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298738: 0xe4203554  swc1        $f0, 0x3554($at)
    ctx->pc = 0x298738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x813554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813554u, _value); } while (0); }
    // 0x29873c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x29873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x298740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298744: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298748: 0xe4203560  swc1        $f0, 0x3560($at)
    ctx->pc = 0x298748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x813560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813560u, _value); } while (0); }
    // 0x29874c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298750: 0xa4203564  sh          $zero, 0x3564($at)
    ctx->pc = 0x298750u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813564u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x813564u, _value); } while (0);
    // 0x298754: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298758: 0xa0203566  sb          $zero, 0x3566($at)
    ctx->pc = 0x298758u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813566u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x813566u, _value); } while (0);
    // 0x29875c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298760: 0xa0203567  sb          $zero, 0x3567($at)
    ctx->pc = 0x298760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813567u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x813567u, _value); } while (0);
    // 0x298764: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298768: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x298768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x29876c: 0x24453540  addiu       $a1, $v0, 0x3540
    ctx->pc = 0x29876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x298770: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 31, 0x298778u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x298770u, 0x298778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298778u;
label_298778:
    // 0x298778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298778u;
    {
        const bool branch_taken_0x298778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298778) {
            ctx->pc = 0x29878Cu;
            goto label_29878c;
        }
    }
    ctx->pc = 0x298780u;
    // 0x298780: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x298780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x298784: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298788: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x298788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
label_29878c:
    // 0x29878c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29878cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298794: 0x3e00008  jr          $ra
    ctx->pc = 0x298794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29879Cu;
}
