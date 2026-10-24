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

// Function: e2d_id2c_type26
// Address: 0x2b45d0 - 0x2b4634
void e2d_id2c_type26_0x2b45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2c_type26_0x2b45d0");
#endif

    ctx->pc = 0x2b45d0u;

    // 0x2b45d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b45d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b45d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b45d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b45dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b45dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b45e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b45e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b45e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b45e8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b45ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b45ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b45f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b45f4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b45f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b45f8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b45fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b45fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4600: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4604: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4608: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b4608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b460c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b460cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4610: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4614: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4618: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b4618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b461c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b461cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4620: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4624: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b462c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4634u;
}
