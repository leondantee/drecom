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

// Function: entry_0011d8cc
// Address: 0x11d8cc - 0x11d8ec
void entry_0011d8cc_0x11d8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d8cc_0x11d8cc");
#endif

    ctx->pc = 0x11d8ccu;

    // 0x11d8cc: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x11d8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11d8d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D8D0u;
    {
        const bool branch_taken_0x11d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8D0u;
        // 0x11d8d4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d0) {
            ctx->pc = 0x11D8ECu;
            return;
        }
    }
    ctx->pc = 0x11D8D8u;
    // 0x11d8d8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11d8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d8dc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d8e0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x11d8e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x11d8e4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11D8E4u;
    {
        const bool branch_taken_0x11d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8E4u;
        // 0x11d8e8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e4) {
            ctx->pc = 0x11DB14u;
            return;
        }
    }
    ctx->pc = 0x11D8ECu;
}
