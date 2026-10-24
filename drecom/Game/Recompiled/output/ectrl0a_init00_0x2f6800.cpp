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

// Function: ectrl0a_init00
// Address: 0x2f6800 - 0x2f6840
void ectrl0a_init00_0x2f6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0a_init00_0x2f6800");
#endif

    ctx->pc = 0x2f6800u;

    // 0x2f6800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6804: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2f6804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f6808: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f6808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f680c: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2f680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f6810: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f6810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6814: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2f6814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2f6818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f681c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6820: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2f6820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2f6824: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f6824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6828: 0xa0600100  sb          $zero, 0x100($v1)
    ctx->pc = 0x2f6828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f682c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6830: 0xa0600101  sb          $zero, 0x101($v1)
    ctx->pc = 0x2f6830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6834: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f6834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6838: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6840u;
}
