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

// Function: e2d_id58_type09
// Address: 0x2b78e0 - 0x2b79cc
void e2d_id58_type09_0x2b78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type09_0x2b78e0");
#endif

    switch (ctx->pc) {
        case 0x2b78f8u: goto label_2b78f8;
        case 0x2b7920u: goto label_2b7920;
        case 0x2b7944u: goto label_2b7944;
        default: break;
    }

    ctx->pc = 0x2b78e0u;

    // 0x2b78e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b78e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b78e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b78e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b78ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b78f0: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B78F0u;
    SET_GPR_U32(ctx, 31, 0x2B78F8u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B78F0u, 0x2B78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78F8u;
label_2b78f8:
    // 0x2b78f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b78fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7900: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7904: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b7904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b7908: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b7908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b790c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b790cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7914: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b7918: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7918u;
    SET_GPR_U32(ctx, 31, 0x2B7920u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7918u, 0x2B7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7920u;
label_2b7920:
    // 0x2b7920: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7924: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b792c: 0x0  nop
    ctx->pc = 0x2b792cu;
    // NOP
    // 0x2b7930: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7938: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b793c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B793Cu;
    SET_GPR_U32(ctx, 31, 0x2B7944u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B793Cu, 0x2B7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7944u;
label_2b7944:
    // 0x2b7944: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7948: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b794c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b794cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7950: 0x0  nop
    ctx->pc = 0x2b7950u;
    // NOP
    // 0x2b7954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b795c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b795cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7960: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b7960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7968: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b796c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b796cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7970: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7978: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b797c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b797cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b7980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7988: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b798c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b798cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7998: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b799c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b799cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b79a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b79a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b79a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b79a8: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b79a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b79ac: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b79acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b79b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b79b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b79b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b79b8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b79b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b79bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b79bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b79c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b79c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b79c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79CCu;
}
