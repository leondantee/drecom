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

// Function: e2d_id6d_type00
// Address: 0x2bb310 - 0x2bb350
void e2d_id6d_type00_0x2bb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6d_type00_0x2bb310");
#endif

    ctx->pc = 0x2bb310u;

    // 0x2bb310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb314: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bb314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bb318: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bb318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bb31c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb320: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb324: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bb324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bb328: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bb328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bb32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb330: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb334: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2bb334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2bb338: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2bb338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2bb33c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb340: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bb340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bb344: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb348: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB350u;
}
