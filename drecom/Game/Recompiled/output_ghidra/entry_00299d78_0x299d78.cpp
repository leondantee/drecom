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

// Function: entry_00299d78
// Address: 0x299d78 - 0x299d94
void entry_00299d78_0x299d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299d78_0x299d78");
#endif

    ctx->pc = 0x299d78u;

    // 0x299d78: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d7c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x299d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299d80: 0x8fb301a8  lw          $s3, 0x1A8($sp)
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d84: 0x267100a0  addiu       $s1, $s3, 0xA0
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x299d88: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x299d88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x299d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299D8Cu;
    {
        const bool branch_taken_0x299d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d8c) {
            ctx->pc = 0x299DA8u;
            return;
        }
    }
    ctx->pc = 0x299D94u;
}
