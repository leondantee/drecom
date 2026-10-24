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

// Function: e2d_id17_type11
// Address: 0x2b1e60 - 0x2b1ee4
void e2d_id17_type11_0x2b1e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type11_0x2b1e60");
#endif

    ctx->pc = 0x2b1e60u;

    // 0x2b1e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1e64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1e68: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2b1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2b1e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e74: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1e78: 0x3c034278  lui         $v1, 0x4278
    ctx->pc = 0x2b1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17016 << 16));
    // 0x2b1e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e84: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1e88: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b1e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e94: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1e98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1ea0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ea4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1ea8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b1eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1eb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1eb4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1eb8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b1ebc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ec0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1ec4: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2b1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2b1ec8: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2b1ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2b1ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1ed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ed4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b1ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b1ed8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1EE4u;
}
