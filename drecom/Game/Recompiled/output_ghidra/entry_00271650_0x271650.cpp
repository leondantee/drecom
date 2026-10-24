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

// Function: entry_00271650
// Address: 0x271650 - 0x271698
void entry_00271650_0x271650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271650_0x271650");
#endif

    ctx->pc = 0x271650u;

    // 0x271650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271654: 0x8c24fd70  lw          $a0, -0x290($at)
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD70u));
    // 0x271658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27165c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x27165Cu;
    {
        const bool branch_taken_0x27165c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27165c) {
            ctx->pc = 0x271768u;
            return;
        }
    }
    ctx->pc = 0x271664u;
    // 0x271664: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271668: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD60u));
    // 0x27166c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271670: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x271670u;
    {
        const bool branch_taken_0x271670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271670) {
            ctx->pc = 0x271700u;
            return;
        }
    }
    ctx->pc = 0x271678u;
    // 0x271678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27167c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27167Cu;
    {
        const bool branch_taken_0x27167c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27167c) {
            ctx->pc = 0x271698u;
            return;
        }
    }
    ctx->pc = 0x271684u;
    // 0x271684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x271684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271688: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271688u;
    {
        const bool branch_taken_0x271688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271688) {
            ctx->pc = 0x271698u;
            return;
        }
    }
    ctx->pc = 0x271690u;
    // 0x271690: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x271690u;
    {
        const bool branch_taken_0x271690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271690) {
            ctx->pc = 0x271760u;
            return;
        }
    }
    ctx->pc = 0x271698u;
}
