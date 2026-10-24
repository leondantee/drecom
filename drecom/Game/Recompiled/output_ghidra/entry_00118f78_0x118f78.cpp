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

// Function: entry_00118f78
// Address: 0x118f78 - 0x118f9c
void entry_00118f78_0x118f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118f78_0x118f78");
#endif

    ctx->pc = 0x118f78u;

label_118f78:
    // 0x118f78: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x118f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x118f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118f80: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x118f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118f84: 0x0  nop
    ctx->pc = 0x118f84u;
    // NOP
    // 0x118f88: 0x0  nop
    ctx->pc = 0x118f88u;
    // NOP
    // 0x118f8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118F8Cu;
    {
        const bool branch_taken_0x118f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118f8c) {
            ctx->pc = 0x118F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118f78;
        }
    }
    ctx->pc = 0x118F94u;
    // 0x118f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118F94u;
    {
        const bool branch_taken_0x118f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F94u;
        // 0x118f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f94) {
            ctx->pc = 0x118FA4u;
            return;
        }
    }
    ctx->pc = 0x118F9Cu;
}
