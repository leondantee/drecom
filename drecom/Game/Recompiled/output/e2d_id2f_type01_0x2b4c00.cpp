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

// Function: e2d_id2f_type01
// Address: 0x2b4c00 - 0x2b4d08
void e2d_id2f_type01_0x2b4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2f_type01_0x2b4c00");
#endif

    switch (ctx->pc) {
        case 0x2b4c68u: goto label_2b4c68;
        default: break;
    }

    ctx->pc = 0x2b4c00u;

    // 0x2b4c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4c04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4c08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b4c0c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x2b4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x2b4c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c18: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b4c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b4c1c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b4c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c28: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b4c2c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b4c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c38: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b4c3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c48: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b4c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b4c4c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b4c50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b4c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b4c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c5c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b4c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b4c60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4C60u;
    SET_GPR_U32(ctx, 31, 0x2B4C68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4C60u, 0x2B4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C68u;
label_2b4c68:
    // 0x2b4c68: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b4c6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4c70: 0x0  nop
    ctx->pc = 0x2b4c70u;
    // NOP
    // 0x2b4c74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4c78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b4c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b4c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c80: 0x0  nop
    ctx->pc = 0x2b4c80u;
    // NOP
    // 0x2b4c84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4c88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c8c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4c90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b4c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4c98: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b4c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4c9c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b4ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ca4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ca8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b4ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b4cac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b4cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4cb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4cb8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b4cbc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b4cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4cc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4cc8: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b4cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b4ccc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b4cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4cd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4cd8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b4cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b4cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ce4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4ce8: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2b4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2b4cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4cf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4cf4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b4cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b4cf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4cf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4cfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D08u;
}
