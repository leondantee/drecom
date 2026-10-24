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

// Function: entry_00119e94
// Address: 0x119e94 - 0x119ea8
void entry_00119e94_0x119e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e94_0x119e94");
#endif

    ctx->pc = 0x119e94u;

    // 0x119e94: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x119E94u;
    {
        const bool branch_taken_0x119e94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E94u;
        // 0x119e98: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e94) {
            ctx->pc = 0x119ED0u;
            return;
        }
    }
    ctx->pc = 0x119E9Cu;
    // 0x119e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ea0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x119ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ea4: 0x3283e  dsrl32      $a1, $v1, 0
    ctx->pc = 0x119ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 0));
    ctx->pc = 0x119ea8u;
}
