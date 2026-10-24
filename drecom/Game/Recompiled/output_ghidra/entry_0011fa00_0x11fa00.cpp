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

// Function: entry_0011fa00
// Address: 0x11fa00 - 0x11fa28
void entry_0011fa00_0x11fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa00_0x11fa00");
#endif

    ctx->pc = 0x11fa00u;

label_11fa00:
    // 0x11fa00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x11fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x11fa04: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x11fa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x11fa08: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x11fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x11fa0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11fa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11fa10: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x11fa10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x11fa14: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x11fa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11fa18: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11FA18u;
    {
        const bool branch_taken_0x11fa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA18u;
        // 0x11fa1c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa18) {
            ctx->pc = 0x11FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fa00;
        }
    }
    ctx->pc = 0x11FA20u;
    // 0x11fa20: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x11fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x11fa24: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x11fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    ctx->pc = 0x11fa28u;
}
