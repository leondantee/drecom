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

// Function: Task_status
// Address: 0x19d490 - 0x19d4c0
void Task_status_0x19d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_status_0x19d490");
#endif

    ctx->pc = 0x19d490u;

    // 0x19d490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d494: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19d494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19d498: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d49c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19d4a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d4a4: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d4ac: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x19d4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d4b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d4b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19d4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D4C0u;
}
