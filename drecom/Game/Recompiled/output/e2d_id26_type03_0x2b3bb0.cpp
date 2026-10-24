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

// Function: e2d_id26_type03
// Address: 0x2b3bb0 - 0x2b3c20
void e2d_id26_type03_0x2b3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id26_type03_0x2b3bb0");
#endif

    ctx->pc = 0x2b3bb0u;

    // 0x2b3bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3bb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3bb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3bc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3bc4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3bc8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3bd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3bd4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3bd8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3be0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3be4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3be8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3bf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3bf4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b3bf8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b3bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3c00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3c04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3c08: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b3c0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3c10: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b3c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3c14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b3c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C20u;
}
