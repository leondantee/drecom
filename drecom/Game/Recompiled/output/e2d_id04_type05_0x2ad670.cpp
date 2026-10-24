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

// Function: e2d_id04_type05
// Address: 0x2ad670 - 0x2ad6d4
void e2d_id04_type05_0x2ad670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type05_0x2ad670");
#endif

    ctx->pc = 0x2ad670u;

    // 0x2ad670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad674: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ad674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ad678: 0x3c03429e  lui         $v1, 0x429E
    ctx->pc = 0x2ad678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17054 << 16));
    // 0x2ad67c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad680: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad684: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ad684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ad688: 0x3c034238  lui         $v1, 0x4238
    ctx->pc = 0x2ad688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16952 << 16));
    // 0x2ad68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad690: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad694: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ad694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ad698: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ad698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ad69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad6a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ad6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ad6a8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2ad6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2ad6ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad6acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad6b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ad6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ad6b8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ad6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ad6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad6c4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad6c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ad6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD6D4u;
}
