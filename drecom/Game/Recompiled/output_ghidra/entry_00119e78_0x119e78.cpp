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

// Function: entry_00119e78
// Address: 0x119e78 - 0x119e94
void entry_00119e78_0x119e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e78_0x119e78");
#endif

    ctx->pc = 0x119e78u;

    // 0x119e78: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x119E78u;
    {
        const bool branch_taken_0x119e78 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x119e78) {
            ctx->pc = 0x119E94u;
            return;
        }
    }
    ctx->pc = 0x119E80u;
    // 0x119e80: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x119e80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119e84: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x119e84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x119e88: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x119e88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x119e8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x119E8Cu;
    {
        const bool branch_taken_0x119e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E8Cu;
        // 0x119e90: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e8c) {
            ctx->pc = 0x119F00u;
            return;
        }
    }
    ctx->pc = 0x119E94u;
}
