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

// Function: entry_003282d8
// Address: 0x3282d8 - 0x328308
void entry_003282d8_0x3282d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003282d8_0x3282d8");
#endif

    ctx->pc = 0x3282d8u;

    // 0x3282d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3282d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3282dc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3282dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3282e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3282e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3282e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3282e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3282e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3282ec: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3282ECu;
    {
        const bool branch_taken_0x3282ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3282ec) {
            ctx->pc = 0x328220u;
            return;
        }
    }
    ctx->pc = 0x3282F4u;
    // 0x3282f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3282f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3282f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3282f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3282fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x328300: 0x3e00008  jr          $ra
    ctx->pc = 0x328300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328308u;
}
