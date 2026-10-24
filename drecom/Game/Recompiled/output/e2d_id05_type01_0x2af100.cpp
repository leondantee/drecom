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

// Function: e2d_id05_type01
// Address: 0x2af100 - 0x2af18c
void e2d_id05_type01_0x2af100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type01_0x2af100");
#endif

    ctx->pc = 0x2af100u;

    // 0x2af100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af104: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af108: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af110: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af114: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2af114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2af118: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af120: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af124: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2af124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2af128: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af130: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af134: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2af134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2af138: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af140: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af144: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2af144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2af148: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af154: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2af154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2af158: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af160: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af164: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af168: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af16c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af170: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af174: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af178: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af17c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af180: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af184: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF18Cu;
}
