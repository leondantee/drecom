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

// Function: Pl_scr_hosei
// Address: 0x162f40 - 0x163044
void Pl_scr_hosei_0x162f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_scr_hosei_0x162f40");
#endif

    switch (ctx->pc) {
        case 0x162fc0u: goto label_162fc0;
        case 0x162fd0u: goto label_162fd0;
        default: break;
    }

    ctx->pc = 0x162f40u;

    // 0x162f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162f44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x162f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x162f48: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x162f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x162f4c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x162f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x162f50: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x162f50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x162f54: 0xe7ad0048  swc1        $f13, 0x48($sp)
    ctx->pc = 0x162f54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x162f58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x162f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162f5c: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x162f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x162f60: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x162f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x162f64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162f68: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x162f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x162f6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f70: 0xc44011e0  lwc1        $f0, 0x11E0($v0)
    ctx->pc = 0x162f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x162f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x162f78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f7c: 0xc44011e4  lwc1        $f0, 0x11E4($v0)
    ctx->pc = 0x162f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x162f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x162f84: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x162f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f8c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x162f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x162f90: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x162f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x162f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x162f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f9c: 0x0  nop
    ctx->pc = 0x162f9cu;
    // NOP
    // 0x162fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162fa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fa8: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x162fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x162fac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x162fb4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x162fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x162fb8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x162FB8u;
    SET_GPR_U32(ctx, 31, 0x162FC0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x162FC0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162FC0u) { return; }
    ctx->pc = 0x162FC0u;
label_162fc0:
    // 0x162fc0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162fc8: 0xc05a400  jal         func_169000
    ctx->pc = 0x162FC8u;
    SET_GPR_U32(ctx, 31, 0x162FD0u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x162FC8u, 0x162FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162FD0u;
label_162fd0:
    // 0x162fd0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fd4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x162fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162fd8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x162fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162fdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162fdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162fe0: 0x0  nop
    ctx->pc = 0x162fe0u;
    // NOP
    // 0x162fe4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x162FE4u;
    {
        const bool branch_taken_0x162fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162fe4) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x162FECu;
    // 0x162fec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x162fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ff0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x162ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162ff4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x162ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162ff8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162ffc: 0x0  nop
    ctx->pc = 0x162ffcu;
    // NOP
    // 0x163000: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x163000u;
    {
        const bool branch_taken_0x163000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163000) {
            ctx->pc = 0x16301Cu;
            goto label_16301c;
        }
    }
    ctx->pc = 0x163008u;
    // 0x163008: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x163008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16300c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x163010: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x163010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x163014: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x163014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x163018: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x163018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_16301c:
    // 0x16301c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163020: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163024: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x163024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x163028: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x163028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16302c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163030: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x163030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x163034: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x163034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163038: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x163038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16303c: 0x3e00008  jr          $ra
    ctx->pc = 0x16303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163044u;
}
