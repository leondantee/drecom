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

// Function: e2d_id60_type00
// Address: 0x2b8c30 - 0x2b8ca4
void e2d_id60_type00_0x2b8c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id60_type00_0x2b8c30");
#endif

    ctx->pc = 0x2b8c30u;

    // 0x2b8c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8c34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8c38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c44: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8c48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c54: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8c58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c64: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8c68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c74: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8c78: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b8c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c84: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8c88: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b8c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c94: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b8c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b8c98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8CA4u;
}
