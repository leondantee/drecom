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

// Function: entry_0011e49c
// Address: 0x11e49c - 0x11e4bc
void entry_0011e49c_0x11e49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e49c_0x11e49c");
#endif

    ctx->pc = 0x11e49cu;

    // 0x11e49c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x11e49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e4a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E4A0u;
    {
        const bool branch_taken_0x11e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4A0u;
        // 0x11e4a4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4a0) {
            ctx->pc = 0x11E4BCu;
            return;
        }
    }
    ctx->pc = 0x11E4A8u;
    // 0x11e4a8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11e4ac: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11e4acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11e4b0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x11e4b4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11E4B4u;
    {
        const bool branch_taken_0x11e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B4u;
        // 0x11e4b8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b4) {
            ctx->pc = 0x11E6E4u;
            return;
        }
    }
    ctx->pc = 0x11E4BCu;
}
