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

// Function: entry_00190810
// Address: 0x190810 - 0x190834
void entry_00190810_0x190810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190810_0x190810");
#endif

    ctx->pc = 0x190810u;

    // 0x190810: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x190810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190814: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190818: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19081c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19081Cu;
    {
        const bool branch_taken_0x19081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19081c) {
            ctx->pc = 0x190834u;
            return;
        }
    }
    ctx->pc = 0x190824u;
    // 0x190824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190828: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x190828u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x19082c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19082Cu;
    {
        const bool branch_taken_0x19082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19082c) {
            ctx->pc = 0x190840u;
            return;
        }
    }
    ctx->pc = 0x190834u;
}
