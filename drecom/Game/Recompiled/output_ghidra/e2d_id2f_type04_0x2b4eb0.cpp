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

// Function: e2d_id2f_type04
// Address: 0x2b4eb0 - 0x2b4ff4
void e2d_id2f_type04_0x2b4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2f_type04_0x2b4eb0");
#endif

    switch (ctx->pc) {
        case 0x2b4f00u: goto label_2b4f00;
        case 0x2b4f30u: goto label_2b4f30;
        case 0x2b4f6cu: goto label_2b4f6c;
        case 0x2b4f90u: goto label_2b4f90;
        case 0x2b4fa0u: goto label_2b4fa0;
        default: break;
    }

    ctx->pc = 0x2b4eb0u;

    // 0x2b4eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4eb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4eb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b4ebc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4ec0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ec4: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b4ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4ec8: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x2b4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
    // 0x2b4ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ed4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b4ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b4ed8: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x2b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x2b4edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ee4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b4ee8: 0x3c024301  lui         $v0, 0x4301
    ctx->pc = 0x2b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17153 << 16));
    // 0x2b4eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4ef4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b4ef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4EF8u;
    SET_GPR_U32(ctx, 31, 0x2B4F00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4EF8u, 0x2B4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F00u;
label_2b4f00:
    // 0x2b4f00: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b4f04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4f08: 0x0  nop
    ctx->pc = 0x2b4f08u;
    // NOP
    // 0x2b4f0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4f10: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2b4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2b4f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f18: 0x0  nop
    ctx->pc = 0x2b4f18u;
    // NOP
    // 0x2b4f1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4f20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4f24: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b4f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b4f28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4F28u;
    SET_GPR_U32(ctx, 31, 0x2B4F30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4F28u, 0x2B4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F30u;
label_2b4f30:
    // 0x2b4f30: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2b4f34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4f38: 0x0  nop
    ctx->pc = 0x2b4f38u;
    // NOP
    // 0x2b4f3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4f40: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2b4f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f48: 0x0  nop
    ctx->pc = 0x2b4f48u;
    // NOP
    // 0x2b4f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4f50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4f54: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b4f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b4f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4f5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4f60: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b4f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4f64: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4F64u;
    SET_GPR_U32(ctx, 31, 0x2B4F6Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4F64u, 0x2B4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F6Cu;
label_2b4f6c:
    // 0x2b4f6c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x2b4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x2b4f70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b4f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b4f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4f78: 0x0  nop
    ctx->pc = 0x2b4f78u;
    // NOP
    // 0x2b4f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4f80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4f84: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b4f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b4f88: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4F88u;
    SET_GPR_U32(ctx, 31, 0x2B4F90u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4F88u, 0x2B4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F90u;
label_2b4f90:
    // 0x2b4f90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4f94: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b4f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b4f98: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B4F98u;
    SET_GPR_U32(ctx, 31, 0x2B4FA0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B4F98u, 0x2B4FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4FA0u;
label_2b4fa0:
    // 0x2b4fa0: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b4fa4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b4fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b4fa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4fac: 0x0  nop
    ctx->pc = 0x2b4facu;
    // NOP
    // 0x2b4fb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4fb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4fb8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b4fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b4fbc: 0x3c0340ec  lui         $v1, 0x40EC
    ctx->pc = 0x2b4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16620 << 16));
    // 0x2b4fc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b4fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b4fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4fcc: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b4fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b4fd0: 0x3c034073  lui         $v1, 0x4073
    ctx->pc = 0x2b4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16499 << 16));
    // 0x2b4fd4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b4fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b4fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4fe0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b4fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b4fe4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4fe4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4fec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FF4u;
}
