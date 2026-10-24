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

// Function: e2d_id05_type04
// Address: 0x2af2d0 - 0x2af354
void e2d_id05_type04_0x2af2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type04_0x2af2d0");
#endif

    ctx->pc = 0x2af2d0u;

    // 0x2af2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af2d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af2d8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2af2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2af2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af2e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af2e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2af2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2af2e8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2af2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2af2ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af2ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af2f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af2f4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2af2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2af2f8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2af2fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af2fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af300: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af304: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2af304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2af308: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2af308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2af30c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af310: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af314: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2af314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2af318: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af31c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af320: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af324: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af328: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2af32c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af330: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af334: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2af334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2af338: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2af338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2af33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af340: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af344: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af348: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af34c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF354u;
}
