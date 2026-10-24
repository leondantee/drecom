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

// Function: entry_0030d3fc
// Address: 0x30d3fc - 0x30d420
void entry_0030d3fc_0x30d3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d3fc_0x30d3fc");
#endif

    ctx->pc = 0x30d3fcu;

    // 0x30d3fc: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x30d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30d400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D400u;
    {
        const bool branch_taken_0x30d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d400) {
            ctx->pc = 0x30D420u;
            return;
        }
    }
    ctx->pc = 0x30D408u;
    // 0x30d408: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30d40c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D40Cu;
    {
        const bool branch_taken_0x30d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d40c) {
            ctx->pc = 0x30D420u;
            return;
        }
    }
    ctx->pc = 0x30D414u;
    // 0x30d414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d418: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d41c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30d420u;
}
