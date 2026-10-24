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

// Function: entry_00264560
// Address: 0x264560 - 0x264588
void entry_00264560_0x264560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264560_0x264560");
#endif

    ctx->pc = 0x264560u;

    // 0x264560: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264564: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264568: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26456c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26456Cu;
    {
        const bool branch_taken_0x26456c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26456c) {
            ctx->pc = 0x264588u;
            return;
        }
    }
    ctx->pc = 0x264574u;
    // 0x264574: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264578: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26457c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x26457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x264580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264580u;
    {
        const bool branch_taken_0x264580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264580) {
            ctx->pc = 0x264590u;
            return;
        }
    }
    ctx->pc = 0x264588u;
}
