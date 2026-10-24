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

// Function: entry_00187878
// Address: 0x187878 - 0x18788c
void entry_00187878_0x187878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187878_0x187878");
#endif

    ctx->pc = 0x187878u;

    // 0x187878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18787c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x187880: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x187880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
    // 0x187884: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x187884u;
    {
        const bool branch_taken_0x187884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187884) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x18788Cu;
}
