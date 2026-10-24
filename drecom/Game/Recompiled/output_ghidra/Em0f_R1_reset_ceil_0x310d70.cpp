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

// Function: Em0f_R1_reset_ceil
// Address: 0x310d70 - 0x310fb0
void Em0f_R1_reset_ceil_0x310d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_reset_ceil_0x310d70");
#endif

    switch (ctx->pc) {
        case 0x310dc4u: goto label_310dc4;
        case 0x310e18u: goto label_310e18;
        case 0x310e2cu: goto label_310e2c;
        case 0x310e44u: goto label_310e44;
        case 0x310e50u: goto label_310e50;
        case 0x310eccu: goto label_310ecc;
        case 0x310efcu: goto label_310efc;
        case 0x310f14u: goto label_310f14;
        case 0x310f20u: goto label_310f20;
        case 0x310f90u: goto label_310f90;
        default: break;
    }

    ctx->pc = 0x310d70u;

    // 0x310d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310d74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x310d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x310d78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x310d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x310d7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310d80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x310d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310d84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x310d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310d8c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x310D8Cu;
    {
        const bool branch_taken_0x310d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310d8c) {
            ctx->pc = 0x310DECu;
            goto label_310dec;
        }
    }
    ctx->pc = 0x310D94u;
    // 0x310d94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310D94u;
    {
        const bool branch_taken_0x310d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d94) {
            ctx->pc = 0x310DA4u;
            goto label_310da4;
        }
    }
    ctx->pc = 0x310D9Cu;
    // 0x310d9c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x310D9Cu;
    {
        const bool branch_taken_0x310d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d9c) {
            ctx->pc = 0x310FA0u;
            goto label_310fa0;
        }
    }
    ctx->pc = 0x310DA4u;
label_310da4:
    // 0x310da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310da8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x310dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x310db0: 0x2406280c  addiu       $a2, $zero, 0x280C
    ctx->pc = 0x310db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10252));
    // 0x310db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x310db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310db8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x310db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310dbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x310DBCu;
    SET_GPR_U32(ctx, 31, 0x310DC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x310DBCu, 0x310DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DC4u;
label_310dc4:
    // 0x310dc4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x310dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x310dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dd0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x310dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x310dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dd8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x310dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x310ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310de0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310de8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_310dec:
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
            goto label_310f04;
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
            goto label_310f04;
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
            goto label_310f04;
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
label_310f04:
    // 0x310f04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x310f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310f0c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x310F0Cu;
    SET_GPR_U32(ctx, 31, 0x310F14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x310F0Cu, 0x310F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F14u;
label_310f14:
    // 0x310f14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f18: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x310F18u;
    SET_GPR_U32(ctx, 31, 0x310F20u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x310F18u, 0x310F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F20u;
label_310f20:
    // 0x310f20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x310f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x310f28: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x310F28u;
    {
        const bool branch_taken_0x310f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f28) {
            ctx->pc = 0x310FA0u;
            goto label_310fa0;
        }
    }
    ctx->pc = 0x310F30u;
    // 0x310f30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f34: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x310f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x310f38: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x310f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x310f3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x310f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x310f40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x310f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x310f44: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x310f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x310f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x310f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x310f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f5c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x310f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x310f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x310f64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310f68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f6c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x310f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310f70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x310f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x310f78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x310f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x310f84: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x310f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x310f88: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x310F88u;
    SET_GPR_U32(ctx, 31, 0x310F90u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x310F88u, 0x310F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F90u;
label_310f90:
    // 0x310f90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f94: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x310f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x310f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f9c: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x310f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
label_310fa0:
    // 0x310fa0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x310fa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310fa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x310fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x310FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310FB0u;
}
