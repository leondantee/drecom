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

// Function: entry_00264590
// Address: 0x264590 - 0x2645c4
void entry_00264590_0x264590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264590_0x264590");
#endif

    ctx->pc = 0x264590u;

    // 0x264590: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264594: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26459c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26459Cu;
    {
        const bool branch_taken_0x26459c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26459c) {
            ctx->pc = 0x2645F8u;
            return;
        }
    }
    ctx->pc = 0x2645A4u;
    // 0x2645a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2645a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2645ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2645b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2645b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2645B4u;
    {
        const bool branch_taken_0x2645b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2645b4) {
            ctx->pc = 0x2645C4u;
            return;
        }
    }
    ctx->pc = 0x2645BCu;
    // 0x2645bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2645BCu;
    {
        const bool branch_taken_0x2645bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645bc) {
            ctx->pc = 0x2645E4u;
            return;
        }
    }
    ctx->pc = 0x2645C4u;
}
