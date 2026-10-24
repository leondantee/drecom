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

// Function: entry_002a8760
// Address: 0x2a8760 - 0x2a8778
void entry_002a8760_0x2a8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8760_0x2a8760");
#endif

    ctx->pc = 0x2a8760u;

    // 0x2a8760: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a8760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a8764: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8768: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a876c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2a876cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8770: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2A8770u;
    {
        const bool branch_taken_0x2a8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8770) {
            ctx->pc = 0x2A8870u;
            return;
        }
    }
    ctx->pc = 0x2A8778u;
}
