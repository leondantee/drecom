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

// Function: entry_0014ce00
// Address: 0x14ce00 - 0x14ce28
void entry_0014ce00_0x14ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ce00_0x14ce00");
#endif

    ctx->pc = 0x14ce00u;

    // 0x14ce00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ce04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14ce08: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x14CE08u;
    {
        const bool branch_taken_0x14ce08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce08) {
            ctx->pc = 0x14CF1Cu;
            return;
        }
    }
    ctx->pc = 0x14CE10u;
    // 0x14ce10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce14: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14ce14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14ce18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ce1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14ce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ce20: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14CE20u;
    {
        const bool branch_taken_0x14ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce20) {
            ctx->pc = 0x14CF1Cu;
            return;
        }
    }
    ctx->pc = 0x14CE28u;
}
