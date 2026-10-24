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

// Function: entry_00271520
// Address: 0x271520 - 0x271554
void entry_00271520_0x271520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271520_0x271520");
#endif

    ctx->pc = 0x271520u;

    // 0x271520: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271524: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x271524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD60u));
    // 0x271528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27152c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x27152Cu;
    {
        const bool branch_taken_0x27152c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27152c) {
            ctx->pc = 0x271618u;
            return;
        }
    }
    ctx->pc = 0x271534u;
    // 0x271534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271538: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x271538u;
    {
        const bool branch_taken_0x271538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271538) {
            ctx->pc = 0x271594u;
            return;
        }
    }
    ctx->pc = 0x271540u;
    // 0x271540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x271540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271544: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271544u;
    {
        const bool branch_taken_0x271544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271544) {
            ctx->pc = 0x271554u;
            return;
        }
    }
    ctx->pc = 0x27154Cu;
    // 0x27154c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27154Cu;
    {
        const bool branch_taken_0x27154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27154c) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x271554u;
}
