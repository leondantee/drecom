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

// Function: entry_00310dec
// Address: 0x310dec - 0x310f04
void entry_00310dec_0x310dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310dec_0x310dec");
#endif

    switch (ctx->pc) {
        case 0x310e18u: goto label_310e18;
        case 0x310e2cu: goto label_310e2c;
        case 0x310e44u: goto label_310e44;
        case 0x310e50u: goto label_310e50;
        case 0x310eccu: goto label_310ecc;
        case 0x310efcu: goto label_310efc;
        default: break;
    }

    ctx->pc = 0x310decu;

    // 0x310dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310df0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310df4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x310df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x310df8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x310df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x310dfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x310dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x310e00: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x310e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x310e04: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x310e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x310e08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x310e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x310e0c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x310e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x310e10: 0xc05c848  jal         func_172120
    ctx->pc = 0x310E10u;
    SET_GPR_U32(ctx, 31, 0x310E18u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x310E10u, 0x310E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E18u;
label_310e18:
    // 0x310e18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x310e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x310e20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x310e24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x310E24u;
    SET_GPR_U32(ctx, 31, 0x310E2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x310E24u, 0x310E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E2Cu;
label_310e2c:
    // 0x310e2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x310e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x310e34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310e3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x310E3Cu;
    SET_GPR_U32(ctx, 31, 0x310E44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x310E3Cu, 0x310E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E44u;
label_310e44:
    // 0x310e44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x310E48u;
    SET_GPR_U32(ctx, 31, 0x310E50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x310E48u, 0x310E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E50u;
label_310e50:
    // 0x310e50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e54: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x310e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x310e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x310e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310e5c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x310e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x310e60: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x310E60u;
    {
        const bool branch_taken_0x310e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e60) {
            ctx->pc = 0x310F04u;
            return;
        }
    }
    ctx->pc = 0x310E68u;
    // 0x310e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e6c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x310e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e74: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x310e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x310e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x310e7c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x310e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x310e80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310e84: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x310e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e88: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x310e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x310e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310e90: 0x0  nop
    ctx->pc = 0x310e90u;
    // NOP
    // 0x310e94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x310e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x310e98: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x310e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x310e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310ea0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x310ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x310ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x310ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310ea8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x310ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x310eac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x310EACu;
    {
        const bool branch_taken_0x310eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310eac) {
            ctx->pc = 0x310F04u;
            return;
        }
    }
    ctx->pc = 0x310EB4u;
    // 0x310eb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310eb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310ebc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x310ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x310ec0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x310ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x310ec4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x310EC4u;
    SET_GPR_U32(ctx, 31, 0x310ECCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x310EC4u, 0x310ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310ECCu;
label_310ecc:
    // 0x310ecc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310ed0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x310ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x310ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310ed8: 0x0  nop
    ctx->pc = 0x310ed8u;
    // NOP
    // 0x310edc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x310EDCu;
    {
        const bool branch_taken_0x310edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310edc) {
            ctx->pc = 0x310F04u;
            return;
        }
    }
    ctx->pc = 0x310EE4u;
    // 0x310ee4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310ee8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310eec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x310eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x310ef0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x310ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x310ef4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x310EF4u;
    SET_GPR_U32(ctx, 31, 0x310EFCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x310EF4u, 0x310EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EFCu;
label_310efc:
    // 0x310efc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f00: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x310f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x310f04u;
}
