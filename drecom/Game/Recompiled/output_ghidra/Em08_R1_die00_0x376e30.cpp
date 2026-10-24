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

// Function: Em08_R1_die00
// Address: 0x376e30 - 0x3770f0
void Em08_R1_die00_0x376e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_die00_0x376e30");
#endif

    switch (ctx->pc) {
        case 0x376ebcu: goto label_376ebc;
        case 0x376ef0u: goto label_376ef0;
        case 0x376f30u: goto label_376f30;
        case 0x376f44u: goto label_376f44;
        case 0x376f54u: goto label_376f54;
        case 0x376f60u: goto label_376f60;
        case 0x376f9cu: goto label_376f9c;
        case 0x376fb4u: goto label_376fb4;
        case 0x376ff4u: goto label_376ff4;
        case 0x377008u: goto label_377008;
        case 0x377014u: goto label_377014;
        case 0x377080u: goto label_377080;
        case 0x3770a8u: goto label_3770a8;
        case 0x3770d4u: goto label_3770d4;
        default: break;
    }

    ctx->pc = 0x376e30u;

    // 0x376e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x376e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x376e34: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x376e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x376e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x376e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376e44: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x376e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x376e48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376e4c: 0x8c5202d0  lw          $s2, 0x2D0($v0)
    ctx->pc = 0x376e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x376e50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376e54: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x376e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x376e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x376e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376e5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x376e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376e60: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x376E60u;
    {
        const bool branch_taken_0x376e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x376e60) {
            ctx->pc = 0x377064u;
            goto label_377064;
        }
    }
    ctx->pc = 0x376E68u;
    // 0x376e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x376e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376e6c: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x376E6Cu;
    {
        const bool branch_taken_0x376e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x376e6c) {
            ctx->pc = 0x376FA4u;
            goto label_376fa4;
        }
    }
    ctx->pc = 0x376E74u;
    // 0x376e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376e78: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x376E78u;
    {
        const bool branch_taken_0x376e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x376e78) {
            ctx->pc = 0x376EE0u;
            goto label_376ee0;
        }
    }
    ctx->pc = 0x376E80u;
    // 0x376e80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x376E80u;
    {
        const bool branch_taken_0x376e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376e80) {
            ctx->pc = 0x376E90u;
            goto label_376e90;
        }
    }
    ctx->pc = 0x376E88u;
    // 0x376e88: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x376E88u;
    {
        const bool branch_taken_0x376e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376e88) {
            ctx->pc = 0x377064u;
            goto label_377064;
        }
    }
    ctx->pc = 0x376E90u;
label_376e90:
    // 0x376e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376e94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376e98: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376e98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376e9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ea0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ea4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376ea8: 0x24060805  addiu       $a2, $zero, 0x805
    ctx->pc = 0x376ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x376eac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376eb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376eb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376EB4u;
    SET_GPR_U32(ctx, 31, 0x376EBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376EB4u, 0x376EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EBCu;
label_376ebc:
    // 0x376ebc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x376ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x376ec0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ec4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x376ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x376ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ecc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ed0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x376ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x376ed4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x376ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376edc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x376edcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_376ee0:
    // 0x376ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376ee8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376EE8u;
    SET_GPR_U32(ctx, 31, 0x376EF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376EE8u, 0x376EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EF0u;
label_376ef0:
    // 0x376ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x376ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ef4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x376ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376ef8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x376ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x376efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376f00: 0x0  nop
    ctx->pc = 0x376f00u;
    // NOP
    // 0x376f04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376f08: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x376f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x376f0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f10: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376f14: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376f18: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376f20: 0x0  nop
    ctx->pc = 0x376f20u;
    // NOP
    // 0x376f24: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x376f24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376f28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376F28u;
    SET_GPR_U32(ctx, 31, 0x376F30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376F28u, 0x376F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F30u;
label_376f30:
    // 0x376f30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f34: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376f38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x376F3Cu;
    SET_GPR_U32(ctx, 31, 0x376F44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x376F3Cu, 0x376F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F44u;
label_376f44:
    // 0x376f44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376f48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376f4c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376F4Cu;
    SET_GPR_U32(ctx, 31, 0x376F54u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376F4Cu, 0x376F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F54u;
label_376f54:
    // 0x376f54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376F58u;
    SET_GPR_U32(ctx, 31, 0x376F60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376F58u, 0x376F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F60u;
label_376f60:
    // 0x376f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f64: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x376f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x376f68: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x376F68u;
    {
        const bool branch_taken_0x376f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376f68) {
            ctx->pc = 0x377064u;
            goto label_377064;
        }
    }
    ctx->pc = 0x376F70u;
    // 0x376f70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376f74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376f78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376f7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376f88: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x376f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x376f8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376f90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376f94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376F94u;
    SET_GPR_U32(ctx, 31, 0x376F9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376F94u, 0x376F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F9Cu;
label_376f9c:
    // 0x376f9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x376F9Cu;
    {
        const bool branch_taken_0x376f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376f9c) {
            ctx->pc = 0x377064u;
            goto label_377064;
        }
    }
    ctx->pc = 0x376FA4u;
label_376fa4:
    // 0x376fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376fac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376FACu, 0x376FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FB4u;
label_376fb4:
    // 0x376fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x376fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fb8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x376fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376fbc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x376fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x376fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376fc4: 0x0  nop
    ctx->pc = 0x376fc4u;
    // NOP
    // 0x376fc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376fcc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x376fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x376fd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fd4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376fd8: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376fdc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376fe4: 0x0  nop
    ctx->pc = 0x376fe4u;
    // NOP
    // 0x376fe8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x376fe8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376fec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376FECu;
    SET_GPR_U32(ctx, 31, 0x376FF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376FECu, 0x376FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FF4u;
label_376ff4:
    // 0x376ff4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ff8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377000: 0xc05cd10  jal         func_173440
    ctx->pc = 0x377000u;
    SET_GPR_U32(ctx, 31, 0x377008u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x377000u, 0x377008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377008u;
label_377008:
    // 0x377008: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37700c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37700Cu;
    SET_GPR_U32(ctx, 31, 0x377014u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37700Cu, 0x377014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377014u;
label_377014:
    // 0x377014: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x377014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377018: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x377018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37701c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x377020: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x377020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x377024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37702c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x37702cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x377030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377034: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x377034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x377038: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x377038u;
    {
        const bool branch_taken_0x377038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377038) {
            ctx->pc = 0x377064u;
            goto label_377064;
        }
    }
    ctx->pc = 0x377040u;
    // 0x377040: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x377040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377048: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x377048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37704c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377050: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x377050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x377054: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x377054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x377058: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x377058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37705c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x37705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x377060: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x377060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_377064:
    // 0x377064: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377068: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x377068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x37706c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x37706cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x377074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377078: 0xc095fe0  jal         func_257F80
    ctx->pc = 0x377078u;
    SET_GPR_U32(ctx, 31, 0x377080u);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x377078u, 0x377080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377080u;
label_377080:
    // 0x377080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377084: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x377084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x377088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37708c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x37708cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x377090: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x377090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377094: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x377094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x377098: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37709c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x37709cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3770a0: 0xc096254  jal         func_258950
    ctx->pc = 0x3770A0u;
    SET_GPR_U32(ctx, 31, 0x3770A8u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x3770A0u, 0x3770A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770A8u;
label_3770a8:
    // 0x3770a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3770a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3770ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3770acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3770b0: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x3770b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3770b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3770b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3770b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3770b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3770bc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3770bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3770c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3770c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3770c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3770c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3770c8: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x3770c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3770cc: 0xc096254  jal         func_258950
    ctx->pc = 0x3770CCu;
    SET_GPR_U32(ctx, 31, 0x3770D4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x3770CCu, 0x3770D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770D4u;
label_3770d4:
    // 0x3770d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3770d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3770d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3770d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3770dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3770dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3770e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3770e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3770e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3770e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3770e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3770E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3770E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3770F0u;
}
