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

// Function: e2d_id57_type01
// Address: 0x2b6dc0 - 0x2b6e24
void e2d_id57_type01_0x2b6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type01_0x2b6dc0");
#endif

    ctx->pc = 0x2b6dc0u;

    // 0x2b6dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6dc4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6dc8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b6dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6dd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6dd4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6dd8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b6ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6de0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6de4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6de8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b6dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6df0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6df4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6df8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b6dfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e04: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6e08: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b6e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e14: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6e18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6E24u;
}
