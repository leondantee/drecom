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

// Function: Pl_damage_em09_00
// Address: 0x351d60 - 0x351fb4
void Pl_damage_em09_00_0x351d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em09_00_0x351d60");
#endif

    switch (ctx->pc) {
        case 0x351decu: goto label_351dec;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e48u: goto label_351e48;
        case 0x351e60u: goto label_351e60;
        case 0x351e88u: goto label_351e88;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea8u: goto label_351ea8;
        case 0x351f34u: goto label_351f34;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f70u: goto label_351f70;
        case 0x351f84u: goto label_351f84;
        case 0x351f90u: goto label_351f90;
        default: break;
    }

    ctx->pc = 0x351d60u;

    // 0x351d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x351d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x351d64: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x351d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x351d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x351d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x351d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x351d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351d74: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x351d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x351d78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x351d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x351d7c: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x351d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x351d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351d84: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x351d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x351d88: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x351d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x351d8c: 0x24720fa0  addiu       $s2, $v1, 0xFA0
    ctx->pc = 0x351d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x351d90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351d94: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x351d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x351d98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x351d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351da0: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x351DA0u;
    {
        const bool branch_taken_0x351da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x351da0) {
            ctx->pc = 0x351F4Cu;
            goto label_351f4c;
        }
    }
    ctx->pc = 0x351DA8u;
    // 0x351da8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x351da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351dac: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x351DACu;
    {
        const bool branch_taken_0x351dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x351dac) {
            ctx->pc = 0x351F18u;
            goto label_351f18;
        }
    }
    ctx->pc = 0x351DB4u;
    // 0x351db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351db8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x351DB8u;
    {
        const bool branch_taken_0x351db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x351db8) {
            ctx->pc = 0x351E24u;
            goto label_351e24;
        }
    }
    ctx->pc = 0x351DC0u;
    // 0x351dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351DC0u;
    {
        const bool branch_taken_0x351dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351dc0) {
            ctx->pc = 0x351DD0u;
            goto label_351dd0;
        }
    }
    ctx->pc = 0x351DC8u;
    // 0x351dc8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x351DC8u;
    {
        const bool branch_taken_0x351dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351dc8) {
            ctx->pc = 0x351F98u;
            goto label_351f98;
        }
    }
    ctx->pc = 0x351DD0u;
label_351dd0:
    // 0x351dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351dd4: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x351dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x351dd8: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x351dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x351ddc: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x351ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x351de0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351de4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351DE4u;
    SET_GPR_U32(ctx, 31, 0x351DECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351DE4u, 0x351DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DECu;
label_351dec:
    // 0x351dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351df0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351df4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x351df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x351df8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351dfc: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x351dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x351e00: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x351e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x351e04: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x351e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x351e08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e0c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x351e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x351e10: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x351e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x351e14: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x351E14u;
    SET_GPR_U32(ctx, 31, 0x351E1Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x351E14u, 0x351E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E1Cu;
label_351e1c:
    // 0x351e1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e20: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x351e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_351e24:
    // 0x351e24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e2c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x351e30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x351e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x351e34: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x351e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x351e38: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x351e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351e3c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x351e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x351e40: 0xc058f50  jal         func_163D40
    ctx->pc = 0x351E40u;
    SET_GPR_U32(ctx, 31, 0x351E48u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x351E40u, 0x351E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E48u;
label_351e48:
    // 0x351e48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e4c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x351e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x351e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351e58: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x351E58u;
    SET_GPR_U32(ctx, 31, 0x351E60u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x351E58u, 0x351E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e64: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x351e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x351e68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x351e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x351e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351E6Cu;
    {
        const bool branch_taken_0x351e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e6c) {
            ctx->pc = 0x351E88u;
            goto label_351e88;
        }
    }
    ctx->pc = 0x351E74u;
    // 0x351e74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e7c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x351e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351e80: 0xc05cd58  jal         func_173560
    ctx->pc = 0x351E80u;
    SET_GPR_U32(ctx, 31, 0x351E88u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x351E80u, 0x351E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E88u;
label_351e88:
    // 0x351e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x351e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351e8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x351e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x351e94: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x351E94u;
    SET_GPR_U32(ctx, 31, 0x351E9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x351E94u, 0x351E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E9Cu;
label_351e9c:
    // 0x351e9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ea0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x351EA0u;
    SET_GPR_U32(ctx, 31, 0x351EA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x351EA0u, 0x351EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EA8u;
label_351ea8:
    // 0x351ea8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351eac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x351eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x351eb0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x351EB0u;
    {
        const bool branch_taken_0x351eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351eb0) {
            ctx->pc = 0x351F98u;
            goto label_351f98;
        }
    }
    ctx->pc = 0x351EB8u;
    // 0x351eb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351ebc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x351ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351ec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ecc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x351eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ed4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x351ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351edc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x351edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ee0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x351ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x351ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ee8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x351ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x351eec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x351eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x351ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ef4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x351ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351efc: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x351efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f04: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x351f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x351f08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x351f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x351f10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x351F10u;
    {
        const bool branch_taken_0x351f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f10) {
            ctx->pc = 0x351F98u;
            goto label_351f98;
        }
    }
    ctx->pc = 0x351F18u;
label_351f18:
    // 0x351f18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f1c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x351f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x351f20: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x351f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x351f24: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x351f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x351f28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351f2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351F2Cu;
    SET_GPR_U32(ctx, 31, 0x351F34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351F2Cu, 0x351F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F34u;
label_351f34:
    // 0x351f34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x351f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351f38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x351f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x351f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f48: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x351f48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_351f4c:
    // 0x351f4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351f54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x351F54u;
    SET_GPR_U32(ctx, 31, 0x351F5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x351F54u, 0x351F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F5Cu;
label_351f5c:
    // 0x351f5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f64: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x351f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351f68: 0xc05cd58  jal         func_173560
    ctx->pc = 0x351F68u;
    SET_GPR_U32(ctx, 31, 0x351F70u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x351F68u, 0x351F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F70u;
label_351f70:
    // 0x351f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x351f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351f7c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x351F7Cu;
    SET_GPR_U32(ctx, 31, 0x351F84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x351F7Cu, 0x351F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F84u;
label_351f84:
    // 0x351f84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f88: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x351F88u;
    SET_GPR_U32(ctx, 31, 0x351F90u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x351F88u, 0x351F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F90u;
label_351f90:
    // 0x351f90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f94: 0x0  nop
    ctx->pc = 0x351f94u;
    // NOP
label_351f98:
    // 0x351f98: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x351f98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x351f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351fa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x351fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351fac: 0x3e00008  jr          $ra
    ctx->pc = 0x351FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351FB4u;
}
