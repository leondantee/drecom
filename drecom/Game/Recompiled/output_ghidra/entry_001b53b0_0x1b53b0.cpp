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

// Function: entry_001b53b0
// Address: 0x1b53b0 - 0x1b53d8
void entry_001b53b0_0x1b53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b53b0_0x1b53b0");
#endif

    ctx->pc = 0x1b53b0u;

    // 0x1b53b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b53b4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1b53b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1b53b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B53B8u;
    {
        const bool branch_taken_0x1b53b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53b8) {
            ctx->pc = 0x1B53D8u;
            return;
        }
    }
    ctx->pc = 0x1B53C0u;
    // 0x1b53c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b53c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b53c8: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1b53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x1b53cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b53ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b53d0: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1B53D0u;
    {
        const bool branch_taken_0x1b53d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53d0) {
            ctx->pc = 0x1B55E4u;
            return;
        }
    }
    ctx->pc = 0x1B53D8u;
}
