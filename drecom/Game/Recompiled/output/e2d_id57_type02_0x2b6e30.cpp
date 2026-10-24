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

// Function: e2d_id57_type02
// Address: 0x2b6e30 - 0x2b6e94
void e2d_id57_type02_0x2b6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type02_0x2b6e30");
#endif

    ctx->pc = 0x2b6e30u;

    // 0x2b6e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6e34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6e38: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e44: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6e48: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e54: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6e58: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b6e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e64: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6e68: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b6e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e74: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6e78: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b6e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6e84: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6e88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6E94u;
}
