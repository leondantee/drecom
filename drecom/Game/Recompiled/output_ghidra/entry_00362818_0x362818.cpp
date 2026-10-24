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

// Function: entry_00362818
// Address: 0x362818 - 0x36284c
void entry_00362818_0x362818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362818_0x362818");
#endif

    ctx->pc = 0x362818u;

    // 0x362818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x362818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36281c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362820: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362824: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x362824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362828: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36282c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362830: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x362834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362838: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36283c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362840: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362844: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x362844u;
    {
        const bool branch_taken_0x362844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362844) {
            ctx->pc = 0x3628DCu;
            return;
        }
    }
    ctx->pc = 0x36284Cu;
}
