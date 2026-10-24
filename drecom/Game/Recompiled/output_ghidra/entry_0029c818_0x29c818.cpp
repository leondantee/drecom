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

// Function: entry_0029c818
// Address: 0x29c818 - 0x29c840
void entry_0029c818_0x29c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c818_0x29c818");
#endif

    ctx->pc = 0x29c818u;

    // 0x29c818: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x29c81c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C81Cu;
    {
        const bool branch_taken_0x29c81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c81c) {
            ctx->pc = 0x29C840u;
            return;
        }
    }
    ctx->pc = 0x29C824u;
    // 0x29c824: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x29c828: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c82c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x29c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
    // 0x29c830: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x29c834: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29C834u;
    {
        const bool branch_taken_0x29c834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c834) {
            ctx->pc = 0x29C840u;
            return;
        }
    }
    ctx->pc = 0x29C83Cu;
    // 0x29c83c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x29c840u;
}
