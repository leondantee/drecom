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

// Function: e2d_id63_com_change00
// Address: 0x2b9d20 - 0x2b9d6c
void e2d_id63_com_change00_0x2b9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_com_change00_0x2b9d20");
#endif

    ctx->pc = 0x2b9d20u;

    // 0x2b9d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9d24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9d28: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b9d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9d30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9d34: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9d38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b9d3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9d40: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9d44: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x2b9d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9d4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9d50: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9d5c: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b9d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9d60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9D6Cu;
}
