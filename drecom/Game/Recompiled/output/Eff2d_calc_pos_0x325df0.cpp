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

// Function: Eff2d_calc_pos
// Address: 0x325df0 - 0x3260e0
void Eff2d_calc_pos_0x325df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_calc_pos_0x325df0");
#endif

    switch (ctx->pc) {
        case 0x325e20u: goto label_325e20;
        case 0x325e40u: goto label_325e40;
        case 0x325f60u: goto label_325f60;
        case 0x325f70u: goto label_325f70;
        case 0x325f88u: goto label_325f88;
        case 0x325fa0u: goto label_325fa0;
        case 0x325fe0u: goto label_325fe0;
        case 0x326008u: goto label_326008;
        case 0x32607cu: goto label_32607c;
        case 0x3260a4u: goto label_3260a4;
        case 0x3260b0u: goto label_3260b0;
        case 0x3260ccu: goto label_3260cc;
        default: break;
    }

    ctx->pc = 0x325df0u;

    // 0x325df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x325df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x325df4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x325df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x325df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x325df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x325dfc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x325dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x325e00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e0c: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x325e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x325e10: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325e14: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x325e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x325e18: 0xc040c86  jal         func_103218
    ctx->pc = 0x325E18u;
    SET_GPR_U32(ctx, 31, 0x325E20u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x325E20u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x325E20u) { return; }
    ctx->pc = 0x325E20u;
label_325e20:
    // 0x325e20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e2c: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x325e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x325e30: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325e34: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x325e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x325e38: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x325E38u;
    SET_GPR_U32(ctx, 31, 0x325E40u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x325E38u, 0x325E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E40u;
label_325e40:
    // 0x325e40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e44: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x325e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x325e48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x325e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325e4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e50: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x325e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x325e54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x325e54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x325e58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e5c: 0x9042011e  lbu         $v0, 0x11E($v0)
    ctx->pc = 0x325e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 286)));
    // 0x325e60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325e68: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x325E68u;
    {
        const bool branch_taken_0x325e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x325e68) {
            ctx->pc = 0x325F28u;
            goto label_325f28;
        }
    }
    ctx->pc = 0x325E70u;
    // 0x325e70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e74: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x325e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325e78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e7c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x325e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325e80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x325e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325e84: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x325e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x325e88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325e8c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x325e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325e90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x325e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x325e94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325e9c: 0x0  nop
    ctx->pc = 0x325e9cu;
    // NOP
    // 0x325ea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325ea4: 0x0  nop
    ctx->pc = 0x325ea4u;
    // NOP
    // 0x325ea8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x325EA8u;
    {
        const bool branch_taken_0x325ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x325ea8) {
            ctx->pc = 0x325ED8u;
            goto label_325ed8;
        }
    }
    ctx->pc = 0x325EB0u;
    // 0x325eb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325eb4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x325eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325eb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325ebc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325ec4: 0x0  nop
    ctx->pc = 0x325ec4u;
    // NOP
    // 0x325ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x325ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x325ecc: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x325eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x325ed0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x325ED0u;
    {
        const bool branch_taken_0x325ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325ed0) {
            ctx->pc = 0x325FA8u;
            goto label_325fa8;
        }
    }
    ctx->pc = 0x325ED8u;
label_325ed8:
    // 0x325ed8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325edc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x325edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325ee0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x325ee4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325eec: 0x0  nop
    ctx->pc = 0x325eecu;
    // NOP
    // 0x325ef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325ef4: 0x0  nop
    ctx->pc = 0x325ef4u;
    // NOP
    // 0x325ef8: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x325EF8u;
    {
        const bool branch_taken_0x325ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325ef8) {
            ctx->pc = 0x325FA8u;
            goto label_325fa8;
        }
    }
    ctx->pc = 0x325F00u;
    // 0x325f00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f04: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x325f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325f08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325f14: 0x0  nop
    ctx->pc = 0x325f14u;
    // NOP
    // 0x325f18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x325f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x325f1c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x325f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x325f20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x325F20u;
    {
        const bool branch_taken_0x325f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325f20) {
            ctx->pc = 0x325FA8u;
            goto label_325fa8;
        }
    }
    ctx->pc = 0x325F28u;
label_325f28:
    // 0x325f28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f2c: 0x9042011e  lbu         $v0, 0x11E($v0)
    ctx->pc = 0x325f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 286)));
    // 0x325f30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x325f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325f38: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x325F38u;
    {
        const bool branch_taken_0x325f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x325f38) {
            ctx->pc = 0x325FA8u;
            goto label_325fa8;
        }
    }
    ctx->pc = 0x325F40u;
    // 0x325f40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f4c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x325f50: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x325f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x325f54: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x325f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x325f58: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x325F58u;
    SET_GPR_U32(ctx, 31, 0x325F60u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x325F58u, 0x325F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F60u;
label_325f60:
    // 0x325f60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f64: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x325f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F68u;
    SET_GPR_U32(ctx, 31, 0x325F70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F68u, 0x325F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F70u;
label_325f70:
    // 0x325f70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x325f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x325f78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f7c: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x325f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F80u;
    SET_GPR_U32(ctx, 31, 0x325F88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F80u, 0x325F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F88u;
label_325f88:
    // 0x325f88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x325f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x325f90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f94: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x325f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F98u;
    SET_GPR_U32(ctx, 31, 0x325FA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F98u, 0x325FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FA0u;
label_325fa0:
    // 0x325fa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fa4: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x325fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_325fa8:
    // 0x325fa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fac: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x325facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x325fb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x325fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x325fb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x325FB8u;
    {
        const bool branch_taken_0x325fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fb8) {
            ctx->pc = 0x325FE8u;
            goto label_325fe8;
        }
    }
    ctx->pc = 0x325FC0u;
    // 0x325fc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fcc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x325fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x325fd0: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325fd4: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x325fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x325fd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x325FD8u;
    SET_GPR_U32(ctx, 31, 0x325FE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x325FD8u, 0x325FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FE0u;
label_325fe0:
    // 0x325fe0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x325FE0u;
    {
        const bool branch_taken_0x325fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fe0) {
            ctx->pc = 0x326008u;
            goto label_326008;
        }
    }
    ctx->pc = 0x325FE8u;
label_325fe8:
    // 0x325fe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325ff0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325ff4: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x325ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x325ff8: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325ffc: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x325ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x326000: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x326000u;
    SET_GPR_U32(ctx, 31, 0x326008u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x326000u, 0x326008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326008u;
label_326008:
    // 0x326008: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32600c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x32600cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326010: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x326014: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x326014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x326018: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x326018u;
    {
        const bool branch_taken_0x326018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326018) {
            ctx->pc = 0x3260A4u;
            goto label_3260a4;
        }
    }
    ctx->pc = 0x326020u;
    // 0x326020: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326024: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x326024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326028: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32602c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x326030: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x326030u;
    {
        const bool branch_taken_0x326030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326030) {
            ctx->pc = 0x3260A4u;
            goto label_3260a4;
        }
    }
    ctx->pc = 0x326038u;
    // 0x326038: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32603c: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x32603cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x326040: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326044: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x326044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326048: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32604c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x326050: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x326050u;
    {
        const bool branch_taken_0x326050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326050) {
            ctx->pc = 0x326084u;
            goto label_326084;
        }
    }
    ctx->pc = 0x326058u;
    // 0x326058: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x326058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32605c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326060: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x326060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x326064: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326068: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x326068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x32606c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x32606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x326070: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x326070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x326074: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x326074u;
    SET_GPR_U32(ctx, 31, 0x32607Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x326074u, 0x32607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32607Cu;
label_32607c:
    // 0x32607c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32607Cu;
    {
        const bool branch_taken_0x32607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32607c) {
            ctx->pc = 0x3260A4u;
            goto label_3260a4;
        }
    }
    ctx->pc = 0x326084u;
label_326084:
    // 0x326084: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x326084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326088: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32608c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326090: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x326094: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x326094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x326098: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x326098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x32609c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x32609Cu;
    SET_GPR_U32(ctx, 31, 0x3260A4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3260A4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260A4u) { return; }
    ctx->pc = 0x3260A4u;
label_3260a4:
    // 0x3260a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3260a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3260a8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3260A8u;
    SET_GPR_U32(ctx, 31, 0x3260B0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3260B0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260B0u) { return; }
    ctx->pc = 0x3260B0u;
label_3260b0:
    // 0x3260b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3260b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3260b8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3260bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3260bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3260c0: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3260c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3260c4: 0xc040c92  jal         func_103248
    ctx->pc = 0x3260C4u;
    SET_GPR_U32(ctx, 31, 0x3260CCu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x3260CCu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260CCu) { return; }
    ctx->pc = 0x3260CCu;
label_3260cc:
    // 0x3260cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3260ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3260d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3260d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3260d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3260d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3260d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3260D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3260E0u;
}
