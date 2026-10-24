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

// Function: entry_002f84e8
// Address: 0x2f84e8 - 0x2f8504
void entry_002f84e8_0x2f84e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f84e8_0x2f84e8");
#endif

    ctx->pc = 0x2f84e8u;

    // 0x2f84e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f84ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f84f0: 0x38700010  xori        $s0, $v1, 0x10
    ctx->pc = 0x2f84f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f84f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f84f8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2f84fc: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x2F84FCu;
    {
        const bool branch_taken_0x2f84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84fc) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8504u;
}
