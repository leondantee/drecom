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

// Function: entry_002ef794
// Address: 0x2ef794 - 0x2ef7b0
void entry_002ef794_0x2ef794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef794_0x2ef794");
#endif

    ctx->pc = 0x2ef794u;

    // 0x2ef794: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ef794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef798: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF79Cu;
    {
        const bool branch_taken_0x2ef79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef79c) {
            ctx->pc = 0x2EF7B0u;
            return;
        }
    }
    ctx->pc = 0x2EF7A4u;
    // 0x2ef7a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ef7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF7A8u;
    {
        const bool branch_taken_0x2ef7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7a8) {
            ctx->pc = 0x2EF7B8u;
            return;
        }
    }
    ctx->pc = 0x2EF7B0u;
}
