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

// Function: e2d_id1c_type01
// Address: 0x2b2d10 - 0x2b2d9c
void e2d_id1c_type01_0x2b2d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1c_type01_0x2b2d10");
#endif

    ctx->pc = 0x2b2d10u;

    // 0x2b2d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2d14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b2d18: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b2d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d24: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b2d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b2d28: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b2d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d34: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b2d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b2d38: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b2d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d44: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b2d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b2d48: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b2d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d54: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b2d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b2d58: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2b2d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2d68: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2b2d6c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2b2d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2b2d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d78: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b2d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b2d7c: 0x3c033f93  lui         $v1, 0x3F93
    ctx->pc = 0x2b2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16275 << 16));
    // 0x2b2d80: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b2d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b2d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2d88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2d8c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b2d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b2d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D9Cu;
}
