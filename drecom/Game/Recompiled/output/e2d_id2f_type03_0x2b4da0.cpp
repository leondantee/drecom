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

// Function: e2d_id2f_type03
// Address: 0x2b4da0 - 0x2b4ea8
void e2d_id2f_type03_0x2b4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2f_type03_0x2b4da0");
#endif

    switch (ctx->pc) {
        case 0x2b4e00u: goto label_2b4e00;
        case 0x2b4e3cu: goto label_2b4e3c;
        case 0x2b4e60u: goto label_2b4e60;
        default: break;
    }

    ctx->pc = 0x2b4da0u;

    // 0x2b4da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4da4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4da8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b4dac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4db0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4db4: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b4db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4db8: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x2b4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
    // 0x2b4dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4dc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4dc4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b4dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b4dc8: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x2b4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x2b4dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4dd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4dd4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b4dd8: 0x3c024301  lui         $v0, 0x4301
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17153 << 16));
    // 0x2b4ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4de0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4de4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b4de8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4df4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b4df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b4df8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4DF8u;
    SET_GPR_U32(ctx, 31, 0x2B4E00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4DF8u, 0x2B4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E00u;
label_2b4e00:
    // 0x2b4e00: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b4e04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4e08: 0x0  nop
    ctx->pc = 0x2b4e08u;
    // NOP
    // 0x2b4e0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4e10: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2b4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2b4e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4e18: 0x0  nop
    ctx->pc = 0x2b4e18u;
    // NOP
    // 0x2b4e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4e20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e24: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b4e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b4e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4e2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e30: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4e34: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4E34u;
    SET_GPR_U32(ctx, 31, 0x2B4E3Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4E34u, 0x2B4E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E3Cu;
label_2b4e3c:
    // 0x2b4e3c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x2b4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x2b4e40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b4e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b4e44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4e48: 0x0  nop
    ctx->pc = 0x2b4e48u;
    // NOP
    // 0x2b4e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4e50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e54: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b4e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b4e58: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4E58u;
    SET_GPR_U32(ctx, 31, 0x2B4E60u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4E58u, 0x2B4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E60u;
label_2b4e60:
    // 0x2b4e60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e64: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b4e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b4e68: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2b4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2b4e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4e70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e74: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b4e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b4e78: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2b4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2b4e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4e80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e84: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b4e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b4e88: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2b4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2b4e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4e90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4e94: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b4e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b4e98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4e9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4EA8u;
}
