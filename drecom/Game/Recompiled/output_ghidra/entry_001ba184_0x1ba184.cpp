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

// Function: entry_001ba184
// Address: 0x1ba184 - 0x1ba1ac
void entry_001ba184_0x1ba184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba184_0x1ba184");
#endif

    ctx->pc = 0x1ba184u;

    // 0x1ba184: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba188: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x1ba188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1ba18c: 0x10c002b1  beqz        $a2, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x1BA18Cu;
    {
        const bool branch_taken_0x1ba18c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba18c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA194u;
    // 0x1ba194: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba198: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x1ba198u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1ba19c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ba1a0: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1ba1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba1a4: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x1BA1A4u;
    {
        const bool branch_taken_0x1ba1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1a4) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA1ACu;
}
