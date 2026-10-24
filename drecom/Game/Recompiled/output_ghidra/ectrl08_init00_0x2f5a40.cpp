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

// Function: ectrl08_init00
// Address: 0x2f5a40 - 0x2f5a70
void ectrl08_init00_0x2f5a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl08_init00_0x2f5a40");
#endif

    ctx->pc = 0x2f5a40u;

    // 0x2f5a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5a44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2f5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f5a48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5a4c: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2f5a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5a50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5a54: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2f5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2f5a58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5a5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5a60: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2f5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2f5a64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f5a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5A70u;
}
