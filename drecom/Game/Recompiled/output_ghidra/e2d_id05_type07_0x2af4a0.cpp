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

// Function: e2d_id05_type07
// Address: 0x2af4a0 - 0x2af52c
void e2d_id05_type07_0x2af4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type07_0x2af4a0");
#endif

    switch (ctx->pc) {
        case 0x2af4f4u: goto label_2af4f4;
        default: break;
    }

    ctx->pc = 0x2af4a0u;

    // 0x2af4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af4a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af4a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af4ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af4b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af4bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af4c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af4c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af4cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af4d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af4d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af4dc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2af4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af4e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af4e8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af4ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF4ECu;
    SET_GPR_U32(ctx, 31, 0x2AF4F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF4ECu, 0x2AF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4F4u;
label_2af4f4:
    // 0x2af4f4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af4f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af4fc: 0x0  nop
    ctx->pc = 0x2af4fcu;
    // NOP
    // 0x2af500: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af504: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2af508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af50c: 0x0  nop
    ctx->pc = 0x2af50cu;
    // NOP
    // 0x2af510: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af514: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af518: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af51c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af51cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af520: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af524: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF52Cu;
}
