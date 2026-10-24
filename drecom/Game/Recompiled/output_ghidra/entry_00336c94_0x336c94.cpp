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

// Function: entry_00336c94
// Address: 0x336c94 - 0x336cb4
void entry_00336c94_0x336c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336c94_0x336c94");
#endif

    switch (ctx->pc) {
        case 0x336cacu: goto label_336cac;
        default: break;
    }

    ctx->pc = 0x336c94u;

    // 0x336c94: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x336c98: 0x24442728  addiu       $a0, $v0, 0x2728
    ctx->pc = 0x336c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10024));
    // 0x336c9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x336c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336ca0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x336ca4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x336CA4u;
    SET_GPR_U32(ctx, 31, 0x336CACu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x336CACu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x336CACu) { return; }
    ctx->pc = 0x336CACu;
label_336cac:
    // 0x336cac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x336CACu;
    {
        const bool branch_taken_0x336cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336cac) {
            ctx->pc = 0x336D00u;
            return;
        }
    }
    ctx->pc = 0x336CB4u;
}
