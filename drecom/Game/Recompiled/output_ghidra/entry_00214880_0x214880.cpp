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

// Function: entry_00214880
// Address: 0x214880 - 0x214890
void entry_00214880_0x214880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214880_0x214880");
#endif

    ctx->pc = 0x214880u;

    // 0x214880: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x214880u;
    {
        const bool branch_taken_0x214880 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214880u;
        // 0x214884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214880) {
            ctx->pc = 0x2148CCu;
            return;
        }
    }
    ctx->pc = 0x214888u;
    // 0x214888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21488c: 0x0  nop
    ctx->pc = 0x21488cu;
    // NOP
    ctx->pc = 0x214890u;
}
