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

// Function: e2d_id00_type18
// Address: 0x2aa6c0 - 0x2aa730
void e2d_id00_type18_0x2aa6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type18_0x2aa6c0");
#endif

    ctx->pc = 0x2aa6c0u;

    // 0x2aa6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa6c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aa6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2aa6c8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2aa6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2aa6cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa6d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa6d8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2aa6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2aa6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa6e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2aa6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2aa6e8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2aa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2aa6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa6f4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2aa6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2aa6f8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2aa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2aa6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa700: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa704: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2aa704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2aa708: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aa708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa710: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa714: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2aa714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2aa718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aa718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa71c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa720: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2aa720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa724: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aa724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa728: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA730u;
}
