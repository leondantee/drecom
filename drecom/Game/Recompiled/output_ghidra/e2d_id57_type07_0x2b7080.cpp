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

// Function: e2d_id57_type07
// Address: 0x2b7080 - 0x2b70e4
void e2d_id57_type07_0x2b7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type07_0x2b7080");
#endif

    ctx->pc = 0x2b7080u;

    // 0x2b7080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7084: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b7084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b7088: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b7088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b708c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b708cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7090: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7094: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7098: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b709c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b709cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b70a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b70a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b70a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b70a8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b70ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b70acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b70b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b70b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b70b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b70b8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b70bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b70bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b70c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b70c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b70c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b70cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b70ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b70d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b70d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b70d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b70d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b70d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b70dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B70DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B70DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B70E4u;
}
