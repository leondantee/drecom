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

// Function: entry_00171448
// Address: 0x171448 - 0x171460
void entry_00171448_0x171448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171448_0x171448");
#endif

    ctx->pc = 0x171448u;

    // 0x171448: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x171448u;
    {
        const bool branch_taken_0x171448 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171448) {
            ctx->pc = 0x171460u;
            return;
        }
    }
    ctx->pc = 0x171450u;
    // 0x171450: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x171450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171454: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x171454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
    // 0x171458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171458u;
    {
        const bool branch_taken_0x171458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171458) {
            ctx->pc = 0x171464u;
            return;
        }
    }
    ctx->pc = 0x171460u;
}
