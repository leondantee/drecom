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

// Function: entry_001b7748
// Address: 0x1b7748 - 0x1b7770
void entry_001b7748_0x1b7748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7748_0x1b7748");
#endif

    ctx->pc = 0x1b7748u;

    // 0x1b7748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b774c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1b774cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b7750: 0x10a002f9  beqz        $a1, . + 4 + (0x2F9 << 2)
    ctx->pc = 0x1B7750u;
    {
        const bool branch_taken_0x1b7750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7750) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7758u;
    // 0x1b7758: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b775c: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x1b775cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1b7760: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b7764: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1b7764u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b7768: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x1B7768u;
    {
        const bool branch_taken_0x1b7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7768) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7770u;
}
