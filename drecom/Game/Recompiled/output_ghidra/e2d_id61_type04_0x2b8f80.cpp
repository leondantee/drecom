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

// Function: e2d_id61_type04
// Address: 0x2b8f80 - 0x2b9098
void e2d_id61_type04_0x2b8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type04_0x2b8f80");
#endif

    switch (ctx->pc) {
        case 0x2b8fd4u: goto label_2b8fd4;
        default: break;
    }

    ctx->pc = 0x2b8f80u;

    // 0x2b8f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8f84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b8f88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b8f8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8f98: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b8f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b8f9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8fa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8fa8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b8fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b8fac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8fb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8fb8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b8fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b8fbc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8fc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8fc8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b8fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b8fcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B8FCCu;
    SET_GPR_U32(ctx, 31, 0x2B8FD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B8FCCu, 0x2B8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FD4u;
label_2b8fd4:
    // 0x2b8fd4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8fd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8fdc: 0x0  nop
    ctx->pc = 0x2b8fdcu;
    // NOP
    // 0x2b8fe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8fe4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b8fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8fec: 0x0  nop
    ctx->pc = 0x2b8fecu;
    // NOP
    // 0x2b8ff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8ff4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8ff8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8ffc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b9000: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9004: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9008: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2b900c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9014: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9018: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b901c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2b901cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2b9020: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b9020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b9024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b902c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9030: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9034: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b9034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b9038: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b9038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b903c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b903cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b9040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9044: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9048: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b9048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b904c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9050: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b9050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b9054: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b9054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b9058: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b905c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9060: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b9060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b9064: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b9068: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b906c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9070: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b9070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b9074: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b9074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9078: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b9078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b907c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b907cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9080: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9084: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b9084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9088: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9088u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b908c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b908cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9090: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9098u;
}
