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

// Function: entry_00160a14
// Address: 0x160a14 - 0x160a28
void entry_00160a14_0x160a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a14_0x160a14");
#endif

    ctx->pc = 0x160a14u;

    // 0x160a14: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160a18: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160a20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160A20u;
    {
        const bool branch_taken_0x160a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a20) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x160A28u;
}
