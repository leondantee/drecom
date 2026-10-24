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

// Function: entry_0032eba4
// Address: 0x32eba4 - 0x32ebbc
void entry_0032eba4_0x32eba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eba4_0x32eba4");
#endif

    ctx->pc = 0x32eba4u;

    // 0x32eba4: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eba8: 0x286101bd  slti        $at, $v1, 0x1BD
    ctx->pc = 0x32eba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)445) ? 1 : 0);
    // 0x32ebac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBACu;
    {
        const bool branch_taken_0x32ebac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ebac) {
            ctx->pc = 0x32EBBCu;
            return;
        }
    }
    ctx->pc = 0x32EBB4u;
    // 0x32ebb4: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x32ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x32ebb8: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
    ctx->pc = 0x32ebbcu;
}
