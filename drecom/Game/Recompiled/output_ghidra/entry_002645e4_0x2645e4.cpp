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

// Function: entry_002645e4
// Address: 0x2645e4 - 0x2645f8
void entry_002645e4_0x2645e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002645e4_0x2645e4");
#endif

    ctx->pc = 0x2645e4u;

    // 0x2645e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2645e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645e8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2645e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2645ec: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2645ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2645f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2645F0u;
    {
        const bool branch_taken_0x2645f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645f0) {
            ctx->pc = 0x264600u;
            return;
        }
    }
    ctx->pc = 0x2645F8u;
}
