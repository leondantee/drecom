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

// Function: e2d_id5f_type00
// Address: 0x2b8a00 - 0x2b8a54
void e2d_id5f_type00_0x2b8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5f_type00_0x2b8a00");
#endif

    ctx->pc = 0x2b8a00u;

    // 0x2b8a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8a04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8a08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a14: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8a18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a24: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8a28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a34: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8a38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a44: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8a48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A54u;
}
