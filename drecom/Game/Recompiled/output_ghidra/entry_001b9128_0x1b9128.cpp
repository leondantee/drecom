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

// Function: entry_001b9128
// Address: 0x1b9128 - 0x1b9150
void entry_001b9128_0x1b9128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9128_0x1b9128");
#endif

    ctx->pc = 0x1b9128u;

    // 0x1b9128: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b912c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1b912cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b9130: 0x10a00196  beqz        $a1, . + 4 + (0x196 << 2)
    ctx->pc = 0x1B9130u;
    {
        const bool branch_taken_0x1b9130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9130) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9138u;
    // 0x1b9138: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b913c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b913cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b9140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9144: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b9144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9148: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x1B9148u;
    {
        const bool branch_taken_0x1b9148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9148) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9150u;
}
