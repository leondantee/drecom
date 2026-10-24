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

// Function: entry_00170538
// Address: 0x170538 - 0x170550
void entry_00170538_0x170538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170538_0x170538");
#endif

    ctx->pc = 0x170538u;

    // 0x170538: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x170538u;
    {
        const bool branch_taken_0x170538 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x170538) {
            ctx->pc = 0x170550u;
            return;
        }
    }
    ctx->pc = 0x170540u;
    // 0x170540: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170544: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x170544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x170548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170548u;
    {
        const bool branch_taken_0x170548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170548) {
            ctx->pc = 0x170554u;
            return;
        }
    }
    ctx->pc = 0x170550u;
}
