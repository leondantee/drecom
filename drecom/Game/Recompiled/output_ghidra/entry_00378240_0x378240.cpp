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

// Function: entry_00378240
// Address: 0x378240 - 0x378264
void entry_00378240_0x378240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378240_0x378240");
#endif

    ctx->pc = 0x378240u;

    // 0x378240: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x378240u;
    {
        const bool branch_taken_0x378240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x378240) {
            ctx->pc = 0x3782D0u;
            return;
        }
    }
    ctx->pc = 0x378248u;
    // 0x378248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37824c: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37824Cu;
    {
        const bool branch_taken_0x37824c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37824c) {
            ctx->pc = 0x378284u;
            return;
        }
    }
    ctx->pc = 0x378254u;
    // 0x378254: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378254u;
    {
        const bool branch_taken_0x378254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x378254) {
            ctx->pc = 0x378264u;
            return;
        }
    }
    ctx->pc = 0x37825Cu;
    // 0x37825c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37825Cu;
    {
        const bool branch_taken_0x37825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37825c) {
            ctx->pc = 0x3782D0u;
            return;
        }
    }
    ctx->pc = 0x378264u;
}
