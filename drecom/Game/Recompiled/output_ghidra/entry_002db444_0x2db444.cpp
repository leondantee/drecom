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

// Function: entry_002db444
// Address: 0x2db444 - 0x2db47c
void entry_002db444_0x2db444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db444_0x2db444");
#endif

    ctx->pc = 0x2db444u;

    // 0x2db444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db44c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db450: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db458: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db45c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db460: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db46c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db470: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db474: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2DB474u;
    {
        const bool branch_taken_0x2db474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db474) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB47Cu;
}
