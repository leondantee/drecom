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

// Function: entry_0016c938
// Address: 0x16c938 - 0x16c95c
void entry_0016c938_0x16c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c938_0x16c938");
#endif

    ctx->pc = 0x16c938u;

    // 0x16c938: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c93c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c940: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c944: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C944u;
    {
        const bool branch_taken_0x16c944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c944) {
            ctx->pc = 0x16C95Cu;
            return;
        }
    }
    ctx->pc = 0x16C94Cu;
    // 0x16c94c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c950: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x16c950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C954u;
    {
        const bool branch_taken_0x16c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c954) {
            ctx->pc = 0x16C968u;
            return;
        }
    }
    ctx->pc = 0x16C95Cu;
}
