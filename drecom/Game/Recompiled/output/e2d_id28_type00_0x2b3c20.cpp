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

// Function: e2d_id28_type00
// Address: 0x2b3c20 - 0x2b3d40
void e2d_id28_type00_0x2b3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type00_0x2b3c20");
#endif

    switch (ctx->pc) {
        case 0x2b3c3cu: goto label_2b3c3c;
        case 0x2b3c44u: goto label_2b3c44;
        default: break;
    }

    ctx->pc = 0x2b3c20u;

    // 0x2b3c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3c24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3c28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b3c2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c30: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b3c34: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B3C34u;
    SET_GPR_U32(ctx, 31, 0x2B3C3Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B3C34u, 0x2B3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C3Cu;
label_2b3c3c:
    // 0x2b3c3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B3C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B3C3Cu, 0x2B3C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C44u;
label_2b3c44:
    // 0x2b3c44: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b3c48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3c4c: 0x0  nop
    ctx->pc = 0x2b3c4cu;
    // NOP
    // 0x2b3c50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3c54: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b3c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3c5c: 0x0  nop
    ctx->pc = 0x2b3c5cu;
    // NOP
    // 0x2b3c60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c68: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3c70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c74: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b3c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3c78: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3c80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c84: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b3c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b3c88: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2b3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2b3c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3c94: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b3c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b3c98: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ca0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3ca4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b3ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b3ca8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3cb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3cb4: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b3cb8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b3cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3cc4: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b3cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b3cc8: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2b3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2b3ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3cd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3cd4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b3cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b3cd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3cdc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3ce0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3ce4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3ce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3cec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3cf0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3cf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3cf8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3cfc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3d00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3d08: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b3d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3d0c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3d10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3d14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3d18: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b3d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b3d1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3d20: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3d24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3d28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3d2c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b3d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3d30: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3d30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3d34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D40u;
}
