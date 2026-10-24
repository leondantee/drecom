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

// Function: e2d_id05_type05
// Address: 0x2af360 - 0x2af410
void e2d_id05_type05_0x2af360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type05_0x2af360");
#endif

    switch (ctx->pc) {
        case 0x2af3b4u: goto label_2af3b4;
        default: break;
    }

    ctx->pc = 0x2af360u;

    // 0x2af360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af364: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af368: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af36c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af378: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af37c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af384: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af388: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af38c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af398: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af39c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2af39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2af3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af3a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af3a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af3ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF3ACu;
    SET_GPR_U32(ctx, 31, 0x2AF3B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF3ACu, 0x2AF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3B4u;
label_2af3b4:
    // 0x2af3b4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2af3b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af3bc: 0x0  nop
    ctx->pc = 0x2af3bcu;
    // NOP
    // 0x2af3c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af3c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af3c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af3cc: 0x0  nop
    ctx->pc = 0x2af3ccu;
    // NOP
    // 0x2af3d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af3d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af3d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af3dc: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2af3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2af3e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af3e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af3e8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2af3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2af3ec: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2af3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2af3f0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2af3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af3f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af3fc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af400: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af404: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af408: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF410u;
}
