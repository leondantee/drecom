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

// Function: entry_00159784
// Address: 0x159784 - 0x159898
void entry_00159784_0x159784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159784_0x159784");
#endif

    switch (ctx->pc) {
        case 0x159878u: goto label_159878;
        case 0x159894u: goto label_159894;
        default: break;
    }

    ctx->pc = 0x159784u;

    // 0x159784: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x159784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159788: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15978c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15978cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159790: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x159790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159794: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x159794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159798: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15979c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15979cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1597a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1597a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1597a4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1597a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1597a8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1597a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1597ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1597acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1597b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1597b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1597b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597b8: 0xc44201a0  lwc1        $f2, 0x1A0($v0)
    ctx->pc = 0x1597b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1597bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597c0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1597c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1597c4: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1597c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1597c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1597c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1597cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1597ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1597d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597d4: 0xe4400190  swc1        $f0, 0x190($v0)
    ctx->pc = 0x1597d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 400), bits); }
    // 0x1597d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597dc: 0xc44201a4  lwc1        $f2, 0x1A4($v0)
    ctx->pc = 0x1597dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1597e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1597e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1597e8: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1597e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1597ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1597ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1597f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1597f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1597f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1597f8: 0xe4400194  swc1        $f0, 0x194($v0)
    ctx->pc = 0x1597f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 404), bits); }
    // 0x1597fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1597fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159800: 0xc44201a8  lwc1        $f2, 0x1A8($v0)
    ctx->pc = 0x159800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159804: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159808: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x159808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15980c: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x15980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159814: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x159814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15981c: 0xe4400198  swc1        $f0, 0x198($v0)
    ctx->pc = 0x15981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 408), bits); }
    // 0x159820: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159824: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x159824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159828: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159828u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15982c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15982cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x159830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159834: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159838: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159838u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15983c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x159840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159844: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x159844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159848: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15984c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x159850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159854: 0x0  nop
    ctx->pc = 0x159854u;
    // NOP
    // 0x159858: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x159858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15985c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159860: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x159860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x159864: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159868: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x15986c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15986cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x159870: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159870u;
    SET_GPR_U32(ctx, 31, 0x159878u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159878u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159878u) { return; }
    ctx->pc = 0x159878u;
label_159878:
    // 0x159878: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159880: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159884: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159888: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15988c: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x15988Cu;
    SET_GPR_U32(ctx, 31, 0x159894u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x15988Cu, 0x159894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159894u;
label_159894:
    // 0x159894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x159898u;
}
