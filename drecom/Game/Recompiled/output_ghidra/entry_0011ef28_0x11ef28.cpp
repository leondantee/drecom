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

// Function: entry_0011ef28
// Address: 0x11ef28 - 0x11ef54
void entry_0011ef28_0x11ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef28_0x11ef28");
#endif

    ctx->pc = 0x11ef28u;

    // 0x11ef28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ef2c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x11ef2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef30: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x11ef30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ef34: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ef38: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11ef38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11ef3c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF3Cu;
    {
        const bool branch_taken_0x11ef3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF3Cu;
        // 0x11ef40: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef3c) {
            ctx->pc = 0x11EF54u;
            return;
        }
    }
    ctx->pc = 0x11EF44u;
    // 0x11ef44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ef48: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x11ef48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x11ef4c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11ef50: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11ef50u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x11ef54u;
}
