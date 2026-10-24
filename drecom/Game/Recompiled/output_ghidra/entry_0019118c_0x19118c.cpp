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

// Function: entry_0019118c
// Address: 0x19118c - 0x1911ac
void entry_0019118c_0x19118c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019118c_0x19118c");
#endif

    ctx->pc = 0x19118cu;

    // 0x19118c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191190: 0x8c320af0  lw          $s2, 0xAF0($at)
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x191194: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191194u;
    {
        const bool branch_taken_0x191194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191194) {
            ctx->pc = 0x1911ACu;
            return;
        }
    }
    ctx->pc = 0x19119Cu;
    // 0x19119c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1911a0: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x1911a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1911A4u;
    {
        const bool branch_taken_0x1911a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911a4) {
            ctx->pc = 0x1911B4u;
            return;
        }
    }
    ctx->pc = 0x1911ACu;
}
