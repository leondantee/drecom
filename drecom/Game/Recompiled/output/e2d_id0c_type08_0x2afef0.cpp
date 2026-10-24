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

// Function: e2d_id0c_type08
// Address: 0x2afef0 - 0x2affa0
void e2d_id0c_type08_0x2afef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0c_type08_0x2afef0");
#endif

    ctx->pc = 0x2afef0u;

    // 0x2afef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afef4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2afef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2afef8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2afef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2afefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2aff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2aff08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aff0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff14: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2aff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2aff18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aff1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff24: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2aff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2aff28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aff2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff34: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2aff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2aff38: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2aff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2aff3c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2aff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2aff40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff48: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2aff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2aff4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2aff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2aff50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff58: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aff58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aff5c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2aff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2aff60: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aff64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff6c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aff70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2aff70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2aff74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff7c: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2aff7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2aff80: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2aff80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2aff84: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aff84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aff88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aff88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff90: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2aff90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2aff94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aff94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aff98: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFFA0u;
}
