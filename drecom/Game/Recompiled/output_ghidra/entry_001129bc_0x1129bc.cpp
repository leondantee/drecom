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

// Function: entry_001129bc
// Address: 0x1129bc - 0x1129d8
void entry_001129bc_0x1129bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129bc_0x1129bc");
#endif

    ctx->pc = 0x1129bcu;

    // 0x1129bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1129bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1129c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129C0u;
    {
        const bool branch_taken_0x1129c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C0u;
        // 0x1129c4: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c0) {
            ctx->pc = 0x1129D8u;
            return;
        }
    }
    ctx->pc = 0x1129C8u;
    // 0x1129c8: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x1129c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x1129cc: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x1129ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x1129d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1129D0u;
    {
        const bool branch_taken_0x1129d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129d0) {
            ctx->pc = 0x1129E0u;
            return;
        }
    }
    ctx->pc = 0x1129D8u;
}
