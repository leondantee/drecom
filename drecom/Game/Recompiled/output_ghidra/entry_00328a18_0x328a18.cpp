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

// Function: entry_00328a18
// Address: 0x328a18 - 0x328a48
void entry_00328a18_0x328a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328a18_0x328a18");
#endif

    ctx->pc = 0x328a18u;

    // 0x328a18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328a1c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328a20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328a24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328a28: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328a2c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x328A2Cu;
    {
        const bool branch_taken_0x328a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328a2c) {
            ctx->pc = 0x3289B4u;
            return;
        }
    }
    ctx->pc = 0x328A34u;
    // 0x328a34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x328a34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328a3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x328a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x328a40: 0x3e00008  jr          $ra
    ctx->pc = 0x328A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328A48u;
}
