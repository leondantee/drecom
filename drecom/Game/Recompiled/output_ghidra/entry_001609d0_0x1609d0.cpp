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

// Function: entry_001609d0
// Address: 0x1609d0 - 0x1609e4
void entry_001609d0_0x1609d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001609d0_0x1609d0");
#endif

    ctx->pc = 0x1609d0u;

    // 0x1609d0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1609d4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1609d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1609d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1609d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1609dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1609DCu;
    {
        const bool branch_taken_0x1609dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1609dc) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x1609E4u;
}
