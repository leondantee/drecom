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

// Function: e2d_id57_type05
// Address: 0x2b6fa0 - 0x2b7004
void e2d_id57_type05_0x2b6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type05_0x2b6fa0");
#endif

    ctx->pc = 0x2b6fa0u;

    // 0x2b6fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6fa4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6fa8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6fb4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6fb8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6fc4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6fc8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b6fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6fd4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6fd8: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
    // 0x2b6fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fe0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6fe4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6fe8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b6fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ff0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ff4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6ff8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7004u;
}
