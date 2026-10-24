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

// Function: e2d_id05_type0e
// Address: 0x2afa20 - 0x2afa80
void e2d_id05_type0e_0x2afa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0e_0x2afa20");
#endif

    ctx->pc = 0x2afa20u;

    // 0x2afa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afa24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2afa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2afa28: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2afa2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afa2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa34: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afa38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2afa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2afa3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa40: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2afa40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afa44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2afa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2afa48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa4c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2afa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afa50: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2afa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2afa54: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2afa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2afa58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afa58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa60: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2afa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2afa64: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2afa68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afa68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa70: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2afa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2afa74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2afa74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2afa78: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA80u;
}
