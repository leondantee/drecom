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

// Function: Em0e_R1_mv0f
// Address: 0x247d70 - 0x24853c
void Em0e_R1_mv0f_0x247d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv0f_0x247d70");
#endif

    switch (ctx->pc) {
        case 0x247d84u: goto label_247d84;
        case 0x247dfcu: goto label_247dfc;
        case 0x2480acu: goto label_2480ac;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480ecu: goto label_2480ec;
        case 0x248174u: goto label_248174;
        case 0x2481f8u: goto label_2481f8;
        case 0x248200u: goto label_248200;
        case 0x248288u: goto label_248288;
        case 0x248298u: goto label_248298;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482ccu: goto label_2482cc;
        case 0x24833cu: goto label_24833c;
        case 0x248360u: goto label_248360;
        case 0x248388u: goto label_248388;
        case 0x2483e8u: goto label_2483e8;
        default: break;
    }

    ctx->pc = 0x247d70u;

    // 0x247d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x247d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x247d74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x247d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x247d78: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x247d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x247d7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247D7Cu;
    SET_GPR_U32(ctx, 31, 0x247D84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247D7Cu, 0x247D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D84u;
label_247d84:
    // 0x247d84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x247d84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x247d88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x247d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x247d8c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x247d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x247d90: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x247d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x247d94: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x247d98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x247d98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247d9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247da0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247da4: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x247da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x247da8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247dac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x247dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x247db0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x247db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x247db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247db8: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x247DB8u;
    {
        const bool branch_taken_0x247db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x247db8) {
            ctx->pc = 0x247E88u;
            goto label_247e88;
        }
    }
    ctx->pc = 0x247DC0u;
    // 0x247dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247DC0u;
    {
        const bool branch_taken_0x247dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247dc0) {
            ctx->pc = 0x247DD0u;
            goto label_247dd0;
        }
    }
    ctx->pc = 0x247DC8u;
    // 0x247dc8: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x247DC8u;
    {
        const bool branch_taken_0x247dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247dc8) {
            ctx->pc = 0x24842Cu;
            goto label_24842c;
        }
    }
    ctx->pc = 0x247DD0u;
label_247dd0:
    // 0x247dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247dd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247dd8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x247dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x247ddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247de0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x247de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247de4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247de8: 0x2406501f  addiu       $a2, $zero, 0x501F
    ctx->pc = 0x247de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20511));
    // 0x247dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247df0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247df4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247DF4u;
    SET_GPR_U32(ctx, 31, 0x247DFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247DF4u, 0x247DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DFCu;
label_247dfc:
    // 0x247dfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e08: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x247e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x247e0c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x247e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x247e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247e20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x247e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x247e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x247e34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247e48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e50: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x247e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x247e54: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x247e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x247e58: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x247e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x247e5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e60: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x247e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x247e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x247e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x247e70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e74: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e78: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x247e7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x247e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x247e80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x247e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247e84: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x247e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_247e88:
    // 0x247e88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e8c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x247e90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247e94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247e98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x247e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x247e9c: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x247E9Cu;
    {
        const bool branch_taken_0x247e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247e9c) {
            ctx->pc = 0x24806Cu;
            goto label_24806c;
        }
    }
    ctx->pc = 0x247EA4u;
    // 0x247ea4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ea8: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247eac: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x247eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247eb4: 0x0  nop
    ctx->pc = 0x247eb4u;
    // NOP
    // 0x247eb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247ebc: 0x0  nop
    ctx->pc = 0x247ebcu;
    // NOP
    // 0x247ec0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x247EC0u;
    {
        const bool branch_taken_0x247ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247ec0) {
            ctx->pc = 0x247EF8u;
            goto label_247ef8;
        }
    }
    ctx->pc = 0x247EC8u;
    // 0x247ec8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x247ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x247ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247ed8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x247edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ee4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ee8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247eec: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247ef0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x247EF0u;
    {
        const bool branch_taken_0x247ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ef0) {
            ctx->pc = 0x247FB0u;
            goto label_247fb0;
        }
    }
    ctx->pc = 0x247EF8u;
label_247ef8:
    // 0x247ef8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247efc: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f00: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f08: 0x0  nop
    ctx->pc = 0x247f08u;
    // NOP
    // 0x247f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f10: 0x0  nop
    ctx->pc = 0x247f10u;
    // NOP
    // 0x247f14: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247F14u;
    {
        const bool branch_taken_0x247f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f14) {
            ctx->pc = 0x247F4Cu;
            goto label_247f4c;
        }
    }
    ctx->pc = 0x247F1Cu;
    // 0x247f1c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x247f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x247f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f2c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247f30: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x247f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f40: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247f44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x247F44u;
    {
        const bool branch_taken_0x247f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247f44) {
            ctx->pc = 0x247FB0u;
            goto label_247fb0;
        }
    }
    ctx->pc = 0x247F4Cu;
label_247f4c:
    // 0x247f4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f50: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f54: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f5c: 0x0  nop
    ctx->pc = 0x247f5cu;
    // NOP
    // 0x247f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f64: 0x0  nop
    ctx->pc = 0x247f64u;
    // NOP
    // 0x247f68: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247F68u;
    {
        const bool branch_taken_0x247f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f68) {
            ctx->pc = 0x247FA0u;
            goto label_247fa0;
        }
    }
    ctx->pc = 0x247F70u;
    // 0x247f70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x247f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x247f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f80: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247f84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f94: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x247F98u;
    {
        const bool branch_taken_0x247f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247f98) {
            ctx->pc = 0x247FB0u;
            goto label_247fb0;
        }
    }
    ctx->pc = 0x247FA0u;
label_247fa0:
    // 0x247fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247fa4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247fa8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247fac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_247fb0:
    // 0x247fb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247fb4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x247fb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247fc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x247FC4u;
    {
        const bool branch_taken_0x247fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fc4) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FCCu;
    // 0x247fcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247fd0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x247fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247fd4: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x247fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247fdc: 0x0  nop
    ctx->pc = 0x247fdcu;
    // NOP
    // 0x247fe0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247fe4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x247fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x247fe8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x247FE8u;
    {
        const bool branch_taken_0x247fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247fe8) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x247FF0u;
label_247ff0:
    // 0x247ff0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ff4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x247ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ff8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248000: 0x0  nop
    ctx->pc = 0x248000u;
    // NOP
    // 0x248004: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248008: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x248008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x24800c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248010: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x248010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248014: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248018: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x248018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24801c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24801cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248020: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x248020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x248024: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x248024u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24802c: 0x0  nop
    ctx->pc = 0x24802cu;
    // NOP
    // 0x248030: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x248030u;
    {
        const bool branch_taken_0x248030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248030) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x248038u;
    // 0x248038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24803c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248040: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x248040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x248044: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x248044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x248048: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x248048u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24804c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248050: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x248050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x248054: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248058: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x248058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x24805c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248060: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x248060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x248064: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248064u;
    {
        const bool branch_taken_0x248064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248064) {
            ctx->pc = 0x248080u;
            goto label_248080;
        }
    }
    ctx->pc = 0x24806Cu;
label_24806c:
    // 0x24806c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x24806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x248070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248074: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248078: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24807c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24807cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_248080:
    // 0x248080: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x248080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x248084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x248084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x248088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x248088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24808c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248094: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x248098: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x248098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24809c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2480a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2480a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2480a4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2480A4u;
    SET_GPR_U32(ctx, 31, 0x2480ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2480A4u, 0x2480ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480ACu;
label_2480ac:
    // 0x2480ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2480acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2480b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2480b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2480b8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2480b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2480bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2480bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2480c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2480C0u;
    SET_GPR_U32(ctx, 31, 0x2480C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2480C0u, 0x2480C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480C8u;
label_2480c8:
    // 0x2480c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2480ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2480d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2480d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2480d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2480D8u;
    SET_GPR_U32(ctx, 31, 0x2480E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2480D8u, 0x2480E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480E0u;
label_2480e0:
    // 0x2480e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480e4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2480E4u;
    SET_GPR_U32(ctx, 31, 0x2480ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2480E4u, 0x2480ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480ECu;
label_2480ec:
    // 0x2480ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2480ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480f0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2480f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2480f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2480f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2480f8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2480f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2480fc: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2480FCu;
    {
        const bool branch_taken_0x2480fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2480fc) {
            ctx->pc = 0x2482CCu;
            goto label_2482cc;
        }
    }
    ctx->pc = 0x248104u;
    // 0x248104: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248108: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x24810c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x248110: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x248110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x248114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248118: 0x0  nop
    ctx->pc = 0x248118u;
    // NOP
    // 0x24811c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24811cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x248120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248124: 0x0  nop
    ctx->pc = 0x248124u;
    // NOP
    // 0x248128: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x248128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24812c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24812cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248130: 0x0  nop
    ctx->pc = 0x248130u;
    // NOP
    // 0x248134: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x248134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x248138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x248138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24813c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24813cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248140: 0x0  nop
    ctx->pc = 0x248140u;
    // NOP
    // 0x248144: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x248144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x248148: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x248148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x24814c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24814cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248150: 0x0  nop
    ctx->pc = 0x248150u;
    // NOP
    // 0x248154: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x248154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x248158: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x248158u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x24815c: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x24815cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x248160: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x248160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x248164: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x248164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248168: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x248168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24816c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x24816Cu;
    SET_GPR_U32(ctx, 31, 0x248174u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x24816Cu, 0x248174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248174u;
label_248174:
    // 0x248174: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x248174u;
    {
        const bool branch_taken_0x248174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248174) {
            ctx->pc = 0x2482CCu;
            goto label_2482cc;
        }
    }
    ctx->pc = 0x24817Cu;
    // 0x24817c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24817cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248180: 0x0  nop
    ctx->pc = 0x248180u;
    // NOP
    // 0x248184: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x248184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x248188: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24818c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24818cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248190: 0x0  nop
    ctx->pc = 0x248190u;
    // NOP
    // 0x248194: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x248198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24819c: 0x0  nop
    ctx->pc = 0x24819cu;
    // NOP
    // 0x2481a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2481a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2481a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2481a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2481a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2481a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2481ac: 0x0  nop
    ctx->pc = 0x2481acu;
    // NOP
    // 0x2481b0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2481b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2481b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2481b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2481b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2481bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2481bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2481c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2481c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2481c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2481c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2481c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2481c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2481cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2481ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2481d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2481d4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2481d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2481d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2481dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2481e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2481e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2481e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2481e8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x2481e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2481ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2481ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2481f0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2481F0u;
    SET_GPR_U32(ctx, 31, 0x2481F8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2481F0u, 0x2481F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481F8u;
label_2481f8:
    // 0x2481f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2481F8u;
    SET_GPR_U32(ctx, 31, 0x248200u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2481F8u, 0x248200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248200u;
label_248200:
    // 0x248200: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248200u;
    {
        const bool branch_taken_0x248200 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x248200) {
            ctx->pc = 0x24821Cu;
            goto label_24821c;
        }
    }
    ctx->pc = 0x248208u;
    // 0x248208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24820c: 0x0  nop
    ctx->pc = 0x24820cu;
    // NOP
    // 0x248210: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x248210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248214u;
    {
        const bool branch_taken_0x248214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248214) {
            ctx->pc = 0x248238u;
            goto label_248238;
        }
    }
    ctx->pc = 0x24821Cu;
label_24821c:
    // 0x24821c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x248220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x248224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x248228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24822c: 0x0  nop
    ctx->pc = 0x24822cu;
    // NOP
    // 0x248230: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x248230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248234: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x248234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_248238:
    // 0x248238: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x248238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24823c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24823cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248240: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x248244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x248248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24824c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x248250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x248250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x248254: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x248254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x248258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x248258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24825c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x248264: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x248264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x248268: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24826c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x248270: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x248274: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248278: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x248278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x24827c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24827cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248280: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x248280u;
    SET_GPR_U32(ctx, 31, 0x248288u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x248280u, 0x248288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248288u;
label_248288:
    // 0x248288: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x248288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x24828c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x248290: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x248290u;
    SET_GPR_U32(ctx, 31, 0x248298u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x248290u, 0x248298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248298u;
label_248298:
    // 0x248298: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x24829c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2482a0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2482A0u;
    SET_GPR_U32(ctx, 31, 0x2482A8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2482A0u, 0x2482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2482ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2482acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2482b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2482b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2482b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482b8: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2482b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2482bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2482bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2482c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2482c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2482c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2482C4u;
    SET_GPR_U32(ctx, 31, 0x2482CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2482C4u, 0x2482CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482CCu;
label_2482cc:
    // 0x2482cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482d0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2482d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2482d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2482d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2482d8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2482d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2482dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2482DCu;
    {
        const bool branch_taken_0x2482dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482dc) {
            ctx->pc = 0x2482F4u;
            goto label_2482f4;
        }
    }
    ctx->pc = 0x2482E4u;
    // 0x2482e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2482e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482e8: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2482e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2482ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2482ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2482f0: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2482f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2482f4:
    // 0x2482f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2482f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2482f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2482fc: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2482FCu;
    {
        const bool branch_taken_0x2482fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482fc) {
            ctx->pc = 0x24842Cu;
            goto label_24842c;
        }
    }
    ctx->pc = 0x248304u;
    // 0x248304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248308: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24830c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x24830cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x248310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248314: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248318: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x248318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x24831c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248320: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x248320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x248324: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248328: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x248328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x24832c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248330: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x248330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x248334: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248334u;
    SET_GPR_U32(ctx, 31, 0x24833Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248334u, 0x24833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24833Cu;
label_24833c:
    // 0x24833c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248340: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248344: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x248348: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x248348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24834c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x24834cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248354: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x248354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x248358: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248358u;
    SET_GPR_U32(ctx, 31, 0x248360u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248358u, 0x248360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248360u;
label_248360:
    // 0x248360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248364: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248368: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x248368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x24836c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x24836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248370: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248374: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248378: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24837c: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x24837cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x248380: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248380u;
    SET_GPR_U32(ctx, 31, 0x248388u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248380u, 0x248388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248388u;
label_248388:
    // 0x248388: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24838c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248390: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x248390u;
    {
        const bool branch_taken_0x248390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248390) {
            ctx->pc = 0x2483C8u;
            goto label_2483c8;
        }
    }
    ctx->pc = 0x248398u;
    // 0x248398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24839c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2483a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2483a4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2483a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2483a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2483acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2483b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2483b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2483b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2483bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2483c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2483c8:
    // 0x2483c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483cc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2483d0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2483d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2483d4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2483d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2483d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2483dc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2483dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2483e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2483E0u;
    SET_GPR_U32(ctx, 31, 0x2483E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2483E0u, 0x2483E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483E8u;
label_2483e8:
    // 0x2483e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2483e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2483ec: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2483ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2483f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2483f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2483f4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2483F4u;
    {
        const bool branch_taken_0x2483f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2483f4) {
            ctx->pc = 0x24842Cu;
            goto label_24842c;
        }
    }
    ctx->pc = 0x2483FCu;
    // 0x2483fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2483fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248404: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x248404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248408: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24840c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248410: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x248410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x248414: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248418: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x248418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24841c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248420: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x248420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x248424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248428: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x248428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_24842c:
    // 0x24842c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248430: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248434: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x248434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24843c: 0x0  nop
    ctx->pc = 0x24843cu;
    // NOP
    // 0x248440: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x248440u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248444: 0x0  nop
    ctx->pc = 0x248444u;
    // NOP
    // 0x248448: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x248448u;
    {
        const bool branch_taken_0x248448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248448) {
            ctx->pc = 0x24852Cu;
            goto label_24852c;
        }
    }
    ctx->pc = 0x248450u;
    // 0x248450: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248454: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248458: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x248458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24845c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24845cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248460: 0x0  nop
    ctx->pc = 0x248460u;
    // NOP
    // 0x248464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248468: 0x0  nop
    ctx->pc = 0x248468u;
    // NOP
    // 0x24846c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x24846Cu;
    {
        const bool branch_taken_0x24846c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24846c) {
            ctx->pc = 0x2484D4u;
            goto label_2484d4;
        }
    }
    ctx->pc = 0x248474u;
    // 0x248474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248478: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24847c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x24847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248480: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x248484: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x248484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x248488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24848c: 0x0  nop
    ctx->pc = 0x24848cu;
    // NOP
    // 0x248490: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248494: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x248494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x248498: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24849c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2484a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2484a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2484a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2484a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484a8: 0x0  nop
    ctx->pc = 0x2484a8u;
    // NOP
    // 0x2484ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2484acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2484b0: 0x0  nop
    ctx->pc = 0x2484b0u;
    // NOP
    // 0x2484b4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2484B4u;
    {
        const bool branch_taken_0x2484b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2484b4) {
            ctx->pc = 0x24852Cu;
            goto label_24852c;
        }
    }
    ctx->pc = 0x2484BCu;
    // 0x2484bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2484bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2484c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2484c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2484c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2484c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2484c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2484cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x24852Cu;
            goto label_24852c;
        }
    }
    ctx->pc = 0x2484D4u;
label_2484d4:
    // 0x2484d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2484d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2484d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2484dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2484dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2484e0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2484e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2484e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2484e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2484e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2484e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484ec: 0x0  nop
    ctx->pc = 0x2484ecu;
    // NOP
    // 0x2484f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2484f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2484f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2484f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2484f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2484f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2484fc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2484fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x248500: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x248500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248508: 0x0  nop
    ctx->pc = 0x248508u;
    // NOP
    // 0x24850c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24850cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248510: 0x0  nop
    ctx->pc = 0x248510u;
    // NOP
    // 0x248514: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x248514u;
    {
        const bool branch_taken_0x248514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248514) {
            ctx->pc = 0x24852Cu;
            goto label_24852c;
        }
    }
    ctx->pc = 0x24851Cu;
    // 0x24851c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24851cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248520: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248524: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248528: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x248528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_24852c:
    // 0x24852c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24852cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248530: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x248534: 0x3e00008  jr          $ra
    ctx->pc = 0x248534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24853Cu;
}
