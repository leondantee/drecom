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

// Function: entry_00364dd0
// Address: 0x364dd0 - 0x364f04
void entry_00364dd0_0x364dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364dd0_0x364dd0");
#endif

    switch (ctx->pc) {
        case 0x364de0u: goto label_364de0;
        case 0x364decu: goto label_364dec;
        case 0x364dfcu: goto label_364dfc;
        case 0x364e08u: goto label_364e08;
        case 0x364e38u: goto label_364e38;
        case 0x364e5cu: goto label_364e5c;
        case 0x364e94u: goto label_364e94;
        case 0x364eacu: goto label_364eac;
        default: break;
    }

    ctx->pc = 0x364dd0u;

    // 0x364dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364dd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364dd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364dd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364DD8u;
    SET_GPR_U32(ctx, 31, 0x364DE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364DD8u, 0x364DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DE0u;
label_364de0:
    // 0x364de0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364de4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x364DE4u;
    SET_GPR_U32(ctx, 31, 0x364DECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364DE4u, 0x364DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DECu;
label_364dec:
    // 0x364dec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364df4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x364DF4u;
    SET_GPR_U32(ctx, 31, 0x364DFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364DF4u, 0x364DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DFCu;
label_364dfc:
    // 0x364dfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364e00: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364E00u;
    SET_GPR_U32(ctx, 31, 0x364E08u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364E00u, 0x364E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E08u;
label_364e08:
    // 0x364e08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364e0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x364e10: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x364E10u;
    {
        const bool branch_taken_0x364e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364e10) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x364E18u;
    // 0x364e18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364e1c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x364e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x364e20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364e24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x364e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x364e28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x364e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x364e2c: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x364e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x364e30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x364E30u;
    SET_GPR_U32(ctx, 31, 0x364E38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x364E30u, 0x364E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E38u;
label_364e38:
    // 0x364e38: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x364e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364e3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x364e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364e40: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x364e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x364e44: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x364e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364e48: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x364e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x364e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x364e50: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x364e50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x364e54: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x364E54u;
    SET_GPR_U32(ctx, 31, 0x364E5Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x364E54u, 0x364E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E5Cu;
label_364e5c:
    // 0x364e5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364e60: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364e64: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x364e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
    // 0x364e68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x364e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364e70: 0x0  nop
    ctx->pc = 0x364e70u;
    // NOP
    // 0x364e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364e78: 0x0  nop
    ctx->pc = 0x364e78u;
    // NOP
    // 0x364e7c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x364E7Cu;
    {
        const bool branch_taken_0x364e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364e7c) {
            ctx->pc = 0x364F3Cu;
            return;
        }
    }
    ctx->pc = 0x364E84u;
    // 0x364e84: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x364e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364e88: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364e8c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x364E8Cu;
    SET_GPR_U32(ctx, 31, 0x364E94u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364E8Cu, 0x364E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E94u;
label_364e94:
    // 0x364e94: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x364e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x364e98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364e9c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x364e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364ea0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x364ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364ea4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x364EA4u;
    SET_GPR_U32(ctx, 31, 0x364EACu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x364EA4u, 0x364EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EACu;
label_364eac:
    // 0x364eac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x364eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x364eb0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364eb8: 0x0  nop
    ctx->pc = 0x364eb8u;
    // NOP
    // 0x364ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364ec0: 0x0  nop
    ctx->pc = 0x364ec0u;
    // NOP
    // 0x364ec4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x364EC4u;
    {
        const bool branch_taken_0x364ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364ec4) {
            ctx->pc = 0x364F04u;
            return;
        }
    }
    ctx->pc = 0x364ECCu;
    // 0x364ecc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364ed0: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x364ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x364ed4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364edc: 0x0  nop
    ctx->pc = 0x364edcu;
    // NOP
    // 0x364ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364ee4: 0x0  nop
    ctx->pc = 0x364ee4u;
    // NOP
    // 0x364ee8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x364EE8u;
    {
        const bool branch_taken_0x364ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364ee8) {
            ctx->pc = 0x364F3Cu;
            return;
        }
    }
    ctx->pc = 0x364EF0u;
    // 0x364ef0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x364ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364ef4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364ef8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x364ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x364efc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x364EFCu;
    {
        const bool branch_taken_0x364efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364efc) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x364F04u;
}
