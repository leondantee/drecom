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

// Function: e2d_id0b_type05
// Address: 0x2afe10 - 0x2afe74
void e2d_id0b_type05_0x2afe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0b_type05_0x2afe10");
#endif

    ctx->pc = 0x2afe10u;

    // 0x2afe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afe14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2afe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2afe18: 0x3c03429e  lui         $v1, 0x429E
    ctx->pc = 0x2afe18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17054 << 16));
    // 0x2afe1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe24: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2afe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2afe28: 0x3c034238  lui         $v1, 0x4238
    ctx->pc = 0x2afe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16952 << 16));
    // 0x2afe2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe34: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2afe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2afe38: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2afe38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2afe3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe44: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2afe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2afe48: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2afe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2afe4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe54: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2afe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2afe58: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2afe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2afe5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afe68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2afe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2afe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFE74u;
}
