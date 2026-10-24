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

// Function: e2d_id04_type26
// Address: 0x2ae1f0 - 0x2ae260
void e2d_id04_type26_0x2ae1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type26_0x2ae1f0");
#endif

    ctx->pc = 0x2ae1f0u;

    // 0x2ae1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae1f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ae1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ae1f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae1fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae200: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ae200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae208: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae20c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ae20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ae210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae214: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae218: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ae218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ae21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae220: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae224: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ae224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ae228: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ae228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ae22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae230: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae234: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ae234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ae238: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ae238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ae23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae244: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae248: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae24c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae250: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ae250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae254: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ae254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae258: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE260u;
}
