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

// Function: entry_0026eb28
// Address: 0x26eb28 - 0x26eb50
void entry_0026eb28_0x26eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026eb28_0x26eb28");
#endif

    ctx->pc = 0x26eb28u;

    // 0x26eb28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb2c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26eb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26eb30: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x26EB30u;
    {
        const bool branch_taken_0x26eb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb30) {
            ctx->pc = 0x26ED44u;
            return;
        }
    }
    ctx->pc = 0x26EB38u;
    // 0x26eb38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb3c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26eb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26eb40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eb44: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26eb44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eb48: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x26EB48u;
    {
        const bool branch_taken_0x26eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb48) {
            ctx->pc = 0x26ED44u;
            return;
        }
    }
    ctx->pc = 0x26EB50u;
}
