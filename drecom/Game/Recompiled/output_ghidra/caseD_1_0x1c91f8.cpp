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

// Function: caseD_1
// Address: 0x1c91f8 - 0x1c9218
void caseD_1_0x1c91f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1c91f8");
#endif

    ctx->pc = 0x1c91f8u;

    // 0x1c91f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c91fc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9200: 0x30850200  andi        $a1, $a0, 0x200
    ctx->pc = 0x1c9200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1c9204: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9204u;
    {
        const bool branch_taken_0x1c9204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9204) {
            ctx->pc = 0x1C9218u;
            return;
        }
    }
    ctx->pc = 0x1C920Cu;
    // 0x1c920c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9210: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9214: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1c9214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c9218u;
}
