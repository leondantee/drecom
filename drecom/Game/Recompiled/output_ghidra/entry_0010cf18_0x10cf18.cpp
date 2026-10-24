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

// Function: entry_0010cf18
// Address: 0x10cf18 - 0x10cf2c
void entry_0010cf18_0x10cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf18_0x10cf18");
#endif

    switch (ctx->pc) {
        case 0x10cf20u: goto label_10cf20;
        default: break;
    }

    ctx->pc = 0x10cf18u;

    // 0x10cf18: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CF18u;
    SET_GPR_U32(ctx, 31, 0x10CF20u);
    ctx->pc = 0x10CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF18u;
    // 0x10cf1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CF20u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CF20u) { return; }
    ctx->pc = 0x10CF20u;
label_10cf20:
    // 0x10cf20: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CF20u;
    {
        const bool branch_taken_0x10cf20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10cf20) {
            ctx->pc = 0x10CF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CF20u;
            // 0x10cf24: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF2Cu;
            return;
        }
    }
    ctx->pc = 0x10CF28u;
    // 0x10cf28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10cf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cf2cu;
}
