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

// Function: e2d_id19_type01
// Address: 0x2b2bb0 - 0x2b2d04
void e2d_id19_type01_0x2b2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id19_type01_0x2b2bb0");
#endif

    switch (ctx->pc) {
        case 0x2b2bccu: goto label_2b2bcc;
        case 0x2b2be0u: goto label_2b2be0;
        default: break;
    }

    ctx->pc = 0x2b2bb0u;

    // 0x2b2bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2bb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2bb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b2bbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2bc0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b2bc4: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B2BC4u;
    SET_GPR_U32(ctx, 31, 0x2B2BCCu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B2BC4u, 0x2B2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BCCu;
label_2b2bcc:
    // 0x2b2bcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2bd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2bd4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b2bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2bd8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2BD8u;
    SET_GPR_U32(ctx, 31, 0x2B2BE0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2BD8u, 0x2B2BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BE0u;
label_2b2be0:
    // 0x2b2be0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b2be4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2be8: 0x0  nop
    ctx->pc = 0x2b2be8u;
    // NOP
    // 0x2b2bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2bf0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b2bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2bf8: 0x0  nop
    ctx->pc = 0x2b2bf8u;
    // NOP
    // 0x2b2bfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2c00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2c08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2c0c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2c10: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2c14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2c18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2c1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2c20: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2c24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2c28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2c2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2c30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2c34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2c38: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2c3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b2c40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2c44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2c48: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2c4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2c50: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b2c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b2c54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b2c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2c58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c5c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b2c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2c60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c68: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b2c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2c6c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2b2c70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b2c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b2c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2c78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c7c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2b2c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2b2c80: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b2c84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c88: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b2c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2c94: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2c9c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2ca0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2ca4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2cac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2cb0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2cb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2cb8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2cbc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2cc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2cc8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2ccc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b2cd0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2cd4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2cd8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2cdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2ce0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b2ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b2ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b2ce8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b2ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2cec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2cf0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2cf4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2cf4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2cf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D04u;
}
