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

// Function: entry_002dd568
// Address: 0x2dd568 - 0x2dd57c
void entry_002dd568_0x2dd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd568_0x2dd568");
#endif

    ctx->pc = 0x2dd568u;

    // 0x2dd568: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dd56c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd570: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dd570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dd574: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x2DD574u;
    {
        const bool branch_taken_0x2dd574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd574) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD57Cu;
}
