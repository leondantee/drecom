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

// Function: Em10_R1_die_blow_back
// Address: 0x133dc0 - 0x1341e8
void Em10_R1_die_blow_back_0x133dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_die_blow_back_0x133dc0");
#endif

    switch (ctx->pc) {
        case 0x133e58u: goto label_133e58;
        case 0x133ec0u: goto label_133ec0;
        case 0x133eccu: goto label_133ecc;
        case 0x133f08u: goto label_133f08;
        case 0x133f14u: goto label_133f14;
        case 0x133f24u: goto label_133f24;
        case 0x133f3cu: goto label_133f3c;
        case 0x133fb0u: goto label_133fb0;
        case 0x133fe4u: goto label_133fe4;
        case 0x134018u: goto label_134018;
        case 0x134030u: goto label_134030;
        case 0x134050u: goto label_134050;
        case 0x13405cu: goto label_13405c;
        case 0x1340d0u: goto label_1340d0;
        case 0x1340e0u: goto label_1340e0;
        case 0x1340f0u: goto label_1340f0;
        case 0x134100u: goto label_134100;
        case 0x134110u: goto label_134110;
        case 0x134120u: goto label_134120;
        case 0x134130u: goto label_134130;
        case 0x134140u: goto label_134140;
        case 0x13416cu: goto label_13416c;
        case 0x134178u: goto label_134178;
        default: break;
    }

    ctx->pc = 0x133dc0u;

    // 0x133dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133dc4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x133dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x133dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133dd0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x133dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x133dd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133dd8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x133dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x133ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133de0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x133de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133de4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x133de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x133de8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133dec: 0x108300db  beq         $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x133DECu;
    {
        const bool branch_taken_0x133dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133dec) {
            ctx->pc = 0x13415Cu;
            goto label_13415c;
        }
    }
    ctx->pc = 0x133DF4u;
    // 0x133df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133df8: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x133DF8u;
    {
        const bool branch_taken_0x133df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133df8) {
            ctx->pc = 0x134040u;
            goto label_134040;
        }
    }
    ctx->pc = 0x133E00u;
    // 0x133e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133e04: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x133E04u;
    {
        const bool branch_taken_0x133e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133e04) {
            ctx->pc = 0x133FD8u;
            goto label_133fd8;
        }
    }
    ctx->pc = 0x133E0Cu;
    // 0x133e0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e10: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x133E10u;
    {
        const bool branch_taken_0x133e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133e10) {
            ctx->pc = 0x133EF8u;
            goto label_133ef8;
        }
    }
    ctx->pc = 0x133E18u;
    // 0x133e18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133E18u;
    {
        const bool branch_taken_0x133e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e18) {
            ctx->pc = 0x133E28u;
            goto label_133e28;
        }
    }
    ctx->pc = 0x133E20u;
    // 0x133e20: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x133E20u;
    {
        const bool branch_taken_0x133e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e20) {
            ctx->pc = 0x1341D0u;
            goto label_1341d0;
        }
    }
    ctx->pc = 0x133E28u;
label_133e28:
    // 0x133e28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e2c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x133e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e34: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x133e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x133e38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x133e44: 0x2406051e  addiu       $a2, $zero, 0x51E
    ctx->pc = 0x133e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x133e48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133e50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133E50u;
    SET_GPR_U32(ctx, 31, 0x133E58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133E50u, 0x133E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E58u;
label_133e58:
    // 0x133e58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133e5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e60: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x133e64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133e6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133e70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133e74: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e7c: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x133e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x133e80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e84: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133e88: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133e8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x133e90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133e94: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133e98: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x133e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x133e9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x133e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x133ea0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133ea4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ea8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133eac: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x133eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x133eb0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x133eb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133eb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133eb8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x133EB8u;
    SET_GPR_U32(ctx, 31, 0x133EC0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133EB8u, 0x133EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EC0u;
label_133ec0:
    // 0x133ec0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ec4: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x133EC4u;
    SET_GPR_U32(ctx, 31, 0x133ECCu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133EC4u, 0x133ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ECCu;
label_133ecc:
    // 0x133ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ed4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133ed8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x133edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133ee0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ee4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x133ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x133ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133eec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133ef4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133ef8:
    // 0x133ef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133efc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133efcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133f00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133F00u;
    SET_GPR_U32(ctx, 31, 0x133F08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133F00u, 0x133F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F08u;
label_133f08:
    // 0x133f08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x133F0Cu;
    SET_GPR_U32(ctx, 31, 0x133F14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133F0Cu, 0x133F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F14u;
label_133f14:
    // 0x133f14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x133f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133f1c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133F1Cu;
    SET_GPR_U32(ctx, 31, 0x133F24u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133F1Cu, 0x133F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F24u;
label_133f24:
    // 0x133f24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f2c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x133f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x133f30: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x133f34: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x133F34u;
    SET_GPR_U32(ctx, 31, 0x133F3Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x133F34u, 0x133F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F3Cu;
label_133f3c:
    // 0x133f3c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x133f40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f44: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x133f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f4c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x133f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133f54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133f58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f5c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x133f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f64: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x133f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x133f68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x133f6c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133f70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f74: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x133f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f78: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133f80: 0x0  nop
    ctx->pc = 0x133f80u;
    // NOP
    // 0x133f84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x133F84u;
    {
        const bool branch_taken_0x133f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133f84) {
            ctx->pc = 0x133FA4u;
            goto label_133fa4;
        }
    }
    ctx->pc = 0x133F8Cu;
    // 0x133f8c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133f9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fa0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_133fa4:
    // 0x133fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fa8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133FA8u;
    SET_GPR_U32(ctx, 31, 0x133FB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133FA8u, 0x133FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FB0u;
label_133fb0:
    // 0x133fb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fb4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x133fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x133fb8: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x133FB8u;
    {
        const bool branch_taken_0x133fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fb8) {
            ctx->pc = 0x1341D0u;
            goto label_1341d0;
        }
    }
    ctx->pc = 0x133FC0u;
    // 0x133fc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fc4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133fcc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x133fd0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x133FD0u;
    {
        const bool branch_taken_0x133fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fd0) {
            ctx->pc = 0x1341D0u;
            goto label_1341d0;
        }
    }
    ctx->pc = 0x133FD8u;
label_133fd8:
    // 0x133fd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fdc: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133FDCu;
    SET_GPR_U32(ctx, 31, 0x133FE4u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133FDCu, 0x133FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE4u;
label_133fe4:
    // 0x133fe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fe8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133fec: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x133fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133ff4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133ff8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x134000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x134004: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x134004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x134008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13400c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x134010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x134010u;
    SET_GPR_U32(ctx, 31, 0x134018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x134010u, 0x134018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134018u;
label_134018:
    // 0x134018: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x13401c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134020: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x134020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x134024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134028: 0xc04d994  jal         func_136650
    ctx->pc = 0x134028u;
    SET_GPR_U32(ctx, 31, 0x134030u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x134028u, 0x134030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134030u;
label_134030:
    // 0x134030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134034: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x134034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x134038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13403c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13403cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_134040:
    // 0x134040: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134044: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x134044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x134048: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x134048u;
    SET_GPR_U32(ctx, 31, 0x134050u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x134048u, 0x134050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134050u;
label_134050:
    // 0x134050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134054: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x134054u;
    SET_GPR_U32(ctx, 31, 0x13405Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x134054u, 0x13405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13405Cu;
label_13405c:
    // 0x13405c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134060: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x134060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x134064: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134064u;
    {
        const bool branch_taken_0x134064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134064) {
            ctx->pc = 0x134084u;
            goto label_134084;
        }
    }
    ctx->pc = 0x13406Cu;
    // 0x13406c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134070: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x134074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134078: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x134078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13407c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13407Cu;
    {
        const bool branch_taken_0x13407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13407c) {
            ctx->pc = 0x13415Cu;
            goto label_13415c;
        }
    }
    ctx->pc = 0x134084u;
label_134084:
    // 0x134084: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x134088: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x134088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x13408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134090: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x134090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134094: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x134094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x134098: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x134098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13409c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1340a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1340a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1340a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1340a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1340ac: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1340acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1340b0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1340b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1340b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1340b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1340b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340bc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1340bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1340c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340c4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1340c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1340c8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340C8u;
    SET_GPR_U32(ctx, 31, 0x1340D0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340C8u, 0x1340D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340D0u;
label_1340d0:
    // 0x1340d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1340d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1340d8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340D8u;
    SET_GPR_U32(ctx, 31, 0x1340E0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340D8u, 0x1340E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340E0u;
label_1340e0:
    // 0x1340e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1340e8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340E8u;
    SET_GPR_U32(ctx, 31, 0x1340F0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340E8u, 0x1340F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340F0u;
label_1340f0:
    // 0x1340f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1340f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1340f8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340F8u;
    SET_GPR_U32(ctx, 31, 0x134100u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340F8u, 0x134100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134100u;
label_134100:
    // 0x134100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134104: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x134104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x134108: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134108u;
    SET_GPR_U32(ctx, 31, 0x134110u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134108u, 0x134110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134110u;
label_134110:
    // 0x134110: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134114: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x134114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x134118: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134118u;
    SET_GPR_U32(ctx, 31, 0x134120u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134118u, 0x134120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134120u;
label_134120:
    // 0x134120: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134124: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x134124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x134128: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134128u;
    SET_GPR_U32(ctx, 31, 0x134130u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134128u, 0x134130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134130u;
label_134130:
    // 0x134130: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134134: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x134138: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134138u;
    SET_GPR_U32(ctx, 31, 0x134140u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134138u, 0x134140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134140u;
label_134140:
    // 0x134140: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x134144: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x134144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134148: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x134148u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13414c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134150: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x134150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x134154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134158: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x134158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13415c:
    // 0x13415c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134160: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x134160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x134164: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x134164u;
    SET_GPR_U32(ctx, 31, 0x13416Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x134164u, 0x13416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13416Cu;
label_13416c:
    // 0x13416c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134170: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x134170u;
    SET_GPR_U32(ctx, 31, 0x134178u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x134170u, 0x134178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134178u;
label_134178:
    // 0x134178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13417c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x134180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x134180u;
    {
        const bool branch_taken_0x134180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134180) {
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134188u;
    // 0x134188: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13418c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x134190: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134194: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x134194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x134198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134198u;
    {
        const bool branch_taken_0x134198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134198) {
            ctx->pc = 0x1341D0u;
            goto label_1341d0;
        }
    }
    ctx->pc = 0x1341A0u;
label_1341a0:
    // 0x1341a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1341a8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1341a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1341ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1341acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1341b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1341b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1341b8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1341b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1341bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1341bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1341c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341c4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1341c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1341c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1341cc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1341ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1341d0:
    // 0x1341d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1341d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1341d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1341d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1341d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1341d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1341dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1341dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1341e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1341E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1341E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1341E8u;
}
