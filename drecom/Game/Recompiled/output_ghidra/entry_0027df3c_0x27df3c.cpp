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

// Function: entry_0027df3c
// Address: 0x27df3c - 0x27e084
void entry_0027df3c_0x27df3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027df3c_0x27df3c");
#endif

    switch (ctx->pc) {
        case 0x27df48u: goto label_27df48;
        case 0x27e054u: goto label_27e054;
        case 0x27e070u: goto label_27e070;
        default: break;
    }

    ctx->pc = 0x27df3cu;

    // 0x27df3c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x27df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27df40: 0xc09f824  jal         func_27E090
    ctx->pc = 0x27DF40u;
    SET_GPR_U32(ctx, 31, 0x27DF48u);
    ctx->pc = 0x27E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E090u, 0x27DF40u, 0x27DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF48u;
label_27df48:
    // 0x27df48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27df48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df4c: 0x0  nop
    ctx->pc = 0x27df4cu;
    // NOP
    // 0x27df50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27df54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x27df58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df5c: 0x0  nop
    ctx->pc = 0x27df5cu;
    // NOP
    // 0x27df60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27df60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27df64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27df64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df68: 0x0  nop
    ctx->pc = 0x27df68u;
    // NOP
    // 0x27df6c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27df70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27df74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df78: 0x0  nop
    ctx->pc = 0x27df78u;
    // NOP
    // 0x27df7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27df7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27df80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df84: 0x8c30f9fc  lw          $s0, -0x604($at)
    ctx->pc = 0x27df84u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9FCu));
    // 0x27df88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df8c: 0x90221b4b  lbu         $v0, 0x1B4B($at)
    ctx->pc = 0x27df8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Bu));
    // 0x27df90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27df94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27df98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x27df9c: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x27df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x27dfa0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dfa4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x27dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27dfa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27dfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27dfac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27dfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfb4: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x27dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
    // 0x27dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dfbc: 0x0  nop
    ctx->pc = 0x27dfbcu;
    // NOP
    // 0x27dfc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27dfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27dfc4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27dfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27dfc8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dfcc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dfd0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dfd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dfd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dfdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dfe0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27dfe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dfe8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dfec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dff0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dff8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27dffc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27e000: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e004: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27e008: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27e008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27e00c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27e014: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x27e018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e01c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e020: 0x90221b4b  lbu         $v0, 0x1B4B($at)
    ctx->pc = 0x27e020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Bu));
    // 0x27e024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e02c: 0xa0221b4b  sb          $v0, 0x1B4B($at)
    ctx->pc = 0x27e02cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Bu, _value); } while (0);
    // 0x27e030: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27e030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27e034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e038: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e03c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e03cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e040: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e044: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e048: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27e048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e04c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x27E04Cu;
    SET_GPR_U32(ctx, 31, 0x27E054u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x27E04Cu, 0x27E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E054u;
label_27e054:
    // 0x27e054: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e058: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e05c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27e05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e060: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x27e064: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e068: 0xc05db20  jal         func_176C80
    ctx->pc = 0x27E068u;
    SET_GPR_U32(ctx, 31, 0x27E070u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x27E068u, 0x27E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E084u;
}
