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

// Function: e2d_id04_type12
// Address: 0x2adbd0 - 0x2adce4
void e2d_id04_type12_0x2adbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type12_0x2adbd0");
#endif

    switch (ctx->pc) {
        case 0x2adc40u: goto label_2adc40;
        default: break;
    }

    ctx->pc = 0x2adbd0u;

    // 0x2adbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adbd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2adbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2adbd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2adbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2adbdc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2adbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2adbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adbe8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2adbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2adbec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2adbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2adbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adbf8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2adbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2adbfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2adbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2adc00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adc04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc08: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2adc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2adc0c: 0x3c024029  lui         $v0, 0x4029
    ctx->pc = 0x2adc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16425 << 16));
    // 0x2adc10: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2adc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2adc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adc18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc1c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2adc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2adc20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2adc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2adc24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc28: 0xa0430138  sb          $v1, 0x138($v0)
    ctx->pc = 0x2adc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 312), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adc2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2adc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adc30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc34: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2adc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adc38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ADC38u;
    SET_GPR_U32(ctx, 31, 0x2ADC40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ADC38u, 0x2ADC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC40u;
label_2adc40:
    // 0x2adc40: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2adc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2adc44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2adc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adc48: 0x0  nop
    ctx->pc = 0x2adc48u;
    // NOP
    // 0x2adc4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2adc4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2adc50: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2adc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2adc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adc58: 0x0  nop
    ctx->pc = 0x2adc58u;
    // NOP
    // 0x2adc5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2adc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adc60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2adc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2adc68: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2adc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2adc6c: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2adc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2adc70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adc74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adc78: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2adc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adc7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adc80: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adc80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adc84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adc88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adc8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adc90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adc94: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2adc98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adc9c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adca0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adca4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adcac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2adcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2adcb0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2adcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2adcb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2adcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2adcb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adcbc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2adcbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2adcc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adcc4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2adcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2adcc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adcd0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2adcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2adcd4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2adcd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adcd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2adcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADCE4u;
}
