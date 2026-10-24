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

// Function: ectrl0b_init00
// Address: 0x2f7dc0 - 0x2f7e00
void ectrl0b_init00_0x2f7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0b_init00_0x2f7dc0");
#endif

    ctx->pc = 0x2f7dc0u;

    // 0x2f7dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7dc4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2f7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f7dc8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f7dcc: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2f7dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f7dd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7dd4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2f7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2f7dd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f7ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7de0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2f7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2f7de4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7de8: 0xa0600100  sb          $zero, 0x100($v1)
    ctx->pc = 0x2f7de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7dec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f7decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7df0: 0xa0600101  sb          $zero, 0x101($v1)
    ctx->pc = 0x2f7df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7df4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f7df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f7df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7E00u;
}
