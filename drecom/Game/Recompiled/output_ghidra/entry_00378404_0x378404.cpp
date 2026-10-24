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

// Function: entry_00378404
// Address: 0x378404 - 0x378424
void entry_00378404_0x378404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378404_0x378404");
#endif

    ctx->pc = 0x378404u;

    // 0x378404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378408: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378408u;
    {
        const bool branch_taken_0x378408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x378408) {
            ctx->pc = 0x378424u;
            return;
        }
    }
    ctx->pc = 0x378410u;
    // 0x378410: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x378414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x378418: 0xac23efb4  sw          $v1, -0x104C($at)
    ctx->pc = 0x378418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x37841c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x37841Cu;
    {
        const bool branch_taken_0x37841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37841c) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x378424u;
}
