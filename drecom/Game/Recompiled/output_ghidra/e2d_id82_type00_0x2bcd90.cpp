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

// Function: e2d_id82_type00
// Address: 0x2bcd90 - 0x2bcebc
void e2d_id82_type00_0x2bcd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id82_type00_0x2bcd90");
#endif

    switch (ctx->pc) {
        case 0x2bcdb0u: goto label_2bcdb0;
        default: break;
    }

    ctx->pc = 0x2bcd90u;

    // 0x2bcd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcd94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bcd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bcd98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bcd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bcd9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2bcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bcda0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcda4: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2bcda4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bcda8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BCDA8u;
    SET_GPR_U32(ctx, 31, 0x2BCDB0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BCDA8u, 0x2BCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDB0u;
label_2bcdb0:
    // 0x2bcdb0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2bcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2bcdb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bcdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcdb8: 0x0  nop
    ctx->pc = 0x2bcdb8u;
    // NOP
    // 0x2bcdbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bcdbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcdc0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2bcdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2bcdc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcdc8: 0x0  nop
    ctx->pc = 0x2bcdc8u;
    // NOP
    // 0x2bcdcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcdd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcdd4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bcdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bcdd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcdd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcde0: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2bcde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2bcde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcde8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcdec: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bcdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bcdf0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2bcdf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcdf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcdf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcdfc: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bcdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bce00: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x2bce00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x2bce04: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bce04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bce08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bce08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bce10: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bce14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bce14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bce18: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bce18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bce1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bce1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bce20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bce20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bce24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bce28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bce28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bce2c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bce30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bce34: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bce34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bce38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bce38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bce3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bce40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bce44: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bce48: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bce4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bce50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bce54: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bce54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bce58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bce58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bce5c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2bce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bce60: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2bce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2bce64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bce68: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bce68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bce6c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bce70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bce70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bce78: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2bce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2bce7c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bce80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bce80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bce88: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2bce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2bce8c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bce90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bce90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bce98: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2bce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2bce9c: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2bce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2bcea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcea8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bcea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bceac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bceacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bceb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCEBCu;
}
