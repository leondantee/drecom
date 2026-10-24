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

// Function: entry_00264600
// Address: 0x264600 - 0x264640
void entry_00264600_0x264600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264600_0x264600");
#endif

    ctx->pc = 0x264600u;

    // 0x264600: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26460c: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x26460Cu;
    {
        const bool branch_taken_0x26460c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26460c) {
            ctx->pc = 0x264834u;
            return;
        }
    }
    ctx->pc = 0x264614u;
    // 0x264614: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264618: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x264618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x26461c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26461cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x264620: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x264620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x264624: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264624u;
    {
        const bool branch_taken_0x264624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264624) {
            ctx->pc = 0x2646C4u;
            return;
        }
    }
    ctx->pc = 0x26462Cu;
    // 0x26462c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x264630: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264630u;
    {
        const bool branch_taken_0x264630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264630) {
            ctx->pc = 0x264640u;
            return;
        }
    }
    ctx->pc = 0x264638u;
    // 0x264638: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x264638u;
    {
        const bool branch_taken_0x264638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264638) {
            ctx->pc = 0x264718u;
            return;
        }
    }
    ctx->pc = 0x264640u;
}
