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

// Function: entry_0016ea00
// Address: 0x16ea00 - 0x16ea30
void entry_0016ea00_0x16ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea00_0x16ea00");
#endif

    ctx->pc = 0x16ea00u;

    // 0x16ea00: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x16ea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16ea04: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ea08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16ea0c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ea10: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16EA10u;
    {
        const bool branch_taken_0x16ea10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ea10) {
            ctx->pc = 0x16E9D8u;
            return;
        }
    }
    ctx->pc = 0x16EA18u;
    // 0x16ea18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16ea18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ea1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ea1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ea20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ea20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ea28: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA30u;
}
