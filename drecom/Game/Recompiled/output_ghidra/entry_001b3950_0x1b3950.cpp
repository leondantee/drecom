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

// Function: entry_001b3950
// Address: 0x1b3950 - 0x1b396c
void entry_001b3950_0x1b3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3950_0x1b3950");
#endif

    ctx->pc = 0x1b3950u;

    // 0x1b3950: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b3954: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b3954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b3958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b395c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B395Cu;
    {
        const bool branch_taken_0x1b395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b395c) {
            ctx->pc = 0x1B396Cu;
            return;
        }
    }
    ctx->pc = 0x1B3964u;
    // 0x1b3964: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b3964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b3968: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->pc = 0x1b396cu;
}
