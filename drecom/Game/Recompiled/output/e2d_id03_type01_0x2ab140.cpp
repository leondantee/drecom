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

// Function: e2d_id03_type01
// Address: 0x2ab140 - 0x2ab1b0
void e2d_id03_type01_0x2ab140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type01_0x2ab140");
#endif

    ctx->pc = 0x2ab140u;

    // 0x2ab140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab144: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ab144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ab148: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab154: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ab154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ab158: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab160: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab164: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ab164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ab168: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab170: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab174: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ab174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ab178: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab180: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab184: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ab184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ab188: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ab188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ab18c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab190: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ab190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab194: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ab198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab19c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab1a0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ab1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ab1a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB1B0u;
}
