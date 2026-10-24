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

// Function: entry_0018f13c
// Address: 0x18f13c - 0x18f160
void entry_0018f13c_0x18f13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f13c_0x18f13c");
#endif

    ctx->pc = 0x18f13cu;

    // 0x18f13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f140: 0x8c360af0  lw          $s6, 0xAF0($at)
    ctx->pc = 0x18f140u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18f144: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x18f148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F148u;
    {
        const bool branch_taken_0x18f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f148) {
            ctx->pc = 0x18F160u;
            return;
        }
    }
    ctx->pc = 0x18F150u;
    // 0x18f150: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18f154: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x18f154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x18f158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18F158u;
    {
        const bool branch_taken_0x18f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f158) {
            ctx->pc = 0x18F168u;
            return;
        }
    }
    ctx->pc = 0x18F160u;
}
