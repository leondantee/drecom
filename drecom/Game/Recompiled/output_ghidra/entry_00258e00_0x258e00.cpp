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

// Function: entry_00258e00
// Address: 0x258e00 - 0x258e38
void entry_00258e00_0x258e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258e00_0x258e00");
#endif

    ctx->pc = 0x258e00u;

    // 0x258e00: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x258e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x258e04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258e08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x258e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258e0c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258e10: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258e14: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x258e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258e18: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x258E18u;
    {
        const bool branch_taken_0x258e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258e18) {
            ctx->pc = 0x258DA4u;
            return;
        }
    }
    ctx->pc = 0x258E20u;
    // 0x258e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258e30: 0x3e00008  jr          $ra
    ctx->pc = 0x258E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E38u;
}
