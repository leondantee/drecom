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

// Function: Em08_R1_mv02
// Address: 0x3759d0 - 0x375f30
void Em08_R1_mv02_0x3759d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_mv02_0x3759d0");
#endif

    switch (ctx->pc) {
        case 0x375a48u: goto label_375a48;
        case 0x375a50u: goto label_375a50;
        case 0x375ad8u: goto label_375ad8;
        case 0x375b10u: goto label_375b10;
        case 0x375b30u: goto label_375b30;
        case 0x375bc0u: goto label_375bc0;
        case 0x375c08u: goto label_375c08;
        case 0x375c2cu: goto label_375c2c;
        case 0x375c38u: goto label_375c38;
        case 0x375cbcu: goto label_375cbc;
        case 0x375cc4u: goto label_375cc4;
        case 0x375d54u: goto label_375d54;
        case 0x375d8cu: goto label_375d8c;
        case 0x375dacu: goto label_375dac;
        case 0x375e3cu: goto label_375e3c;
        case 0x375e84u: goto label_375e84;
        case 0x375ea8u: goto label_375ea8;
        case 0x375eb4u: goto label_375eb4;
        case 0x375ef8u: goto label_375ef8;
        case 0x375f00u: goto label_375f00;
        default: break;
    }

    ctx->pc = 0x3759d0u;

    // 0x3759d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3759d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3759d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3759d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3759d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3759d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3759dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3759dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3759e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3759e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3759e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x3759e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3759e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3759ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3759ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3759f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3759f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3759f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3759f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3759f8: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x3759F8u;
    {
        const bool branch_taken_0x3759f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3759f8) {
            ctx->pc = 0x375CE8u;
            goto label_375ce8;
        }
    }
    ctx->pc = 0x375A00u;
    // 0x375a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a04: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x375A04u;
    {
        const bool branch_taken_0x375a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375a04) {
            ctx->pc = 0x375A6Cu;
            goto label_375a6c;
        }
    }
    ctx->pc = 0x375A0Cu;
    // 0x375a0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x375A0Cu;
    {
        const bool branch_taken_0x375a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375a0c) {
            ctx->pc = 0x375A1Cu;
            goto label_375a1c;
        }
    }
    ctx->pc = 0x375A14u;
    // 0x375a14: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x375A14u;
    {
        const bool branch_taken_0x375a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375a14) {
            ctx->pc = 0x375F1Cu;
            goto label_375f1c;
        }
    }
    ctx->pc = 0x375A1Cu;
label_375a1c:
    // 0x375a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a24: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375a34: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x375a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x375a38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375a40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375A40u;
    SET_GPR_U32(ctx, 31, 0x375A48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375A40u, 0x375A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A48u;
label_375a48:
    // 0x375a48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375A48u;
    SET_GPR_U32(ctx, 31, 0x375A50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375A48u, 0x375A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A50u;
label_375a50:
    // 0x375a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x375a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375a54: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x375a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x375a58: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x375a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x375a5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x375a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x375a60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x375a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x375a64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x375a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_375a6c:
    // 0x375a6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375a70: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375a70u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375a74: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375a7c: 0x0  nop
    ctx->pc = 0x375a7cu;
    // NOP
    // 0x375a80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375a84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375a88: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375a8c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375a90: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x375a94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x375a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375a98: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375a9c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375aa0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375aa8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375aac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ab4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375ab8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x375ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375abc: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x375abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375ac0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375ac4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375ac8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375acc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375ad0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375AD0u;
    SET_GPR_U32(ctx, 31, 0x375AD8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375AD0u, 0x375AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AD8u;
label_375ad8:
    // 0x375ad8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375adc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375adcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ae0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375ae8: 0x0  nop
    ctx->pc = 0x375ae8u;
    // NOP
    // 0x375aec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375af0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375af4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375af8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375afc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b00: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x375b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375b04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375b04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375b08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375B08u;
    SET_GPR_U32(ctx, 31, 0x375B10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375B08u, 0x375B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B10u;
label_375b10:
    // 0x375b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b1c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b20: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375b24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375b24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375b28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375B28u;
    SET_GPR_U32(ctx, 31, 0x375B30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375B28u, 0x375B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B30u;
label_375b30:
    // 0x375b30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b34: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b3c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b40: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375b44: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b4c: 0x0  nop
    ctx->pc = 0x375b4cu;
    // NOP
    // 0x375b50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x375b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375b54: 0x0  nop
    ctx->pc = 0x375b54u;
    // NOP
    // 0x375b58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375B58u;
    {
        const bool branch_taken_0x375b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b58) {
            ctx->pc = 0x375B74u;
            goto label_375b74;
        }
    }
    ctx->pc = 0x375B60u;
    // 0x375b60: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375b64: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b70: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_375b74:
    // 0x375b74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b78: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b7c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375b80: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b88: 0x0  nop
    ctx->pc = 0x375b88u;
    // NOP
    // 0x375b8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375b90: 0x0  nop
    ctx->pc = 0x375b90u;
    // NOP
    // 0x375b94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375B94u;
    {
        const bool branch_taken_0x375b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b94) {
            ctx->pc = 0x375BB0u;
            goto label_375bb0;
        }
    }
    ctx->pc = 0x375B9Cu;
    // 0x375b9c: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375ba0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375ba8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bac: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_375bb0:
    // 0x375bb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375BB8u;
    SET_GPR_U32(ctx, 31, 0x375BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375BB8u, 0x375BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BC0u;
label_375bc0:
    // 0x375bc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bc4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x375bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375bc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x375bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x375bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375bd0: 0x0  nop
    ctx->pc = 0x375bd0u;
    // NOP
    // 0x375bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375bd8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x375bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x375bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375be0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x375be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375be8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375bec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x375becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x375bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375bf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bf8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375bfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375C00u;
    SET_GPR_U32(ctx, 31, 0x375C08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375C00u, 0x375C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C08u;
label_375c08:
    // 0x375c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375c10: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x375c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375c14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c18: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375c1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375c24: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375C24u;
    SET_GPR_U32(ctx, 31, 0x375C2Cu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375C24u, 0x375C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C2Cu;
label_375c2c:
    // 0x375c2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c30: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375C30u;
    SET_GPR_U32(ctx, 31, 0x375C38u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375C30u, 0x375C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C38u;
label_375c38:
    // 0x375c38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x375c40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x375C40u;
    {
        const bool branch_taken_0x375c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375c40) {
            ctx->pc = 0x375C58u;
            goto label_375c58;
        }
    }
    ctx->pc = 0x375C48u;
    // 0x375c48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c4c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x375c50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x375c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x375c54: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375c54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_375c58:
    // 0x375c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c5c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x375c60: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x375C60u;
    {
        const bool branch_taken_0x375c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375c60) {
            ctx->pc = 0x375F1Cu;
            goto label_375f1c;
        }
    }
    ctx->pc = 0x375C68u;
    // 0x375c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c6c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375c70: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x375c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x375c74: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x375c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x375c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375c7c: 0x0  nop
    ctx->pc = 0x375c7cu;
    // NOP
    // 0x375c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375c84: 0x0  nop
    ctx->pc = 0x375c84u;
    // NOP
    // 0x375c88: 0x450000a4  bc1f        . + 4 + (0xA4 << 2)
    ctx->pc = 0x375C88u;
    {
        const bool branch_taken_0x375c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375c88) {
            ctx->pc = 0x375F1Cu;
            goto label_375f1c;
        }
    }
    ctx->pc = 0x375C90u;
    // 0x375c90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375c94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c98: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375c9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ca0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ca4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375ca8: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x375ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x375cac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375cb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375cb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375CB4u;
    SET_GPR_U32(ctx, 31, 0x375CBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375CB4u, 0x375CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CBCu;
label_375cbc:
    // 0x375cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375CBCu;
    SET_GPR_U32(ctx, 31, 0x375CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375CBCu, 0x375CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CC4u;
label_375cc4:
    // 0x375cc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375cc8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x375cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x375ccc: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x375cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x375cd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x375cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375cd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375cdc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x375ce0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x375CE0u;
    {
        const bool branch_taken_0x375ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375ce0) {
            ctx->pc = 0x375F1Cu;
            goto label_375f1c;
        }
    }
    ctx->pc = 0x375CE8u;
label_375ce8:
    // 0x375ce8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375cec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375cecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375cf0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375cf8: 0x0  nop
    ctx->pc = 0x375cf8u;
    // NOP
    // 0x375cfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d04: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375d08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375d0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x375d10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x375d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375d14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d18: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375d1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d24: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375d28: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375d2c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375d30: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375d34: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375d38: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375d3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375d40: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375d44: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375d48: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375d4c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375D4Cu;
    SET_GPR_U32(ctx, 31, 0x375D54u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375D4Cu, 0x375D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D54u;
label_375d54:
    // 0x375d54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d58: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375d58u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d5c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375d64: 0x0  nop
    ctx->pc = 0x375d64u;
    // NOP
    // 0x375d68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375d6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d70: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x375d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375d80: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375D84u;
    SET_GPR_U32(ctx, 31, 0x375D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375D84u, 0x375D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D8Cu;
label_375d8c:
    // 0x375d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d98: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d9c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375da0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375da0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375da4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375DA4u;
    SET_GPR_U32(ctx, 31, 0x375DACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375DA4u, 0x375DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DACu;
label_375dac:
    // 0x375dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375db0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375db4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375db8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375dbc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375dc0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375dc8: 0x0  nop
    ctx->pc = 0x375dc8u;
    // NOP
    // 0x375dcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x375dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375dd0: 0x0  nop
    ctx->pc = 0x375dd0u;
    // NOP
    // 0x375dd4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375DD4u;
    {
        const bool branch_taken_0x375dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375dd4) {
            ctx->pc = 0x375DF0u;
            goto label_375df0;
        }
    }
    ctx->pc = 0x375DDCu;
    // 0x375ddc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375de0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375de8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375dec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_375df0:
    // 0x375df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375df4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375df8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375dfc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e04: 0x0  nop
    ctx->pc = 0x375e04u;
    // NOP
    // 0x375e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375e0c: 0x0  nop
    ctx->pc = 0x375e0cu;
    // NOP
    // 0x375e10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375E10u;
    {
        const bool branch_taken_0x375e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375e10) {
            ctx->pc = 0x375E2Cu;
            goto label_375e2c;
        }
    }
    ctx->pc = 0x375E18u;
    // 0x375e18: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375e1c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e28: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_375e2c:
    // 0x375e2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375e34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375E34u;
    SET_GPR_U32(ctx, 31, 0x375E3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375E34u, 0x375E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E3Cu;
label_375e3c:
    // 0x375e3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e40: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x375e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375e44: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x375e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x375e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e4c: 0x0  nop
    ctx->pc = 0x375e4cu;
    // NOP
    // 0x375e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375e54: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x375e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x375e58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e5c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375e68: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x375e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x375e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e74: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375e78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e7c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375E7Cu;
    SET_GPR_U32(ctx, 31, 0x375E84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375E7Cu, 0x375E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E84u;
label_375e84:
    // 0x375e84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375e8c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x375e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e94: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375e98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375ea0: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375EA0u;
    SET_GPR_U32(ctx, 31, 0x375EA8u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375EA0u, 0x375EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EA8u;
label_375ea8:
    // 0x375ea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375eac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375EACu;
    SET_GPR_U32(ctx, 31, 0x375EB4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375EACu, 0x375EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EB4u;
label_375eb4:
    // 0x375eb4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375eb8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x375eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x375ebc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x375ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x375ec0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x375ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x375ec4: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x375EC4u;
    {
        const bool branch_taken_0x375ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x375ec4) {
            ctx->pc = 0x375F1Cu;
            goto label_375f1c;
        }
    }
    ctx->pc = 0x375ECCu;
    // 0x375ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ed4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375ed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375edc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ee0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375ee4: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x375ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x375ee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375eec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375ef0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375EF0u;
    SET_GPR_U32(ctx, 31, 0x375EF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375EF0u, 0x375EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EF8u;
label_375ef8:
    // 0x375ef8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375EF8u;
    SET_GPR_U32(ctx, 31, 0x375F00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375EF8u, 0x375F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F00u;
label_375f00:
    // 0x375f00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375f04: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x375f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x375f08: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x375f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x375f0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x375f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375f10: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375f10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375f18: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375f18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_375f1c:
    // 0x375f1c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x375f1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375f24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x375f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x375f28: 0x3e00008  jr          $ra
    ctx->pc = 0x375F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375F30u;
}
