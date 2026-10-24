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

// Function: Em0d_R1_mv0d
// Address: 0x23e1c0 - 0x23eb60
void Em0d_R1_mv0d_0x23e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv0d_0x23e1c0");
#endif

    switch (ctx->pc) {
        case 0x23e214u: goto label_23e214;
        case 0x23e248u: goto label_23e248;
        case 0x23e390u: goto label_23e390;
        case 0x23e3acu: goto label_23e3ac;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e540u: goto label_23e540;
        case 0x23e54cu: goto label_23e54c;
        case 0x23e63cu: goto label_23e63c;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c8u: goto label_23e6c8;
        case 0x23e750u: goto label_23e750;
        case 0x23e760u: goto label_23e760;
        case 0x23e770u: goto label_23e770;
        case 0x23e794u: goto label_23e794;
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e800u: goto label_23e800;
        case 0x23e814u: goto label_23e814;
        case 0x23e828u: goto label_23e828;
        case 0x23e898u: goto label_23e898;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e958u: goto label_23e958;
        case 0x23e998u: goto label_23e998;
        default: break;
    }

    ctx->pc = 0x23e1c0u;

    // 0x23e1c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23e1c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x23e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x23e1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e1d0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x23e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x23e1d4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23e1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e1d8: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x23e1d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23e1dc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x23e1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23e1e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e1e4: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x23E1E4u;
    {
        const bool branch_taken_0x23e1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23e1e4) {
            ctx->pc = 0x23E2CCu;
            goto label_23e2cc;
        }
    }
    ctx->pc = 0x23E1ECu;
    // 0x23e1ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E1ECu;
    {
        const bool branch_taken_0x23e1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e1ec) {
            ctx->pc = 0x23E1FCu;
            goto label_23e1fc;
        }
    }
    ctx->pc = 0x23E1F4u;
    // 0x23e1f4: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x23E1F4u;
    {
        const bool branch_taken_0x23e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e1f4) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E1FCu;
label_23e1fc:
    // 0x23e1fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e204: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x23e204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e208: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x23e20c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E20Cu;
    SET_GPR_U32(ctx, 31, 0x23E214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E20Cu, 0x23E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E214u;
label_23e214:
    // 0x23e214: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e218: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23e21c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E21Cu;
    {
        const bool branch_taken_0x23e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e21c) {
            ctx->pc = 0x23E228u;
            goto label_23e228;
        }
    }
    ctx->pc = 0x23E224u;
    // 0x23e224: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x23e224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_23e228:
    // 0x23e228: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e22c: 0x36067800  ori         $a2, $s0, 0x7800
    ctx->pc = 0x23e22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30720);
    // 0x23e230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e234: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23e238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23e23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23e240: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23E240u;
    SET_GPR_U32(ctx, 31, 0x23E248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23E240u, 0x23E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E248u;
label_23e248:
    // 0x23e248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e24c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e250: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e254: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23e254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23e258: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23e25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e260: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e264: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x23e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23e268: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23e26c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x23e270: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23e270u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e274: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e278: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e27c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23e280: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23e284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e288: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e28c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e290: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23e294: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23e298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e2a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23e2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23e2ac: 0x3c033ac9  lui         $v1, 0x3AC9
    ctx->pc = 0x23e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15049 << 16));
    // 0x23e2b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e2c0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x23e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x23e2c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2c8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x23e2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_23e2cc:
    // 0x23e2cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2d0: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23e2d4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x23E2D4u;
    {
        const bool branch_taken_0x23e2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2d4) {
            ctx->pc = 0x23E3B4u;
            goto label_23e3b4;
        }
    }
    ctx->pc = 0x23E2DCu;
    // 0x23e2dc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2e0: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x23e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e2e4: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x23e2e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2ec: 0x0  nop
    ctx->pc = 0x23e2ecu;
    // NOP
    // 0x23e2f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e2f4: 0x0  nop
    ctx->pc = 0x23e2f4u;
    // NOP
    // 0x23e2f8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23E2F8u;
    {
        const bool branch_taken_0x23e2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e2f8) {
            ctx->pc = 0x23E31Cu;
            goto label_23e31c;
        }
    }
    ctx->pc = 0x23E300u;
    // 0x23e300: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x23e300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x23e304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e30c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e310: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23e314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E314u;
    {
        const bool branch_taken_0x23e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e314) {
            ctx->pc = 0x23E32Cu;
            goto label_23e32c;
        }
    }
    ctx->pc = 0x23E31Cu;
label_23e31c:
    // 0x23e31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e320: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e324: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e328: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_23e32c:
    // 0x23e32c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e330: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e334: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x23e338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e33c: 0x0  nop
    ctx->pc = 0x23e33cu;
    // NOP
    // 0x23e340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e344: 0x0  nop
    ctx->pc = 0x23e344u;
    // NOP
    // 0x23e348: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23E348u;
    {
        const bool branch_taken_0x23e348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e348) {
            ctx->pc = 0x23E364u;
            goto label_23e364;
        }
    }
    ctx->pc = 0x23E350u;
    // 0x23e350: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23e354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e358: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e35c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23e360: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23e364:
    // 0x23e364: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e368: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e36c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e370: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e374: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23e378: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e37c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x23e380: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x23e384: 0xc4cd003c  lwc1        $f13, 0x3C($a2)
    ctx->pc = 0x23e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23e388: 0xc05c848  jal         func_172120
    ctx->pc = 0x23E388u;
    SET_GPR_U32(ctx, 31, 0x23E390u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23E388u, 0x23E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23e390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23e394: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e398: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x23e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e39c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x23e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e3a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23e3a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e3a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23E3A4u;
    SET_GPR_U32(ctx, 31, 0x23E3ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23E3A4u, 0x23E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3ACu;
label_23e3ac:
    // 0x23e3ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3b0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x23e3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_23e3b4:
    // 0x23e3b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3b8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x23e3b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x23e3bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23e3c0: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x23e3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x23e3c4: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x23E3C4u;
    {
        const bool branch_taken_0x23e3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e3c4) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E3CCu;
    // 0x23e3cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e3d4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x23e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x23e3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e3dc: 0x0  nop
    ctx->pc = 0x23e3dcu;
    // NOP
    // 0x23e3e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e3e4: 0x0  nop
    ctx->pc = 0x23e3e4u;
    // NOP
    // 0x23e3e8: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x23E3E8u;
    {
        const bool branch_taken_0x23e3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e3e8) {
            ctx->pc = 0x23E464u;
            goto label_23e464;
        }
    }
    ctx->pc = 0x23E3F0u;
    // 0x23e3f0: 0x3c044032  lui         $a0, 0x4032
    ctx->pc = 0x23e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16434 << 16));
    // 0x23e3f4: 0x3483b8c2  ori         $v1, $a0, 0xB8C2
    ctx->pc = 0x23e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
    // 0x23e3f8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23e3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e3fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e404: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e408: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e40c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e410: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e414: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E414u;
    SET_GPR_U32(ctx, 31, 0x23E41Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E414u, 0x23E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E41Cu;
label_23e41c:
    // 0x23e41c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E41Cu;
    {
        const bool branch_taken_0x23e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e41c) {
            ctx->pc = 0x23E464u;
            goto label_23e464;
        }
    }
    ctx->pc = 0x23E424u;
    // 0x23e424: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e428: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23e428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23e42c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E42Cu;
    {
        const bool branch_taken_0x23e42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e42c) {
            ctx->pc = 0x23E464u;
            goto label_23e464;
        }
    }
    ctx->pc = 0x23E434u;
    // 0x23e434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e438: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e43c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e440: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e444: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e448: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e44c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e450: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e454: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e458: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e45c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e460: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23e464:
    // 0x23e464: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e468: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e46c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23e470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e474: 0x0  nop
    ctx->pc = 0x23e474u;
    // NOP
    // 0x23e478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e47c: 0x0  nop
    ctx->pc = 0x23e47cu;
    // NOP
    // 0x23e480: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x23E480u;
    {
        const bool branch_taken_0x23e480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e480) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E488u;
    // 0x23e488: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x23e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x23e48c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e494: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e49c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e4a0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e4a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e4a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e4ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E4ACu;
    SET_GPR_U32(ctx, 31, 0x23E4B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E4ACu, 0x23E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4B4u;
label_23e4b4:
    // 0x23e4b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23E4B4u;
    {
        const bool branch_taken_0x23e4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4b4) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E4BCu;
    // 0x23e4bc: 0x3c024032  lui         $v0, 0x4032
    ctx->pc = 0x23e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16434 << 16));
    // 0x23e4c0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x23e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x23e4c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e4c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e4d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e4d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e4dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e4e0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E4E0u;
    SET_GPR_U32(ctx, 31, 0x23E4E8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E4E0u, 0x23E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4E8u;
label_23e4e8:
    // 0x23e4e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E4E8u;
    {
        const bool branch_taken_0x23e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4e8) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E4F0u;
    // 0x23e4f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e4f4: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23e4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23e4f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E4F8u;
    {
        const bool branch_taken_0x23e4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4f8) {
            ctx->pc = 0x23E530u;
            goto label_23e530;
        }
    }
    ctx->pc = 0x23E500u;
    // 0x23e500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e504: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e508: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e50c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e510: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e514: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e518: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e51c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e520: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e524: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e528: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e52c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23e530:
    // 0x23e530: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e534: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23e538: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23E538u;
    SET_GPR_U32(ctx, 31, 0x23E540u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23E538u, 0x23E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E540u;
label_23e540:
    // 0x23e540: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e544: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23E544u;
    SET_GPR_U32(ctx, 31, 0x23E54Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23E544u, 0x23E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E54Cu;
label_23e54c:
    // 0x23e54c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23e550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e554: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e55c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23e560: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e564: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23e564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23e568: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23e568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23e56c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23e570: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x23E570u;
    {
        const bool branch_taken_0x23e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e570) {
            ctx->pc = 0x23E794u;
            goto label_23e794;
        }
    }
    ctx->pc = 0x23E578u;
    // 0x23e578: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23e57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e580: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e584: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e588: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23e588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23e58c: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x23e590: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e598: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e59c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e5a0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23e5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23e5a4: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23e5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e5b8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23e5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23e5bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e5c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5c4: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23e5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e5c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e5d0: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e5d4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23e5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5dc: 0x0  nop
    ctx->pc = 0x23e5dcu;
    // NOP
    // 0x23e5e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23e5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23e5e4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x23e5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5ec: 0x0  nop
    ctx->pc = 0x23e5ecu;
    // NOP
    // 0x23e5f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23e5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23e5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5f8: 0x0  nop
    ctx->pc = 0x23e5f8u;
    // NOP
    // 0x23e5fc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23e5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23e600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23e604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e608: 0x0  nop
    ctx->pc = 0x23e608u;
    // NOP
    // 0x23e60c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23e610: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23e610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23e614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e618: 0x0  nop
    ctx->pc = 0x23e618u;
    // NOP
    // 0x23e61c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23e61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23e620: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x23e620u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x23e624: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x23e624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e628: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x23e628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e62c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e630: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e634: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23E634u;
    SET_GPR_U32(ctx, 31, 0x23E63Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23E634u, 0x23E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E63Cu;
label_23e63c:
    // 0x23e63c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23E63Cu;
    {
        const bool branch_taken_0x23e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e63c) {
            ctx->pc = 0x23E794u;
            goto label_23e794;
        }
    }
    ctx->pc = 0x23E644u;
    // 0x23e644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e648: 0x0  nop
    ctx->pc = 0x23e648u;
    // NOP
    // 0x23e64c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23e64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23e650: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x23e654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e658: 0x0  nop
    ctx->pc = 0x23e658u;
    // NOP
    // 0x23e65c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23e65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23e660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e664: 0x0  nop
    ctx->pc = 0x23e664u;
    // NOP
    // 0x23e668: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23e66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23e670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e674: 0x0  nop
    ctx->pc = 0x23e674u;
    // NOP
    // 0x23e678: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23e67c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23e688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23e690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23e694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e69c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23e69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23e6a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e6a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e6a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e6ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e6acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e6b0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e6b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23e6b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e6b8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23E6B8u;
    SET_GPR_U32(ctx, 31, 0x23E6C0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23E6B8u, 0x23E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6C0u;
label_23e6c0:
    // 0x23e6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E6C0u;
    SET_GPR_U32(ctx, 31, 0x23E6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E6C0u, 0x23E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6C8u;
label_23e6c8:
    // 0x23e6c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E6C8u;
    {
        const bool branch_taken_0x23e6c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e6c8) {
            ctx->pc = 0x23E6E4u;
            goto label_23e6e4;
        }
    }
    ctx->pc = 0x23E6D0u;
    // 0x23e6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e6d4: 0x0  nop
    ctx->pc = 0x23e6d4u;
    // NOP
    // 0x23e6d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23e6d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23E6DCu;
    {
        const bool branch_taken_0x23e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e6dc) {
            ctx->pc = 0x23E700u;
            goto label_23e700;
        }
    }
    ctx->pc = 0x23E6E4u;
label_23e6e4:
    // 0x23e6e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23e6e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e6ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23e6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23e6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e6f4: 0x0  nop
    ctx->pc = 0x23e6f4u;
    // NOP
    // 0x23e6f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23e6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e6fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23e6fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23e700:
    // 0x23e700: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23e704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e708: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23e708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23e70c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e710: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23e710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e714: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23e714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23e718: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e71c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23e720: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23e724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e72c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23e72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23e730: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e734: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e738: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e73c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e73cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e740: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e744: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23e744u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e748: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23E748u;
    SET_GPR_U32(ctx, 31, 0x23E750u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23E748u, 0x23E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E750u;
label_23e750:
    // 0x23e750: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23e750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23e754: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23e754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23e758: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23E758u;
    SET_GPR_U32(ctx, 31, 0x23E760u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23E758u, 0x23E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E760u;
label_23e760:
    // 0x23e760: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23e764: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23e768: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23E768u;
    SET_GPR_U32(ctx, 31, 0x23E770u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23E768u, 0x23E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23e774: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23e774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23e778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23e77c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e780: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23e784: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23e788: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e788u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e78c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23E78Cu;
    SET_GPR_U32(ctx, 31, 0x23E794u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23E78Cu, 0x23E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E794u;
label_23e794:
    // 0x23e794: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e798: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23e798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23e79c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x23E79Cu;
    {
        const bool branch_taken_0x23e79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e79c) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E7A4u;
    // 0x23e7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e7bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e7c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e7cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23e7d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E7D4u;
    SET_GPR_U32(ctx, 31, 0x23E7DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E7D4u, 0x23E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7DCu;
label_23e7dc:
    // 0x23e7dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e7e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e7e4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x23e7e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23e7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23e7ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23e7ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e7f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23e7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e7f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E7F8u;
    SET_GPR_U32(ctx, 31, 0x23E800u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E7F8u, 0x23E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E800u;
label_23e800:
    // 0x23e800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e804: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e808: 0x2451000a  addiu       $s1, $v0, 0xA
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23e80c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E80Cu;
    SET_GPR_U32(ctx, 31, 0x23E814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E80Cu, 0x23E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E814u;
label_23e814:
    // 0x23e814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e818: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e81c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23e820: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E820u;
    SET_GPR_U32(ctx, 31, 0x23E828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E820u, 0x23E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E828u;
label_23e828:
    // 0x23e828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e82c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e830: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23e834: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23e838: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23e838u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e83c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e840: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e844: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23e844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e848: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e84c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e850: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23e854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e858: 0x0  nop
    ctx->pc = 0x23e858u;
    // NOP
    // 0x23e85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e860: 0x0  nop
    ctx->pc = 0x23e860u;
    // NOP
    // 0x23e864: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x23E864u;
    {
        const bool branch_taken_0x23e864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e864) {
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E86Cu;
    // 0x23e86c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e870: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e874: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x23e878: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23e87c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e880: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23e884: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e888: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e88c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e890: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E890u;
    SET_GPR_U32(ctx, 31, 0x23E898u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E890u, 0x23E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E898u;
label_23e898:
    // 0x23e898: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23E898u;
    {
        const bool branch_taken_0x23e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e898) {
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E8A0u;
    // 0x23e8a0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8a4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8a8: 0x3c034006  lui         $v1, 0x4006
    ctx->pc = 0x23e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
    // 0x23e8ac: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x23e8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x23e8b0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x23e8b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e8b4: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x23e8b8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e8bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e8c0: 0x2450dce0  addiu       $s0, $v0, -0x2320
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e8c4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x23e8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x23e8c8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E8C8u;
    SET_GPR_U32(ctx, 31, 0x23E8D0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E8C8u, 0x23E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8D0u;
label_23e8d0:
    // 0x23e8d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E8D0u;
    {
        const bool branch_taken_0x23e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8d0) {
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E8D8u;
    // 0x23e8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e8dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e8e4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x23e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e8e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8ec: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x23e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x23e8f0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8f4: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x23e8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e8f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8fc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23e8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e900: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e904: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x23e904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_23e908:
    // 0x23e908: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x23e908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e90c: 0xc4e11288  lwc1        $f1, 0x1288($a3)
    ctx->pc = 0x23e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e910: 0x3c0844fa  lui         $t0, 0x44FA
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17658 << 16));
    // 0x23e914: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23e914u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e918: 0x0  nop
    ctx->pc = 0x23e918u;
    // NOP
    // 0x23e91c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e920: 0x0  nop
    ctx->pc = 0x23e920u;
    // NOP
    // 0x23e924: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x23E924u;
    {
        const bool branch_taken_0x23e924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e924) {
            ctx->pc = 0x23E990u;
            goto label_23e990;
        }
    }
    ctx->pc = 0x23E92Cu;
    // 0x23e92c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23e930: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23e934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e938: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e93c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e940: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e944: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e948: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e94c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e950: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E950u;
    SET_GPR_U32(ctx, 31, 0x23E958u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E950u, 0x23E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E958u;
label_23e958:
    // 0x23e958: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E958u;
    {
        const bool branch_taken_0x23e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e958) {
            ctx->pc = 0x23E990u;
            goto label_23e990;
        }
    }
    ctx->pc = 0x23E960u;
    // 0x23e960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e964: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e968: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e96c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e970: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e974: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e978: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e97c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e980: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e984: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e988: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e98c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23e990:
    // 0x23e990: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E990u;
    SET_GPR_U32(ctx, 31, 0x23E998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E990u, 0x23E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E998u;
label_23e998:
    // 0x23e998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e99c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23e9a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23E9A0u;
    {
        const bool branch_taken_0x23e9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9a0) {
            ctx->pc = 0x23E9D0u;
            goto label_23e9d0;
        }
    }
    ctx->pc = 0x23E9A8u;
    // 0x23e9a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e9b0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23e9b4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23e9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e9bc: 0x0  nop
    ctx->pc = 0x23e9bcu;
    // NOP
    // 0x23e9c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e9c4: 0x0  nop
    ctx->pc = 0x23e9c4u;
    // NOP
    // 0x23e9c8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23E9C8u;
    {
        const bool branch_taken_0x23e9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e9c8) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9D0u;
label_23e9d0:
    // 0x23e9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e9d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23e9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e9dc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e9e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23e9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e9e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23e9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e9f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e9f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23ea00:
    // 0x23ea00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea08: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea10: 0x0  nop
    ctx->pc = 0x23ea10u;
    // NOP
    // 0x23ea14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23ea14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea18: 0x0  nop
    ctx->pc = 0x23ea18u;
    // NOP
    // 0x23ea1c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23EA1Cu;
    {
        const bool branch_taken_0x23ea1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea1c) {
            ctx->pc = 0x23EB00u;
            goto label_23eb00;
        }
    }
    ctx->pc = 0x23EA24u;
    // 0x23ea24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea2c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea34: 0x0  nop
    ctx->pc = 0x23ea34u;
    // NOP
    // 0x23ea38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ea38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea3c: 0x0  nop
    ctx->pc = 0x23ea3cu;
    // NOP
    // 0x23ea40: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23EA40u;
    {
        const bool branch_taken_0x23ea40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea40) {
            ctx->pc = 0x23EAA8u;
            goto label_23eaa8;
        }
    }
    ctx->pc = 0x23EA48u;
    // 0x23ea48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea50: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea54: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23ea58: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x23ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23ea5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ea5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea60: 0x0  nop
    ctx->pc = 0x23ea60u;
    // NOP
    // 0x23ea64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ea64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ea68: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23ea6c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea70: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23ea74: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea7c: 0x0  nop
    ctx->pc = 0x23ea7cu;
    // NOP
    // 0x23ea80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ea80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea84: 0x0  nop
    ctx->pc = 0x23ea84u;
    // NOP
    // 0x23ea88: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EB00u;
            goto label_23eb00;
        }
    }
    ctx->pc = 0x23EA90u;
    // 0x23ea90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea94: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea98: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23ea9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23eaa0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23EAA0u;
    {
        const bool branch_taken_0x23eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eaa0) {
            ctx->pc = 0x23EB00u;
            goto label_23eb00;
        }
    }
    ctx->pc = 0x23EAA8u;
label_23eaa8:
    // 0x23eaa8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eaac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23eab0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eab4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23eab8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23eab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23eabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23eabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eac0: 0x0  nop
    ctx->pc = 0x23eac0u;
    // NOP
    // 0x23eac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23eac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23eac8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23eacc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ead0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ead4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ead8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ead8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eadc: 0x0  nop
    ctx->pc = 0x23eadcu;
    // NOP
    // 0x23eae0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23eae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eae4: 0x0  nop
    ctx->pc = 0x23eae4u;
    // NOP
    // 0x23eae8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23EAE8u;
    {
        const bool branch_taken_0x23eae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eae8) {
            ctx->pc = 0x23EB00u;
            goto label_23eb00;
        }
    }
    ctx->pc = 0x23EAF0u;
    // 0x23eaf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eaf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eaf4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eaf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23eafc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23eafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23eb00:
    // 0x23eb00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eb04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23eb08: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23eb0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23eb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23eb10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23eb14: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23eb14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23eb18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23eb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23eb1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eb20: 0x0  nop
    ctx->pc = 0x23eb20u;
    // NOP
    // 0x23eb24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23EB24u;
    {
        const bool branch_taken_0x23eb24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eb24) {
            ctx->pc = 0x23EB48u;
            goto label_23eb48;
        }
    }
    ctx->pc = 0x23EB2Cu;
    // 0x23eb2c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eb30: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eb34: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23eb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23eb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eb3c: 0x0  nop
    ctx->pc = 0x23eb3cu;
    // NOP
    // 0x23eb40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23eb40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23eb44: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23eb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23eb48:
    // 0x23eb48: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x23eb48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23eb4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23eb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23eb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23eb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23eb54: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x23eb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x23EB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EB60u;
}
