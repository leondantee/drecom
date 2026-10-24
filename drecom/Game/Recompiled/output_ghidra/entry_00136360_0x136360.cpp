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

// Function: entry_00136360
// Address: 0x136360 - 0x136380
void entry_00136360_0x136360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136360_0x136360");
#endif

    ctx->pc = 0x136360u;

    // 0x136360: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x136364: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x136368: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13636c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13636Cu;
    {
        const bool branch_taken_0x13636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13636c) {
            ctx->pc = 0x136380u;
            return;
        }
    }
    ctx->pc = 0x136374u;
    // 0x136374: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136374u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136378: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x136378u;
    {
        const bool branch_taken_0x136378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136378) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x136380u;
}
