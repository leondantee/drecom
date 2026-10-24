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

// Function: entry_00187c28
// Address: 0x187c28 - 0x187c48
void entry_00187c28_0x187c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c28_0x187c28");
#endif

    ctx->pc = 0x187c28u;

    // 0x187c28: 0x32220200  andi        $v0, $s1, 0x200
    ctx->pc = 0x187c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
    // 0x187c2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x187C2Cu;
    {
        const bool branch_taken_0x187c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c2c) {
            ctx->pc = 0x187C88u;
            return;
        }
    }
    ctx->pc = 0x187C34u;
    // 0x187c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187c38: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x187c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187c3c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x187c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x187c40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x187C40u;
    {
        const bool branch_taken_0x187c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c40) {
            ctx->pc = 0x187C88u;
            return;
        }
    }
    ctx->pc = 0x187C48u;
}
