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

// Function: entry_001185f0
// Address: 0x1185f0 - 0x118610
void entry_001185f0_0x1185f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185f0_0x1185f0");
#endif

    ctx->pc = 0x1185f0u;

    // 0x1185f0: 0x464024  and         $t0, $v0, $a2
    ctx->pc = 0x1185f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1185f4: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1185f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1185f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1185F8u;
    {
        const bool branch_taken_0x1185f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185F8u;
        // 0x1185fc: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185f8) {
            ctx->pc = 0x118610u;
            return;
        }
    }
    ctx->pc = 0x118600u;
    // 0x118600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118604: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x118604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x118608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118608u;
    {
        const bool branch_taken_0x118608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118608u;
        // 0x11860c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118608) {
            ctx->pc = 0x11861Cu;
            return;
        }
    }
    ctx->pc = 0x118610u;
}
