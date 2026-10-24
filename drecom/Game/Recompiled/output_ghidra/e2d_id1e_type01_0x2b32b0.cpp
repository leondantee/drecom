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

// Function: e2d_id1e_type01
// Address: 0x2b32b0 - 0x2b333c
void e2d_id1e_type01_0x2b32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1e_type01_0x2b32b0");
#endif

    switch (ctx->pc) {
        case 0x2b3304u: goto label_2b3304;
        default: break;
    }

    ctx->pc = 0x2b32b0u;

    // 0x2b32b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b32b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b32b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b32b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b32bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b32c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b32c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b32c8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b32c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b32cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b32d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b32d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b32d8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b32d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b32dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b32e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b32e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b32e8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b32e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b32ec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b32f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b32f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b32f8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b32f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b32fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B32FCu;
    SET_GPR_U32(ctx, 31, 0x2B3304u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B32FCu, 0x2B3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3304u;
label_2b3304:
    // 0x2b3304: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3308: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b330c: 0x0  nop
    ctx->pc = 0x2b330cu;
    // NOP
    // 0x2b3310: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3314: 0x3c03431b  lui         $v1, 0x431B
    ctx->pc = 0x2b3314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17179 << 16));
    // 0x2b3318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b331c: 0x0  nop
    ctx->pc = 0x2b331cu;
    // NOP
    // 0x2b3320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3328: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b332c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b332cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3334: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B333Cu;
}
