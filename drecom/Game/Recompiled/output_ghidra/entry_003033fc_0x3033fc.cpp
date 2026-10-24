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

// Function: entry_003033fc
// Address: 0x3033fc - 0x303434
void entry_003033fc_0x3033fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003033fc_0x3033fc");
#endif

    ctx->pc = 0x3033fcu;

    // 0x3033fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303400: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x303400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x303404: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x303404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x303408: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30340c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303410: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x303410u;
    {
        const bool branch_taken_0x303410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303410) {
            ctx->pc = 0x303484u;
            return;
        }
    }
    ctx->pc = 0x303418u;
    // 0x303418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30341c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30341Cu;
    {
        const bool branch_taken_0x30341c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30341c) {
            ctx->pc = 0x30345Cu;
            return;
        }
    }
    ctx->pc = 0x303424u;
    // 0x303424: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303424u;
    {
        const bool branch_taken_0x303424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303424) {
            ctx->pc = 0x303434u;
            return;
        }
    }
    ctx->pc = 0x30342Cu;
    // 0x30342c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30342Cu;
    {
        const bool branch_taken_0x30342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30342c) {
            ctx->pc = 0x3034A4u;
            return;
        }
    }
    ctx->pc = 0x303434u;
}
