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

// Function: entry_002e1730
// Address: 0x2e1730 - 0x2e1758
void entry_002e1730_0x2e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1730_0x2e1730");
#endif

    ctx->pc = 0x2e1730u;

    // 0x2e1730: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1734: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e1734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e1738: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E1738u;
    {
        const bool branch_taken_0x2e1738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1738) {
            ctx->pc = 0x2E19FCu;
            return;
        }
    }
    ctx->pc = 0x2E1740u;
    // 0x2e1740: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1744: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e1744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e174c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e174cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1750: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2E1750u;
    {
        const bool branch_taken_0x2e1750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1750) {
            ctx->pc = 0x2E19FCu;
            return;
        }
    }
    ctx->pc = 0x2E1758u;
}
