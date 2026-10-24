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

// Function: e2d_id17_type0f
// Address: 0x2b1d00 - 0x2b1da4
void e2d_id17_type0f_0x2b1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0f_0x2b1d00");
#endif

    ctx->pc = 0x2b1d00u;

    // 0x2b1d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1d04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1d08: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2b1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2b1d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d14: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1d18: 0x3c034278  lui         $v1, 0x4278
    ctx->pc = 0x2b1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17016 << 16));
    // 0x2b1d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d24: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1d28: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b1d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d34: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1d38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d44: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1d48: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x2b1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x2b1d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d54: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1d58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2b1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b1d5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d60: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1d64: 0x3c03bcf5  lui         $v1, 0xBCF5
    ctx->pc = 0x2b1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48373 << 16));
    // 0x2b1d68: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b1d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b1d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d74: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b1d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1d78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1d7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d80: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b1d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1d84: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1d88: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1d90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1d94: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b1d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b1d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1DA4u;
}
