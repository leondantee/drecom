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

// Function: entry_0022cdd8
// Address: 0x22cdd8 - 0x22cedc
void entry_0022cdd8_0x22cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cdd8_0x22cdd8");
#endif

    switch (ctx->pc) {
        case 0x22ce50u: goto label_22ce50;
        case 0x22ce88u: goto label_22ce88;
        case 0x22cea8u: goto label_22cea8;
        default: break;
    }

    ctx->pc = 0x22cdd8u;

    // 0x22cdd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cddc: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x22cde0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x22CDE0u;
    {
        const bool branch_taken_0x22cde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cde0) {
            ctx->pc = 0x22CF08u;
            return;
        }
    }
    ctx->pc = 0x22CDE8u;
    // 0x22cde8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22cdec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22cdecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cdf0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22cdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cdf8: 0x0  nop
    ctx->pc = 0x22cdf8u;
    // NOP
    // 0x22cdfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22cdfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ce00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce04: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22ce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22ce08: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22ce0c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22ce10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22ce10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22ce14: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x22ce18: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22ce1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x22ce1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22ce20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce24: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce2c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22ce30: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ce34: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x22ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22ce38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22ce3c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22ce40: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x22ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22ce44: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x22ce44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x22ce48: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x22CE48u;
    SET_GPR_U32(ctx, 31, 0x22CE50u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x22CE48u, 0x22CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE50u;
label_22ce50:
    // 0x22ce50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce54: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22ce54u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22ce5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ce5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ce60: 0x0  nop
    ctx->pc = 0x22ce60u;
    // NOP
    // 0x22ce64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ce68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ce6c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22ce6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22ce70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce78: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ce7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ce80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22CE80u;
    SET_GPR_U32(ctx, 31, 0x22CE88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22CE80u, 0x22CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE88u;
label_22ce88:
    // 0x22ce88: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22ce90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ce94: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce98: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ce9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22cea0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22CEA0u;
    SET_GPR_U32(ctx, 31, 0x22CEA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22CEA0u, 0x22CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEA8u;
label_22cea8:
    // 0x22cea8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ceac: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ceb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ceb4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ceb8: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x22ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x22cebc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22cec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cec4: 0x0  nop
    ctx->pc = 0x22cec4u;
    // NOP
    // 0x22cec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ced0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22CED0u;
    {
        const bool branch_taken_0x22ced0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ced0) {
            ctx->pc = 0x22CEDCu;
            return;
        }
    }
    ctx->pc = 0x22CED8u;
    // 0x22ced8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22ced8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22cedcu;
}
