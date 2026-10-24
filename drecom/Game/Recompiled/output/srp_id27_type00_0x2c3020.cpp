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

// Function: srp_id27_type00
// Address: 0x2c3020 - 0x2c3160
void srp_id27_type00_0x2c3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id27_type00_0x2c3020");
#endif

    switch (ctx->pc) {
        case 0x2c3118u: goto label_2c3118;
        default: break;
    }

    ctx->pc = 0x2c3020u;

    // 0x2c3020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3024: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c3024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c3028: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c3028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c302c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3034: 0xa043034e  sb          $v1, 0x34E($v0)
    ctx->pc = 0x2c3034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 846), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c3038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c303c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3040: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x2c3040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2c3044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c3044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c304c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3050: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2c3050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2c3054: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c3058: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c305c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c305cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3060: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c3064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3068: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c3068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c306c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3070: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3074: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c3074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3078: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x2c3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2c307c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3080: 0xac430334  sw          $v1, 0x334($v0)
    ctx->pc = 0x2c3080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 820), GPR_U32(ctx, 3));
    // 0x2c3084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3088: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c308c: 0xa043036b  sb          $v1, 0x36B($v0)
    ctx->pc = 0x2c308cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 875), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3098: 0xa043036c  sb          $v1, 0x36C($v0)
    ctx->pc = 0x2c3098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 876), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c309c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c30a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c30a4: 0xa043034c  sb          $v1, 0x34C($v0)
    ctx->pc = 0x2c30a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 844), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c30a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c30ac: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c30acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c30b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c30b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c30b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c30b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c30bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c30bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c30c0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c30c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c30c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c30c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c30cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c30ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c30d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c30d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c30d8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c30d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c30dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c30e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c30e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c30e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c30e8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c30e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c30ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c30ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c30f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c30f4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c30f4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c30f8: 0x0  nop
    ctx->pc = 0x2c30f8u;
    // NOP
    // 0x2c30fc: 0x0  nop
    ctx->pc = 0x2c30fcu;
    // NOP
    // 0x2c3100: 0x1010  mfhi        $v0
    ctx->pc = 0x2c3100u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c3104: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3108: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c310c: 0xa043036a  sb          $v1, 0x36A($v0)
    ctx->pc = 0x2c310cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3110: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C3110u;
    SET_GPR_U32(ctx, 31, 0x2C3118u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C3110u, 0x2C3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3118u;
label_2c3118:
    // 0x2c3118: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2c3118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2c311c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c311cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3120: 0x0  nop
    ctx->pc = 0x2c3120u;
    // NOP
    // 0x2c3124: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3128: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c3128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c312c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c312cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3130: 0x0  nop
    ctx->pc = 0x2c3130u;
    // NOP
    // 0x2c3134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c3134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3138: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c313c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c313cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c3140: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2c3140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2c3144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c314c: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c3150: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c3150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3154: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c3154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3158: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3160u;
}
