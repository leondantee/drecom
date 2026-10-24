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

// Function: entry_00136348
// Address: 0x136348 - 0x136360
void entry_00136348_0x136348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136348_0x136348");
#endif

    ctx->pc = 0x136348u;

    // 0x136348: 0x926210a8  lbu         $v0, 0x10A8($s3)
    ctx->pc = 0x136348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4264)));
    // 0x13634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13634Cu;
    {
        const bool branch_taken_0x13634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13634c) {
            ctx->pc = 0x136360u;
            return;
        }
    }
    ctx->pc = 0x136354u;
    // 0x136354: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136354u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136358: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x136358u;
    {
        const bool branch_taken_0x136358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136358) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x136360u;
}
