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

// Function: ectrl10_init00
// Address: 0x2faf10 - 0x2faf4c
void ectrl10_init00_0x2faf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl10_init00_0x2faf10");
#endif

    ctx->pc = 0x2faf10u;

    // 0x2faf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2faf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2faf14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2faf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2faf18: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2faf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2faf1c: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2faf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2faf20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2faf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2faf24: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2faf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2faf28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2faf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faf2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2faf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2faf30: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2faf30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2faf34: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2faf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2faf38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2faf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2faf3c: 0xa06400e2  sb          $a0, 0xE2($v1)
    ctx->pc = 0x2faf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 226), (uint8_t)GPR_U32(ctx, 4));
    // 0x2faf40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2faf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2faf44: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAF4Cu;
}
