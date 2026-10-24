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

// Function: entry_0011a2a0
// Address: 0x11a2a0 - 0x11a2c0
void entry_0011a2a0_0x11a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a2a0_0x11a2a0");
#endif

    ctx->pc = 0x11a2a0u;

    // 0x11a2a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A0u;
        // 0x11a2a4: 0xdfa20020  ld          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A2E8u;
            return;
        }
    }
    ctx->pc = 0x11A2A8u;
    // 0x11a2a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2b0: 0xb34021  addu        $t0, $a1, $s3
    ctx->pc = 0x11a2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a2b4: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x11a2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a2b8: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11a2bc: 0x0  nop
    ctx->pc = 0x11a2bcu;
    // NOP
    ctx->pc = 0x11a2c0u;
}
