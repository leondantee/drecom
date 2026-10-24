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

// Function: entry_0010d8f8
// Address: 0x10d8f8 - 0x10d91c
void entry_0010d8f8_0x10d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8f8_0x10d8f8");
#endif

    ctx->pc = 0x10d8f8u;

label_10d8f8:
    // 0x10d8f8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x10d8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10d8fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D8FCu;
    {
        const bool branch_taken_0x10d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8FCu;
        // 0x10d900: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8fc) {
            ctx->pc = 0x10D91Cu;
            return;
        }
    }
    ctx->pc = 0x10D904u;
    // 0x10d904: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x10d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10d908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d90c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10d90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10d910: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x10d910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x10d914: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10D914u;
    {
        const bool branch_taken_0x10d914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d914) {
            ctx->pc = 0x10D918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D914u;
            // 0x10d918: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d8f8;
        }
    }
    ctx->pc = 0x10D91Cu;
}
