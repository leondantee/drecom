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

// Function: entry_0035cf84
// Address: 0x35cf84 - 0x35cfa4
void entry_0035cf84_0x35cf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035cf84_0x35cf84");
#endif

    ctx->pc = 0x35cf84u;

label_35cf84:
    // 0x35cf84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf88: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35cf8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x35cf90: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35CF90u;
    {
        const bool branch_taken_0x35cf90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35cf90) {
            ctx->pc = 0x35CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cf84;
        }
    }
    ctx->pc = 0x35CF98u;
    // 0x35cf98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cf9c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35cfa0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x35cfa0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
    ctx->pc = 0x35cfa4u;
}
