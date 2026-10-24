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

// Function: entry_001e3240
// Address: 0x1e3240 - 0x1e3258
void entry_001e3240_0x1e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3240_0x1e3240");
#endif

    ctx->pc = 0x1e3240u;

    // 0x1e3240: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e3244: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3248: 0x2c6159d9  sltiu       $at, $v1, 0x59D9
    ctx->pc = 0x1e3248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e324c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E324Cu;
    {
        const bool branch_taken_0x1e324c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e324c) {
            ctx->pc = 0x1E3258u;
            return;
        }
    }
    ctx->pc = 0x1E3254u;
    // 0x1e3254: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e3254u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1e3258u;
}
