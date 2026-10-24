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

// Function: entry_00118234
// Address: 0x118234 - 0x118254
void entry_00118234_0x118234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118234_0x118234");
#endif

    ctx->pc = 0x118234u;

    // 0x118234: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x118234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x118238: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x118238u;
    {
        const bool branch_taken_0x118238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118238u;
        // 0x11823c: 0x246b005b  addiu       $t3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118238) {
            ctx->pc = 0x118280u;
            return;
        }
    }
    ctx->pc = 0x118240u;
    // 0x118240: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x118240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x118244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118244u;
    {
        const bool branch_taken_0x118244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118244u;
        // 0x118248: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118244) {
            ctx->pc = 0x118254u;
            return;
        }
    }
    ctx->pc = 0x11824Cu;
    // 0x11824c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11824Cu;
    {
        const bool branch_taken_0x11824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11824Cu;
        // 0x118250: 0x244b006e  addiu       $t3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11824c) {
            ctx->pc = 0x118280u;
            return;
        }
    }
    ctx->pc = 0x118254u;
}
