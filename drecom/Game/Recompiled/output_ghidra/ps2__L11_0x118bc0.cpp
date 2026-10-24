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

// Function: $L11
// Address: 0x118bc0 - 0x118bf8
void ps2__L11_0x118bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L11_0x118bc0");
#endif

    ctx->pc = 0x118bc0u;

label_118bc0:
    // 0x118bc0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x118bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118bc4: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x118bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x118bc8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x118bcc: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x118bccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x118bd0: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x118bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x118bd4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x118bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x118bd8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x118bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118bdc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x118bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x118be0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x118be0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x118be4: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x118BE4u;
    {
        const bool branch_taken_0x118be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BE4u;
        // 0x118be8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118be4) {
            ctx->pc = 0x118BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118bc0;
        }
    }
    ctx->pc = 0x118BECu;
    // 0x118bec: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x118becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x118bf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x118BF0u;
    {
        const bool branch_taken_0x118bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BF0u;
        // 0x118bf4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bf0) {
            ctx->pc = 0x118C18u;
            return;
        }
    }
    ctx->pc = 0x118BF8u;
}
