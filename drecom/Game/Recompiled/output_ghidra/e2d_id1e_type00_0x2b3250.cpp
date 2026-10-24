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

// Function: e2d_id1e_type00
// Address: 0x2b3250 - 0x2b32a4
void e2d_id1e_type00_0x2b3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1e_type00_0x2b3250");
#endif

    ctx->pc = 0x2b3250u;

    // 0x2b3250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3254: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3258: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b325c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b325cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3264: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3268: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b326c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b326cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3270: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3274: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3278: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b327c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b327cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3280: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3284: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3288: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b328c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b328cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3290: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3294: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b3298: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b329c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B329Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B32A4u;
}
