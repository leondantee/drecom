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

// Function: entry_00119268
// Address: 0x119268 - 0x11928c
void entry_00119268_0x119268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119268_0x119268");
#endif

    ctx->pc = 0x119268u;

label_119268:
    // 0x119268: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x119268u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x11926c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x11926cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x119270: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x119270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119274: 0x0  nop
    ctx->pc = 0x119274u;
    // NOP
    // 0x119278: 0x0  nop
    ctx->pc = 0x119278u;
    // NOP
    // 0x11927c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11927Cu;
    {
        const bool branch_taken_0x11927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11927c) {
            ctx->pc = 0x119268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119268;
        }
    }
    ctx->pc = 0x119284u;
    // 0x119284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119284u;
    {
        const bool branch_taken_0x119284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119284u;
        // 0x119288: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119284) {
            ctx->pc = 0x1192A0u;
            return;
        }
    }
    ctx->pc = 0x11928Cu;
}
