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

// Function: Em0e_R1_mv0d
// Address: 0x246a40 - 0x2474c4
void Em0e_R1_mv0d_0x246a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv0d_0x246a40");
#endif

    switch (ctx->pc) {
        case 0x246a54u: goto label_246a54;
        case 0x246ae0u: goto label_246ae0;
        case 0x246c84u: goto label_246c84;
        case 0x246ca0u: goto label_246ca0;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cc8u: goto label_246cc8;
        case 0x246d54u: goto label_246d54;
        case 0x246dd8u: goto label_246dd8;
        case 0x246de0u: goto label_246de0;
        case 0x246e68u: goto label_246e68;
        case 0x246e78u: goto label_246e78;
        case 0x246e88u: goto label_246e88;
        case 0x246eacu: goto label_246eac;
        case 0x246f04u: goto label_246f04;
        case 0x246f28u: goto label_246f28;
        case 0x246f68u: goto label_246f68;
        case 0x246fa4u: goto label_246fa4;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470f4u: goto label_2470f4;
        case 0x247100u: goto label_247100;
        case 0x247188u: goto label_247188;
        case 0x24720cu: goto label_24720c;
        case 0x247214u: goto label_247214;
        case 0x24729cu: goto label_24729c;
        case 0x2472acu: goto label_2472ac;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472e0u: goto label_2472e0;
        case 0x247328u: goto label_247328;
        case 0x24734cu: goto label_24734c;
        default: break;
    }

    ctx->pc = 0x246a40u;

    // 0x246a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x246a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x246a44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x246a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x246a48: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x246a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x246a4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246A4Cu;
    SET_GPR_U32(ctx, 31, 0x246A54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246A4Cu, 0x246A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A54u;
label_246a54:
    // 0x246a54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246a58: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x246a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x246a5c: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x246a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x246a60: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x246a64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246a64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x246a68: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246a6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246a70: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x246a70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x246a74: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246a78: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x246a78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x246a7c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x246a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x246a80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246a84: 0x10c3014e  beq         $a2, $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x246A84u;
    {
        const bool branch_taken_0x246a84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x246a84) {
            ctx->pc = 0x246FC0u;
            goto label_246fc0;
        }
    }
    ctx->pc = 0x246A8Cu;
    // 0x246a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246a90: 0x10c5002c  beq         $a2, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x246A90u;
    {
        const bool branch_taken_0x246a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x246a90) {
            ctx->pc = 0x246B44u;
            goto label_246b44;
        }
    }
    ctx->pc = 0x246A98u;
    // 0x246a98: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x246A98u;
    {
        const bool branch_taken_0x246a98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a98) {
            ctx->pc = 0x246AA8u;
            goto label_246aa8;
        }
    }
    ctx->pc = 0x246AA0u;
    // 0x246aa0: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x246AA0u;
    {
        const bool branch_taken_0x246aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246aa0) {
            ctx->pc = 0x24736Cu;
            goto label_24736c;
        }
    }
    ctx->pc = 0x246AA8u;
label_246aa8:
    // 0x246aa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246aac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ab0: 0xa0470002  sb          $a3, 0x2($v0)
    ctx->pc = 0x246ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x246ab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ab8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246abc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x246abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x246ac0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ac4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ac8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x246acc: 0x24061e1a  addiu       $a2, $zero, 0x1E1A
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7706));
    // 0x246ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ad4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246ad8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246AD8u;
    SET_GPR_U32(ctx, 31, 0x246AE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246AD8u, 0x246AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AE0u;
label_246ae0:
    // 0x246ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ae4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ae8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246aec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x246aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x246af0: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x246af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x246af4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246af4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246af8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246afc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246b00: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246b04: 0x3c0540b0  lui         $a1, 0x40B0
    ctx->pc = 0x246b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16560 << 16));
    // 0x246b08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246b08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b0c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x246b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b10: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x246b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x246b14: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x246b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x246b18: 0x3c0440b0  lui         $a0, 0x40B0
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16560 << 16));
    // 0x246b1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b20: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x246b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b24: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x246b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x246b28: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246b2c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b30: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x246b34: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x246b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x246b38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x246b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x246b3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246b40: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x246b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_246b44:
    // 0x246b44: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b48: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x246b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b4c: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x246b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x246b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b54: 0x0  nop
    ctx->pc = 0x246b54u;
    // NOP
    // 0x246b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246b5c: 0x0  nop
    ctx->pc = 0x246b5cu;
    // NOP
    // 0x246b60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x246B60u;
    {
        const bool branch_taken_0x246b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246b60) {
            ctx->pc = 0x246B98u;
            goto label_246b98;
        }
    }
    ctx->pc = 0x246B68u;
    // 0x246b68: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x246b6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246b6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b74: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x246b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246b78: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x246b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b88: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246b8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246b90: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x246B90u;
    {
        const bool branch_taken_0x246b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b90) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246B98u;
label_246b98:
    // 0x246b98: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b9c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x246b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ba0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x246ba4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bac: 0x0  nop
    ctx->pc = 0x246bacu;
    // NOP
    // 0x246bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246bb4: 0x0  nop
    ctx->pc = 0x246bb4u;
    // NOP
    // 0x246bb8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x246BB8u;
    {
        const bool branch_taken_0x246bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246bb8) {
            ctx->pc = 0x246BF0u;
            goto label_246bf0;
        }
    }
    ctx->pc = 0x246BC0u;
    // 0x246bc0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x246bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x246bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246bd0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bdc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246be0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246be4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246be8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x246BE8u;
    {
        const bool branch_taken_0x246be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246be8) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246BF0u;
label_246bf0:
    // 0x246bf0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246bf4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x246bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246bf8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x246bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x246bfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c04: 0x0  nop
    ctx->pc = 0x246c04u;
    // NOP
    // 0x246c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246c0c: 0x0  nop
    ctx->pc = 0x246c0cu;
    // NOP
    // 0x246c10: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x246C10u;
    {
        const bool branch_taken_0x246c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246c10) {
            ctx->pc = 0x246C48u;
            goto label_246c48;
        }
    }
    ctx->pc = 0x246C18u;
    // 0x246c18: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x246c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x246c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c28: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246c2c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x246c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x246c30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246c30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c3c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x246c40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246C40u;
    {
        const bool branch_taken_0x246c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c40) {
            ctx->pc = 0x246C58u;
            goto label_246c58;
        }
    }
    ctx->pc = 0x246C48u;
label_246c48:
    // 0x246c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c54: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_246c58:
    // 0x246c58: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x246c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x246c5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x246c60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x246c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x246c64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c68: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x246c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c6c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x246c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x246c70: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x246c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x246c74: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x246c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x246c78: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x246c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x246c7c: 0xc05c848  jal         func_172120
    ctx->pc = 0x246C7Cu;
    SET_GPR_U32(ctx, 31, 0x246C84u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x246C7Cu, 0x246C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C84u;
label_246c84:
    // 0x246c84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x246c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x246c88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c8c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x246c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c90: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x246c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x246c94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246c98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x246C98u;
    SET_GPR_U32(ctx, 31, 0x246CA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x246C98u, 0x246CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CA0u;
label_246ca0:
    // 0x246ca0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ca4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x246ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x246ca8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246cb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x246CB0u;
    SET_GPR_U32(ctx, 31, 0x246CB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246CB0u, 0x246CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CB8u;
label_246cb8:
    // 0x246cb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x246cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246cbc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cc0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x246CC0u;
    SET_GPR_U32(ctx, 31, 0x246CC8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246CC0u, 0x246CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC8u;
label_246cc8:
    // 0x246cc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246cc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246ccc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cd0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x246cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x246cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x246cd8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x246cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x246cdc: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x246CDCu;
    {
        const bool branch_taken_0x246cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cdc) {
            ctx->pc = 0x246EACu;
            goto label_246eac;
        }
    }
    ctx->pc = 0x246CE4u;
    // 0x246ce4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ce8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x246cec: 0x24640880  addiu       $a0, $v1, 0x880
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x246cf0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x246cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x246cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246cf8: 0x0  nop
    ctx->pc = 0x246cf8u;
    // NOP
    // 0x246cfc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x246cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d04: 0x0  nop
    ctx->pc = 0x246d04u;
    // NOP
    // 0x246d08: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x246d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x246d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d10: 0x0  nop
    ctx->pc = 0x246d10u;
    // NOP
    // 0x246d14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x246d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x246d18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x246d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x246d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d20: 0x0  nop
    ctx->pc = 0x246d20u;
    // NOP
    // 0x246d24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x246d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x246d28: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x246d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x246d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d30: 0x0  nop
    ctx->pc = 0x246d30u;
    // NOP
    // 0x246d34: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x246d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x246d38: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x246d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x246d3c: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x246d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d40: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x246d40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246d48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x246d4c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x246D4Cu;
    SET_GPR_U32(ctx, 31, 0x246D54u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x246D4Cu, 0x246D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D54u;
label_246d54:
    // 0x246d54: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d54) {
            ctx->pc = 0x246EACu;
            goto label_246eac;
        }
    }
    ctx->pc = 0x246D5Cu;
    // 0x246d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d60: 0x0  nop
    ctx->pc = 0x246d60u;
    // NOP
    // 0x246d64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x246d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x246d68: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x246d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d70: 0x0  nop
    ctx->pc = 0x246d70u;
    // NOP
    // 0x246d74: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d7c: 0x0  nop
    ctx->pc = 0x246d7cu;
    // NOP
    // 0x246d80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x246d84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d8c: 0x0  nop
    ctx->pc = 0x246d8cu;
    // NOP
    // 0x246d90: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x246d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x246d94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246d98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246d9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x246da0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246da4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x246da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x246da8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246dac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246db0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246db4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246db8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246dbc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246dc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246dc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246dc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246dc8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x246dcc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246dccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246dd0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246DD0u;
    SET_GPR_U32(ctx, 31, 0x246DD8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246DD0u, 0x246DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DD8u;
label_246dd8:
    // 0x246dd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246DD8u;
    SET_GPR_U32(ctx, 31, 0x246DE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246DD8u, 0x246DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DE0u;
label_246de0:
    // 0x246de0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246DE0u;
    {
        const bool branch_taken_0x246de0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x246de0) {
            ctx->pc = 0x246DFCu;
            goto label_246dfc;
        }
    }
    ctx->pc = 0x246DE8u;
    // 0x246de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246dec: 0x0  nop
    ctx->pc = 0x246decu;
    // NOP
    // 0x246df0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246DF4u;
    {
        const bool branch_taken_0x246df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246df4) {
            ctx->pc = 0x246E18u;
            goto label_246e18;
        }
    }
    ctx->pc = 0x246DFCu;
label_246dfc:
    // 0x246dfc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x246dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x246e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x246e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x246e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246e0c: 0x0  nop
    ctx->pc = 0x246e0cu;
    // NOP
    // 0x246e10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246e14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x246e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_246e18:
    // 0x246e18: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x246e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x246e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x246e20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246e24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246e2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x246e30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246e34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x246e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x246e38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246e3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246e44: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246e48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246e50: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246e54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246e54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246e58: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x246e5c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246e5cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246e60: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246E60u;
    SET_GPR_U32(ctx, 31, 0x246E68u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246E60u, 0x246E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E68u;
label_246e68:
    // 0x246e68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x246e6c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x246e70: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x246E70u;
    SET_GPR_U32(ctx, 31, 0x246E78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x246E70u, 0x246E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E78u;
label_246e78:
    // 0x246e78: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x246e7c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x246e80: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x246E80u;
    SET_GPR_U32(ctx, 31, 0x246E88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x246E80u, 0x246E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E88u;
label_246e88:
    // 0x246e88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x246e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x246e8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x246e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x246e90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246e94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e98: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x246e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x246e9c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x246e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x246ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246ea4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x246EA4u;
    SET_GPR_U32(ctx, 31, 0x246EACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x246EA4u, 0x246EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EACu;
label_246eac:
    // 0x246eac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246eb0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x246eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x246eb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x246eb8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x246eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x246ebc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ec0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x246ec4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x246EC4u;
    {
        const bool branch_taken_0x246ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ec4) {
            ctx->pc = 0x246F48u;
            goto label_246f48;
        }
    }
    ctx->pc = 0x246ECCu;
    // 0x246ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ed0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x246ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246edc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ee0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x246ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ee4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ee8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x246ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x246eec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ef0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x246ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x246ef4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ef8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x246efc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246EFCu;
    SET_GPR_U32(ctx, 31, 0x246F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246EFCu, 0x246F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F04u;
label_246f04:
    // 0x246f04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x246f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x246f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x246f0c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x246f10: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x246f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x246f14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x246f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x246f18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f1c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x246f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x246f20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246F20u;
    SET_GPR_U32(ctx, 31, 0x246F28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246F20u, 0x246F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F28u;
label_246f28:
    // 0x246f28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f2c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x246f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x246f30: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x246f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x246f34: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x246f38: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x246f3c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246f44: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_246f48:
    // 0x246f48: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f4c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x246f4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x246f50: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x246f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x246f54: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x246f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x246f58: 0x14830104  bne         $a0, $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x246F58u;
    {
        const bool branch_taken_0x246f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246f58) {
            ctx->pc = 0x24736Cu;
            goto label_24736c;
        }
    }
    ctx->pc = 0x246F60u;
    // 0x246f60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246F60u;
    SET_GPR_U32(ctx, 31, 0x246F68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246F60u, 0x246F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F68u;
label_246f68:
    // 0x246f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x246f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x246f70: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x246F70u;
    {
        const bool branch_taken_0x246f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f70) {
            ctx->pc = 0x24736Cu;
            goto label_24736c;
        }
    }
    ctx->pc = 0x246F78u;
    // 0x246f78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246f7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f80: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x246f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x246f84: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f88: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x246f90: 0x24062d1c  addiu       $a2, $zero, 0x2D1C
    ctx->pc = 0x246f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11548));
    // 0x246f94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246f9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246F9Cu;
    SET_GPR_U32(ctx, 31, 0x246FA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246F9Cu, 0x246FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FA4u;
label_246fa4:
    // 0x246fa4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x246fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x246fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246fac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246fb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246fb4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246fb8: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x246FB8u;
    {
        const bool branch_taken_0x246fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fb8) {
            ctx->pc = 0x24736Cu;
            goto label_24736c;
        }
    }
    ctx->pc = 0x246FC0u;
label_246fc0:
    // 0x246fc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246fc4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x246fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fc8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x246fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x246fcc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246fd4: 0x0  nop
    ctx->pc = 0x246fd4u;
    // NOP
    // 0x246fd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246fdc: 0x0  nop
    ctx->pc = 0x246fdcu;
    // NOP
    // 0x246fe0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x246FE0u;
    {
        const bool branch_taken_0x246fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246fe0) {
            ctx->pc = 0x247004u;
            goto label_247004;
        }
    }
    ctx->pc = 0x246FE8u;
    // 0x246fe8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x246fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x246fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ff0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246ff8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246ffc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x246FFCu;
    {
        const bool branch_taken_0x246ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ffc) {
            ctx->pc = 0x247094u;
            goto label_247094;
        }
    }
    ctx->pc = 0x247004u;
label_247004:
    // 0x247004: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247008: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x247008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24700c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247014: 0x0  nop
    ctx->pc = 0x247014u;
    // NOP
    // 0x247018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24701c: 0x0  nop
    ctx->pc = 0x24701cu;
    // NOP
    // 0x247020: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x247020u;
    {
        const bool branch_taken_0x247020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247020) {
            ctx->pc = 0x247044u;
            goto label_247044;
        }
    }
    ctx->pc = 0x247028u;
    // 0x247028: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x247028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x24702c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24702cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247030: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247038: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24703c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24703Cu;
    {
        const bool branch_taken_0x24703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24703c) {
            ctx->pc = 0x247094u;
            goto label_247094;
        }
    }
    ctx->pc = 0x247044u;
label_247044:
    // 0x247044: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247048: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x247048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24704c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247054: 0x0  nop
    ctx->pc = 0x247054u;
    // NOP
    // 0x247058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24705c: 0x0  nop
    ctx->pc = 0x24705cu;
    // NOP
    // 0x247060: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x247060u;
    {
        const bool branch_taken_0x247060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247060) {
            ctx->pc = 0x247084u;
            goto label_247084;
        }
    }
    ctx->pc = 0x247068u;
    // 0x247068: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x247068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x24706c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24706cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247070: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247078: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24707c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24707Cu;
    {
        const bool branch_taken_0x24707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24707c) {
            ctx->pc = 0x247094u;
            goto label_247094;
        }
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247088: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24708c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247090: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_247094:
    // 0x247094: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x247098: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24709c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x24709cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2470a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470a8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2470a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2470ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2470acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2470b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2470b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2470b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2470b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2470B8u;
    SET_GPR_U32(ctx, 31, 0x2470C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2470B8u, 0x2470C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470C0u;
label_2470c0:
    // 0x2470c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2470c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2470c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2470c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2470cc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2470ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2470d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2470d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2470d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2470D4u;
    SET_GPR_U32(ctx, 31, 0x2470DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2470D4u, 0x2470DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470DCu;
label_2470dc:
    // 0x2470dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2470e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2470e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2470ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2470ECu;
    SET_GPR_U32(ctx, 31, 0x2470F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2470ECu, 0x2470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470F4u;
label_2470f4:
    // 0x2470f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2470F8u;
    SET_GPR_U32(ctx, 31, 0x247100u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2470F8u, 0x247100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247100u;
label_247100:
    // 0x247100: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247104: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x247104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x247108: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24710c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x24710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x247110: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x247110u;
    {
        const bool branch_taken_0x247110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247110) {
            ctx->pc = 0x2472E0u;
            goto label_2472e0;
        }
    }
    ctx->pc = 0x247118u;
    // 0x247118: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24711c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x247120: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x247120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x247124: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x247124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x247128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24712c: 0x0  nop
    ctx->pc = 0x24712cu;
    // NOP
    // 0x247130: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x247130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x247134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247138: 0x0  nop
    ctx->pc = 0x247138u;
    // NOP
    // 0x24713c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x24713cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x247140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247144: 0x0  nop
    ctx->pc = 0x247144u;
    // NOP
    // 0x247148: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x247148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x24714c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247154: 0x0  nop
    ctx->pc = 0x247154u;
    // NOP
    // 0x247158: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x247158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x24715c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247164: 0x0  nop
    ctx->pc = 0x247164u;
    // NOP
    // 0x247168: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x247168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24716c: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x24716cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x247170: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x247170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x247174: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x247174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x247178: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x247178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24717c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x247180: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x247180u;
    SET_GPR_U32(ctx, 31, 0x247188u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x247180u, 0x247188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247188u;
label_247188:
    // 0x247188: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x247188u;
    {
        const bool branch_taken_0x247188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247188) {
            ctx->pc = 0x2472E0u;
            goto label_2472e0;
        }
    }
    ctx->pc = 0x247190u;
    // 0x247190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247194: 0x0  nop
    ctx->pc = 0x247194u;
    // NOP
    // 0x247198: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x247198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24719c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2471a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2471a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471a4: 0x0  nop
    ctx->pc = 0x2471a4u;
    // NOP
    // 0x2471a8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2471a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2471ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2471acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471b0: 0x0  nop
    ctx->pc = 0x2471b0u;
    // NOP
    // 0x2471b4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2471b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2471b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2471bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2471bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471c0: 0x0  nop
    ctx->pc = 0x2471c0u;
    // NOP
    // 0x2471c4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2471c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2471c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2471cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2471ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2471d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2471d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2471d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2471d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2471d8: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2471d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2471dc: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2471dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2471e0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2471e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2471e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2471e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2471e8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2471e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2471ec: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2471ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2471f0: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x2471f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2471f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2471f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2471f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2471fc: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x2471fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x247200: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x247200u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247204: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x247204u;
    SET_GPR_U32(ctx, 31, 0x24720Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x247204u, 0x24720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24720Cu;
label_24720c:
    // 0x24720c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24720Cu;
    SET_GPR_U32(ctx, 31, 0x247214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24720Cu, 0x247214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247214u;
label_247214:
    // 0x247214: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247214u;
    {
        const bool branch_taken_0x247214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x247214) {
            ctx->pc = 0x247230u;
            goto label_247230;
        }
    }
    ctx->pc = 0x24721Cu;
    // 0x24721c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24721cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247220: 0x0  nop
    ctx->pc = 0x247220u;
    // NOP
    // 0x247224: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x247224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x247228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x247228u;
    {
        const bool branch_taken_0x247228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247228) {
            ctx->pc = 0x24724Cu;
            goto label_24724c;
        }
    }
    ctx->pc = 0x247230u;
label_247230:
    // 0x247230: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x247234: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x247234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247238: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x247238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x24723c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24723cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247240: 0x0  nop
    ctx->pc = 0x247240u;
    // NOP
    // 0x247244: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x247244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x247248: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x247248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24724c:
    // 0x24724c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x24724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247254: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x247254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x247258: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24725c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x24725cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x247260: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x247264: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x247264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x247268: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x247268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x24726c: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x24726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x247270: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x247274: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x247274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247278: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x247278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x24727c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247280: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x247284: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x247288: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247288u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24728c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x24728cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x247290: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x247290u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247294: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x247294u;
    SET_GPR_U32(ctx, 31, 0x24729Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x247294u, 0x24729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24729Cu;
label_24729c:
    // 0x24729c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2472a0: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x2472a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x2472a4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2472A4u;
    SET_GPR_U32(ctx, 31, 0x2472ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2472A4u, 0x2472ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472ACu;
label_2472ac:
    // 0x2472ac: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2472b0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2472b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x2472b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2472B4u;
    SET_GPR_U32(ctx, 31, 0x2472BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2472B4u, 0x2472BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472BCu;
label_2472bc:
    // 0x2472bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2472bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2472c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2472c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2472c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2472c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2472cc: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2472d0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2472d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2472d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2472d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2472d8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2472D8u;
    SET_GPR_U32(ctx, 31, 0x2472E0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2472D8u, 0x2472E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472E0u;
label_2472e0:
    // 0x2472e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2472e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2472e8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2472E8u;
    {
        const bool branch_taken_0x2472e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472e8) {
            ctx->pc = 0x24736Cu;
            goto label_24736c;
        }
    }
    ctx->pc = 0x2472F0u;
    // 0x2472f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2472f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2472f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2472f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2472fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247300: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247304: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247308: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24730c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24730cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247310: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247314: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247318: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24731c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24731cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247320: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247320u;
    SET_GPR_U32(ctx, 31, 0x247328u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247320u, 0x247328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247328u;
label_247328:
    // 0x247328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24732c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x247330: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x247334: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x247338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24733c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247340: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x247340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x247344: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247344u;
    SET_GPR_U32(ctx, 31, 0x24734Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247344u, 0x24734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24734Cu;
label_24734c:
    // 0x24734c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247350: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x247350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x247354: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x247358: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24735c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24735cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247360: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247364: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247368: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x247368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_24736c:
    // 0x24736c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247374: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24737c: 0x0  nop
    ctx->pc = 0x24737cu;
    // NOP
    // 0x247380: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247384: 0x0  nop
    ctx->pc = 0x247384u;
    // NOP
    // 0x247388: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x247388u;
    {
        const bool branch_taken_0x247388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247388) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x247390u;
    // 0x247390: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247394: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247398: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24739c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24739cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473a0: 0x0  nop
    ctx->pc = 0x2473a0u;
    // NOP
    // 0x2473a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2473a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473a8: 0x0  nop
    ctx->pc = 0x2473a8u;
    // NOP
    // 0x2473ac: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2473ACu;
    {
        const bool branch_taken_0x2473ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2473ac) {
            ctx->pc = 0x247414u;
            goto label_247414;
        }
    }
    ctx->pc = 0x2473B4u;
    // 0x2473b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2473b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2473b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2473bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2473bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2473c0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2473c4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2473c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2473c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2473c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473cc: 0x0  nop
    ctx->pc = 0x2473ccu;
    // NOP
    // 0x2473d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2473d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2473d4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2473d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2473d8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2473dc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2473dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2473e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2473e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2473e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2473e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473e8: 0x0  nop
    ctx->pc = 0x2473e8u;
    // NOP
    // 0x2473ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2473ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473f0: 0x0  nop
    ctx->pc = 0x2473f0u;
    // NOP
    // 0x2473f4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2473F4u;
    {
        const bool branch_taken_0x2473f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2473f4) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x2473FCu;
    // 0x2473fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2473fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247400: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247404: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247408: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x247408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24740c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24740Cu;
    {
        const bool branch_taken_0x24740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24740c) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x247414u;
label_247414:
    // 0x247414: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x247414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247418: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x24741c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x24741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247420: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x247424: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x247428: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x247428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24742c: 0x0  nop
    ctx->pc = 0x24742cu;
    // NOP
    // 0x247430: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247434: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x247434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x247438: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24743c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247440: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247448: 0x0  nop
    ctx->pc = 0x247448u;
    // NOP
    // 0x24744c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24744cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247450: 0x0  nop
    ctx->pc = 0x247450u;
    // NOP
    // 0x247454: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x247454u;
    {
        const bool branch_taken_0x247454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247454) {
            ctx->pc = 0x24746Cu;
            goto label_24746c;
        }
    }
    ctx->pc = 0x24745Cu;
    // 0x24745c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247460: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247464: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247468: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x247468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_24746c:
    // 0x24746c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247470: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x247470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247474: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x247478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x247478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24747c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247480: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247480u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247484: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247488: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x247488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24748c: 0x0  nop
    ctx->pc = 0x24748cu;
    // NOP
    // 0x247490: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x247490u;
    {
        const bool branch_taken_0x247490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247490) {
            ctx->pc = 0x2474B4u;
            goto label_2474b4;
        }
    }
    ctx->pc = 0x247498u;
    // 0x247498: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x247498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24749c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x24749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2474a0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2474a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2474a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2474a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2474a8: 0x0  nop
    ctx->pc = 0x2474a8u;
    // NOP
    // 0x2474ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2474acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2474b0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x2474b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_2474b4:
    // 0x2474b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2474b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2474b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2474b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2474bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2474BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2474BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2474C4u;
}
