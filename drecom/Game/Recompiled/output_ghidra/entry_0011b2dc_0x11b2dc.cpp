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

// Function: entry_0011b2dc
// Address: 0x11b2dc - 0x11b2f8
void entry_0011b2dc_0x11b2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2dc_0x11b2dc");
#endif

    ctx->pc = 0x11b2dcu;

    // 0x11b2dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x11b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x11b2e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B2E0u;
    {
        const bool branch_taken_0x11b2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E0u;
        // 0x11b2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e0) {
            ctx->pc = 0x11B2F8u;
            return;
        }
    }
    ctx->pc = 0x11B2E8u;
    // 0x11b2e8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x11b2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11b2ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x11b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x11b2f0: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x11b2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11b2f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b2f8u;
}
