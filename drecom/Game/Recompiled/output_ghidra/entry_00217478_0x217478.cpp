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

// Function: entry_00217478
// Address: 0x217478 - 0x2174ac
void entry_00217478_0x217478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217478_0x217478");
#endif

    ctx->pc = 0x217478u;

label_217478:
    // 0x217478: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x217478u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21747c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x21747cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x217480: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x217480u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x217484: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x217484u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x217488: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x217488u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x21748c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x21748cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x217490: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x217490u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x217494: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x217494u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x217498: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x217498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x21749c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2174a0: 0x0  nop
    ctx->pc = 0x2174a0u;
    // NOP
    // 0x2174a4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2174A4u;
    {
        const bool branch_taken_0x2174a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2174a4) {
            ctx->pc = 0x217478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217478;
        }
    }
    ctx->pc = 0x2174ACu;
}
