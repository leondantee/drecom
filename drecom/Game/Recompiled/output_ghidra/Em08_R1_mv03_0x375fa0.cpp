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

// Function: Em08_R1_mv03
// Address: 0x375fa0 - 0x376500
void Em08_R1_mv03_0x375fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_mv03_0x375fa0");
#endif

    switch (ctx->pc) {
        case 0x376018u: goto label_376018;
        case 0x376020u: goto label_376020;
        case 0x3760a8u: goto label_3760a8;
        case 0x3760e0u: goto label_3760e0;
        case 0x376100u: goto label_376100;
        case 0x376190u: goto label_376190;
        case 0x3761d8u: goto label_3761d8;
        case 0x3761fcu: goto label_3761fc;
        case 0x376208u: goto label_376208;
        case 0x37628cu: goto label_37628c;
        case 0x376294u: goto label_376294;
        case 0x376324u: goto label_376324;
        case 0x37635cu: goto label_37635c;
        case 0x37637cu: goto label_37637c;
        case 0x37640cu: goto label_37640c;
        case 0x376454u: goto label_376454;
        case 0x376478u: goto label_376478;
        case 0x376484u: goto label_376484;
        case 0x3764c8u: goto label_3764c8;
        case 0x3764d0u: goto label_3764d0;
        default: break;
    }

    ctx->pc = 0x375fa0u;

    // 0x375fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375fa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x375fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x375fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375fac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x375facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x375fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375fb4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x375fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x375fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375fbc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x375fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x375fc0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x375fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x375fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375fc8: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x375FC8u;
    {
        const bool branch_taken_0x375fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375fc8) {
            ctx->pc = 0x3762B8u;
            goto label_3762b8;
        }
    }
    ctx->pc = 0x375FD0u;
    // 0x375fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375fd4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x375FD4u;
    {
        const bool branch_taken_0x375fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375fd4) {
            ctx->pc = 0x37603Cu;
            goto label_37603c;
        }
    }
    ctx->pc = 0x375FDCu;
    // 0x375fdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x375FDCu;
    {
        const bool branch_taken_0x375fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375fdc) {
            ctx->pc = 0x375FECu;
            goto label_375fec;
        }
    }
    ctx->pc = 0x375FE4u;
    // 0x375fe4: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x375FE4u;
    {
        const bool branch_taken_0x375fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375fe4) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x375FECu;
label_375fec:
    // 0x375fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375ff8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376004: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x376004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x376008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37600c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37600cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376010u;
    SET_GPR_U32(ctx, 31, 0x376018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376010u, 0x376018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376018u;
label_376018:
    // 0x376018: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376018u;
    SET_GPR_U32(ctx, 31, 0x376020u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376018u, 0x376020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376020u;
label_376020:
    // 0x376020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376024: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x376024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x376028: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x376028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x37602c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x376030: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x376030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x376034: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376038: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x376038u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_37603c:
    // 0x37603c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376040: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376040u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376044: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37604c: 0x0  nop
    ctx->pc = 0x37604cu;
    // NOP
    // 0x376050: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376054: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376058: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x37605c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376060: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x376060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376064: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x376064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37606c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x37606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x376070: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376074: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x376074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x376078: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x376078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x37607c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x37607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x376080: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x376080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x376084: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x376084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x376088: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37608c: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x37608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376090: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x376090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x376094: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x376094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376098: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x376098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x37609c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x37609cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x3760a0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x3760A0u;
    SET_GPR_U32(ctx, 31, 0x3760A8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x3760A0u, 0x3760A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760A8u;
label_3760a8:
    // 0x3760a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3760a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3760ac: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3760acu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760b0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3760b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3760b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3760b8: 0x0  nop
    ctx->pc = 0x3760b8u;
    // NOP
    // 0x3760bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3760bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3760c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3760c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3760c4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3760c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3760c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3760ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3760d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3760d4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3760d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3760d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3760D8u;
    SET_GPR_U32(ctx, 31, 0x3760E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3760D8u, 0x3760E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760E0u;
label_3760e0:
    // 0x3760e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3760e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3760e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760ec: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3760ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760f0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3760f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3760f4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3760f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3760f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3760F8u;
    SET_GPR_U32(ctx, 31, 0x376100u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3760F8u, 0x376100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376100u;
label_376100:
    // 0x376100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376104: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376108: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37610c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x37610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376110: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x376110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376114: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37611c: 0x0  nop
    ctx->pc = 0x37611cu;
    // NOP
    // 0x376120: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x376120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376124: 0x0  nop
    ctx->pc = 0x376124u;
    // NOP
    // 0x376128: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x376128u;
    {
        const bool branch_taken_0x376128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376128) {
            ctx->pc = 0x376144u;
            goto label_376144;
        }
    }
    ctx->pc = 0x376130u;
    // 0x376130: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x376130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376134: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37613c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376140: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_376144:
    // 0x376144: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376148: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37614c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x37614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x376150: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376158: 0x0  nop
    ctx->pc = 0x376158u;
    // NOP
    // 0x37615c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37615cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376160: 0x0  nop
    ctx->pc = 0x376160u;
    // NOP
    // 0x376164: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x376164u;
    {
        const bool branch_taken_0x376164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376164) {
            ctx->pc = 0x376180u;
            goto label_376180;
        }
    }
    ctx->pc = 0x37616Cu;
    // 0x37616c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x37616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x376170: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376178: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37617c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x37617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_376180:
    // 0x376180: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376188: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376188u;
    SET_GPR_U32(ctx, 31, 0x376190u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376188u, 0x376190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376190u;
label_376190:
    // 0x376190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376194: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x376194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376198: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x376198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37619c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3761a0: 0x0  nop
    ctx->pc = 0x3761a0u;
    // NOP
    // 0x3761a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3761a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3761a8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x3761a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x3761ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761b0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3761b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3761bc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3761bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3761c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3761c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3761c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3761cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3761D0u;
    SET_GPR_U32(ctx, 31, 0x3761D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3761D0u, 0x3761D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761D8u;
label_3761d8:
    // 0x3761d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3761e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3761e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3761e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761e8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3761ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3761f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3761f4: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x3761F4u;
    SET_GPR_U32(ctx, 31, 0x3761FCu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x3761F4u, 0x3761FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761FCu;
label_3761fc:
    // 0x3761fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376200: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376200u;
    SET_GPR_U32(ctx, 31, 0x376208u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376200u, 0x376208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376208u;
label_376208:
    // 0x376208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37620c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x37620cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x376210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x376210u;
    {
        const bool branch_taken_0x376210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376210) {
            ctx->pc = 0x376228u;
            goto label_376228;
        }
    }
    ctx->pc = 0x376218u;
    // 0x376218: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37621c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x37621cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x376220: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x376220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x376224: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x376224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_376228:
    // 0x376228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37622c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x37622cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x376230: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x376230u;
    {
        const bool branch_taken_0x376230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376230) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x376238u;
    // 0x376238: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37623c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x37623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376240: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x376240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x376244: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x376244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x376248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37624c: 0x0  nop
    ctx->pc = 0x37624cu;
    // NOP
    // 0x376250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x376250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376254: 0x0  nop
    ctx->pc = 0x376254u;
    // NOP
    // 0x376258: 0x450000a4  bc1f        . + 4 + (0xA4 << 2)
    ctx->pc = 0x376258u;
    {
        const bool branch_taken_0x376258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376258) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x376260u;
    // 0x376260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x376260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376268: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37626c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376270: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376274: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376278: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x376278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x37627c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37627cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376280: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376284: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376284u;
    SET_GPR_U32(ctx, 31, 0x37628Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376284u, 0x37628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37628Cu;
label_37628c:
    // 0x37628c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37628Cu;
    SET_GPR_U32(ctx, 31, 0x376294u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37628Cu, 0x376294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376294u;
label_376294:
    // 0x376294: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x376294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376298: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x376298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x37629c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x37629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3762a0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3762a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3762a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3762a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3762a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3762a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762ac: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3762acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x3762b0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x3762B0u;
    {
        const bool branch_taken_0x3762b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3762b0) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x3762B8u;
label_3762b8:
    // 0x3762b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3762b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3762bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3762bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3762c0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3762c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3762c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3762c8: 0x0  nop
    ctx->pc = 0x3762c8u;
    // NOP
    // 0x3762cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3762ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3762d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3762d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3762d4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3762d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3762d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762dc: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3762dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3762e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3762e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762e8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3762e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3762ec: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3762ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3762f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3762f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3762f4: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3762f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3762f8: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3762f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3762fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3762fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x376300: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x376300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x376304: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376308: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x376308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37630c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x376310: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x376310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376314: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x376314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x376318: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x376318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37631c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37631Cu;
    SET_GPR_U32(ctx, 31, 0x376324u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37631Cu, 0x376324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376324u;
label_376324:
    // 0x376324: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376328: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376328u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37632c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376334: 0x0  nop
    ctx->pc = 0x376334u;
    // NOP
    // 0x376338: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37633c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376340: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x376344: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376348: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37634c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376350: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376350u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376354: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376354u;
    SET_GPR_U32(ctx, 31, 0x37635Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376354u, 0x37635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37635Cu;
label_37635c:
    // 0x37635c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376360: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x376360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x376364: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376368: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37636c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376370: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376370u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376374: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376374u;
    SET_GPR_U32(ctx, 31, 0x37637Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376374u, 0x37637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37637Cu;
label_37637c:
    // 0x37637c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376380: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376388: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37638c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x37638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376390: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376398: 0x0  nop
    ctx->pc = 0x376398u;
    // NOP
    // 0x37639c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37639cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763a0: 0x0  nop
    ctx->pc = 0x3763a0u;
    // NOP
    // 0x3763a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3763A4u;
    {
        const bool branch_taken_0x3763a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763a4) {
            ctx->pc = 0x3763C0u;
            goto label_3763c0;
        }
    }
    ctx->pc = 0x3763ACu;
    // 0x3763ac: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3763acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3763b0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763bc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3763bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_3763c0:
    // 0x3763c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763c4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3763c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3763c8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3763c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3763cc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763d4: 0x0  nop
    ctx->pc = 0x3763d4u;
    // NOP
    // 0x3763d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3763d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763dc: 0x0  nop
    ctx->pc = 0x3763dcu;
    // NOP
    // 0x3763e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3763E0u;
    {
        const bool branch_taken_0x3763e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763e0) {
            ctx->pc = 0x3763FCu;
            goto label_3763fc;
        }
    }
    ctx->pc = 0x3763E8u;
    // 0x3763e8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3763ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763f8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3763f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_3763fc:
    // 0x3763fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3763fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376400: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376404: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376404u;
    SET_GPR_U32(ctx, 31, 0x37640Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376404u, 0x37640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37640Cu;
label_37640c:
    // 0x37640c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376410: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x376410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376414: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x376414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x376418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37641c: 0x0  nop
    ctx->pc = 0x37641cu;
    // NOP
    // 0x376420: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376424: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x376424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x376428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37642c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x37642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376430: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376434: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376438: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x376438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x37643c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376444: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376448: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37644c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x37644Cu;
    SET_GPR_U32(ctx, 31, 0x376454u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x37644Cu, 0x376454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376454u;
label_376454:
    // 0x376454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x37645c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376460: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376464: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376468: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37646c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37646cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376470: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376470u;
    SET_GPR_U32(ctx, 31, 0x376478u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376470u, 0x376478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376478u;
label_376478:
    // 0x376478: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37647c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37647Cu;
    SET_GPR_U32(ctx, 31, 0x376484u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37647Cu, 0x376484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376484u;
label_376484:
    // 0x376484: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x376484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376488: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x376488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x37648c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x37648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x376490: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x376490u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x376494: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x376494u;
    {
        const bool branch_taken_0x376494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x376494) {
            ctx->pc = 0x3764ECu;
            goto label_3764ec;
        }
    }
    ctx->pc = 0x37649Cu;
    // 0x37649c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3764a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3764a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3764a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3764a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3764a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3764acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3764b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3764b4: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x3764b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x3764b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3764b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3764bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3764bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3764c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3764C0u;
    SET_GPR_U32(ctx, 31, 0x3764C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3764C0u, 0x3764C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764C8u;
label_3764c8:
    // 0x3764c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3764C8u;
    SET_GPR_U32(ctx, 31, 0x3764D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3764C8u, 0x3764D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764D0u;
label_3764d0:
    // 0x3764d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3764d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3764d4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3764d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3764d8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3764d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3764dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3764dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3764e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3764e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3764e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3764e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764e8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3764e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_3764ec:
    // 0x3764ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3764ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3764f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3764f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3764f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3764f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3764f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3764F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3764F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376500u;
}
