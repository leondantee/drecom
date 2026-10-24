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

// Function: entry_0011d164
// Address: 0x11d164 - 0x11d180
void entry_0011d164_0x11d164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d164_0x11d164");
#endif

    ctx->pc = 0x11d164u;

    // 0x11d164: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11d164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11d168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D168u;
    {
        const bool branch_taken_0x11d168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D168u;
        // 0x11d16c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d168) {
            ctx->pc = 0x11D180u;
            return;
        }
    }
    ctx->pc = 0x11D170u;
    // 0x11d170: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x11d170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d174: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D178u;
    {
        const bool branch_taken_0x11d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D178u;
        // 0x11d17c: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d178) {
            ctx->pc = 0x11D198u;
            return;
        }
    }
    ctx->pc = 0x11D180u;
}
