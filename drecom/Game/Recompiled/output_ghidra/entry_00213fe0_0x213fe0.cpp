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

// Function: entry_00213fe0
// Address: 0x213fe0 - 0x213fec
void entry_00213fe0_0x213fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213fe0_0x213fe0");
#endif

    ctx->pc = 0x213fe0u;

    // 0x213fe0: 0x8e249e50  lw          $a0, -0x61B0($s1)
    ctx->pc = 0x213fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942288)));
    // 0x213fe4: 0xc084ed2  jal         func_213B48
    ctx->pc = 0x213FE4u;
    SET_GPR_U32(ctx, 31, 0x213FECu);
    ctx->pc = 0x213B48u;
    {
        ctx->pc = 0x213FECu;
        ps2_stubs::sceDeci2Poll(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213FECu) { return; }
    ctx->pc = 0x213FECu;
}
