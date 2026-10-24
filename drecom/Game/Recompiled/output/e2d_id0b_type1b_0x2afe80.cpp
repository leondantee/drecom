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

// Function: e2d_id0b_type1b
// Address: 0x2afe80 - 0x2afee4
void e2d_id0b_type1b_0x2afe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0b_type1b_0x2afe80");
#endif

    ctx->pc = 0x2afe80u;

    // 0x2afe80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afe84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2afe88: 0x3c03429e  lui         $v1, 0x429E
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17054 << 16));
    // 0x2afe8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afe94: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2afe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2afe98: 0x3c034238  lui         $v1, 0x4238
    ctx->pc = 0x2afe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16952 << 16));
    // 0x2afe9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afe9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afea0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afea4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2afea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2afea8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2afea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2afeac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afeb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afeb4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2afeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2afeb8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2afeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2afebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afec0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afec4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2afec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2afec8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2afec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2afecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afed4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afed8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2afed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2afedc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFEE4u;
}
