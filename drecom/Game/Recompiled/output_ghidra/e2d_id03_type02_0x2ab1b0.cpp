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

// Function: e2d_id03_type02
// Address: 0x2ab1b0 - 0x2ab220
void e2d_id03_type02_0x2ab1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type02_0x2ab1b0");
#endif

    ctx->pc = 0x2ab1b0u;

    // 0x2ab1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab1b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ab1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ab1b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ab1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab1bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1c0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ab1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ab1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1cc: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ab1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ab1d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ab1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1d8: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ab1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ab1dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ab1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ab1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ab1e8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2ab1ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab1ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ab1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ab1f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ab1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ab1fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab200: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ab200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab204: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2ab208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab20c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab210: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ab210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ab214: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab218: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB220u;
}
