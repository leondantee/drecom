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

// Function: entry_00187670
// Address: 0x187670 - 0x187694
void entry_00187670_0x187670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187670_0x187670");
#endif

    ctx->pc = 0x187670u;

    // 0x187670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187674: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x187678: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x187678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x18767c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187680: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187680u;
    {
        const bool branch_taken_0x187680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187680) {
            ctx->pc = 0x187694u;
            return;
        }
    }
    ctx->pc = 0x187688u;
    // 0x187688: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18768c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18768cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x187690: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x187690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
    ctx->pc = 0x187694u;
}
