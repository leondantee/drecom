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

// Function: entry_002edf84
// Address: 0x2edf84 - 0x2edfa0
void entry_002edf84_0x2edf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edf84_0x2edf84");
#endif

    ctx->pc = 0x2edf84u;

    // 0x2edf84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2edf84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edf88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2edf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2edf8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDF8Cu;
    {
        const bool branch_taken_0x2edf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf8c) {
            ctx->pc = 0x2EDFA0u;
            return;
        }
    }
    ctx->pc = 0x2EDF94u;
    // 0x2edf94: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2edf94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edf98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDF98u;
    {
        const bool branch_taken_0x2edf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf98) {
            ctx->pc = 0x2EDFA8u;
            return;
        }
    }
    ctx->pc = 0x2EDFA0u;
}
