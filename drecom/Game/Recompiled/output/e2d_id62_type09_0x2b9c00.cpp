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

// Function: e2d_id62_type09
// Address: 0x2b9c00 - 0x2b9d18
void e2d_id62_type09_0x2b9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type09_0x2b9c00");
#endif

    switch (ctx->pc) {
        case 0x2b9c54u: goto label_2b9c54;
        default: break;
    }

    ctx->pc = 0x2b9c00u;

    // 0x2b9c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9c04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9c08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b9c0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c18: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b9c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b9c1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c28: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b9c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b9c2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c38: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b9c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b9c3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c48: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b9c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b9c4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B9C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9C54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B9C4Cu, 0x2B9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C54u;
label_2b9c54:
    // 0x2b9c54: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b9c58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b9c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9c5c: 0x0  nop
    ctx->pc = 0x2b9c5cu;
    // NOP
    // 0x2b9c60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9c64: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x2b9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x2b9c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c6c: 0x0  nop
    ctx->pc = 0x2b9c6cu;
    // NOP
    // 0x2b9c70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9c74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c78: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9c7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b9c80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c84: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9c88: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2b9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2b9c8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9c98: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9c9c: 0x3c033f45  lui         $v1, 0x3F45
    ctx->pc = 0x2b9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16197 << 16));
    // 0x2b9ca0: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x2b9ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x2b9ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9cac: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9cb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b9cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9cb4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b9cb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b9cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b9cbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b9cc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9cc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b9cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9cc8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b9cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b9ccc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b9cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9cd0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b9cd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b9cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b9cd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b9cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9ce0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b9ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b9ce4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b9ce8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b9cec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b9cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9cf0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b9cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b9cf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9cf8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b9cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b9cfc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b9cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9d00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9d04: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b9d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9d08: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9d08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9d0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9D18u;
}
