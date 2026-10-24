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

// Function: entry_00328c60
// Address: 0x328c60 - 0x328c8c
void entry_00328c60_0x328c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328c60_0x328c60");
#endif

    ctx->pc = 0x328c60u;

    // 0x328c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c64: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x328c68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c6c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x328c6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x328c70: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x328C70u;
    {
        const bool branch_taken_0x328c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c70) {
            ctx->pc = 0x328C24u;
            return;
        }
    }
    ctx->pc = 0x328C78u;
    // 0x328c78: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x328c78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x328c84: 0x3e00008  jr          $ra
    ctx->pc = 0x328C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C8Cu;
}
