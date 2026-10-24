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

// Function: e2d_id05_type0f
// Address: 0x2afa80 - 0x2afae0
void e2d_id05_type0f_0x2afa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0f_0x2afa80");
#endif

    ctx->pc = 0x2afa80u;

    // 0x2afa80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afa84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2afa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2afa88: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2afa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2afa8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afa8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa94: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afa98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2afa9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afaa0: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2afaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afaa4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2afaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2afaa8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afaac: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2afaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afab0: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2afab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2afab4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2afab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2afab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afabc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afac0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2afac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2afac4: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2afac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2afac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afacc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afad0: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2afad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2afad4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2afad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2afad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFAE0u;
}
