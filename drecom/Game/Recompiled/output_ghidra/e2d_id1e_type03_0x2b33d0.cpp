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

// Function: e2d_id1e_type03
// Address: 0x2b33d0 - 0x2b345c
void e2d_id1e_type03_0x2b33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1e_type03_0x2b33d0");
#endif

    switch (ctx->pc) {
        case 0x2b3424u: goto label_2b3424;
        default: break;
    }

    ctx->pc = 0x2b33d0u;

    // 0x2b33d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b33d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b33d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b33d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b33dc: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x2b33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x2b33e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b33e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b33e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b33e8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b33e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b33ec: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b33f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b33f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b33f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b33f8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b33f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b33fc: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2b33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2b3400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3408: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b340c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b3410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3414: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3418: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b341c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B341Cu;
    SET_GPR_U32(ctx, 31, 0x2B3424u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B341Cu, 0x2B3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3424u;
label_2b3424:
    // 0x2b3424: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3428: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b342c: 0x0  nop
    ctx->pc = 0x2b342cu;
    // NOP
    // 0x2b3430: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3434: 0x3c03431b  lui         $v1, 0x431B
    ctx->pc = 0x2b3434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17179 << 16));
    // 0x2b3438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b343c: 0x0  nop
    ctx->pc = 0x2b343cu;
    // NOP
    // 0x2b3440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3448: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b344c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b344cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3450: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3454: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B345Cu;
}
