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

// Function: entry_001af050
// Address: 0x1af050 - 0x1af060
void entry_001af050_0x1af050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af050_0x1af050");
#endif

    ctx->pc = 0x1af050u;

    // 0x1af050: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x1af050u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af054: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1af054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af058: 0x1460ff04  bnez        $v1, . + 4 + (-0xFC << 2)
    ctx->pc = 0x1AF058u;
    {
        const bool branch_taken_0x1af058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af058) {
            ctx->pc = 0x1AEC6Cu;
            return;
        }
    }
    ctx->pc = 0x1AF060u;
}
