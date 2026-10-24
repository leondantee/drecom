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

// Function: entry_00328480
// Address: 0x328480 - 0x3284b0
void entry_00328480_0x328480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328480_0x328480");
#endif

    ctx->pc = 0x328480u;

    // 0x328480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x328480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328484: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x328488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32848c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328490: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328494: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x328494u;
    {
        const bool branch_taken_0x328494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328494) {
            ctx->pc = 0x3283C8u;
            return;
        }
    }
    ctx->pc = 0x32849Cu;
    // 0x32849c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x32849cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3284a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3284a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3284a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3284a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3284a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3284A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3284B0u;
}
