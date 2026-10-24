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

// Function: e2d_id28_type04
// Address: 0x2b3f20 - 0x2b4040
void e2d_id28_type04_0x2b3f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type04_0x2b3f20");
#endif

    switch (ctx->pc) {
        case 0x2b3f3cu: goto label_2b3f3c;
        case 0x2b3f44u: goto label_2b3f44;
        default: break;
    }

    ctx->pc = 0x2b3f20u;

    // 0x2b3f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3f24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3f28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b3f2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f30: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b3f34: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B3F34u;
    SET_GPR_U32(ctx, 31, 0x2B3F3Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B3F34u, 0x2B3F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F3Cu;
label_2b3f3c:
    // 0x2b3f3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B3F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B3F44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B3F3Cu, 0x2B3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F44u;
label_2b3f44:
    // 0x2b3f44: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b3f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3f4c: 0x0  nop
    ctx->pc = 0x2b3f4cu;
    // NOP
    // 0x2b3f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3f54: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b3f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3f5c: 0x0  nop
    ctx->pc = 0x2b3f5cu;
    // NOP
    // 0x2b3f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f68: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3f6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3f70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f74: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3f78: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3f80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f84: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b3f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b3f88: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b3f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3f90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f94: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b3f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b3f98: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3fa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3fa4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b3fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b3fa8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3fb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3fb4: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b3fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b3fb8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3fc4: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b3fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b3fc8: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2b3fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3fd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3fd4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b3fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b3fd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3fdc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3fe0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3fe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3fec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3ff0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3ff4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3ff8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3ffc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4008: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b400c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b4010: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4014: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4018: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b4018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b401c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4020: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b4020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b4024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b402c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b402cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4030: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4034: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4038: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4040u;
}
