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

// Function: entry_00264500
// Address: 0x264500 - 0x264528
void entry_00264500_0x264500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264500_0x264500");
#endif

    ctx->pc = 0x264500u;

    // 0x264500: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264504: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264508: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26450c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26450Cu;
    {
        const bool branch_taken_0x26450c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26450c) {
            ctx->pc = 0x264528u;
            return;
        }
    }
    ctx->pc = 0x264514u;
    // 0x264514: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264518: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26451c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x26451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x264520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264520u;
    {
        const bool branch_taken_0x264520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264520) {
            ctx->pc = 0x264530u;
            return;
        }
    }
    ctx->pc = 0x264528u;
}
