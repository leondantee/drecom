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

// Function: entry_00273a98
// Address: 0x273a98 - 0x273ab0
void entry_00273a98_0x273a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a98_0x273a98");
#endif

    ctx->pc = 0x273a98u;

    // 0x273a98: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273a9c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A9Cu;
    {
        const bool branch_taken_0x273a9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a9c) {
            ctx->pc = 0x273AB0u;
            return;
        }
    }
    ctx->pc = 0x273AA4u;
    // 0x273aa4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x273aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x273aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273AA8u;
    {
        const bool branch_taken_0x273aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273aa8) {
            ctx->pc = 0x273AB8u;
            return;
        }
    }
    ctx->pc = 0x273AB0u;
}
