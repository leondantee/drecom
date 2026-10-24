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

// Function: entry_00117b64
// Address: 0x117b64 - 0x117b80
void entry_00117b64_0x117b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b64_0x117b64");
#endif

    switch (ctx->pc) {
        case 0x117b74u: goto label_117b74;
        default: break;
    }

    ctx->pc = 0x117b64u;

    // 0x117b64: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x117B64u;
    {
        const bool branch_taken_0x117b64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x117b64) {
            ctx->pc = 0x117B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B64u;
            // 0x117b68: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B80u;
            return;
        }
    }
    ctx->pc = 0x117B6Cu;
    // 0x117b6c: 0xc045bec  jal         func_116FB0
    ctx->pc = 0x117B6Cu;
    SET_GPR_U32(ctx, 31, 0x117B74u);
    ctx->pc = 0x117B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B6Cu;
    // 0x117b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x117B74u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117B74u) { return; }
    ctx->pc = 0x117B74u;
label_117b74:
    // 0x117b74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117B74u;
    {
        const bool branch_taken_0x117b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b74) {
            ctx->pc = 0x117B9Cu;
            return;
        }
    }
    ctx->pc = 0x117B7Cu;
    // 0x117b7c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x117b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->pc = 0x117b80u;
}
