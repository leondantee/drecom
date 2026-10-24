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

// Function: entry_0012f404
// Address: 0x12f404 - 0x12f42c
void entry_0012f404_0x12f404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f404_0x12f404");
#endif

    ctx->pc = 0x12f404u;

    // 0x12f404: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f408: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f40c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x12F40Cu;
    {
        const bool branch_taken_0x12f40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f40c) {
            ctx->pc = 0x12F4E0u;
            return;
        }
    }
    ctx->pc = 0x12F414u;
    // 0x12f414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f418: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12f418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12f41c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f420: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12f420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f424: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12F424u;
    {
        const bool branch_taken_0x12f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f424) {
            ctx->pc = 0x12F4E0u;
            return;
        }
    }
    ctx->pc = 0x12F42Cu;
}
