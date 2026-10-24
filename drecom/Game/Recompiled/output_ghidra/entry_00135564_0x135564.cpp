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

// Function: entry_00135564
// Address: 0x135564 - 0x135580
void entry_00135564_0x135564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135564_0x135564");
#endif

    switch (ctx->pc) {
        case 0x135578u: goto label_135578;
        default: break;
    }

    ctx->pc = 0x135564u;

    // 0x135564: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135568: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x135568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13556c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135570: 0xc040c00  jal         func_103000
    ctx->pc = 0x135570u;
    SET_GPR_U32(ctx, 31, 0x135578u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x135578u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135578u) { return; }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x135578u;
    {
        const bool branch_taken_0x135578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135578) {
            ctx->pc = 0x1355D0u;
            return;
        }
    }
    ctx->pc = 0x135580u;
}
