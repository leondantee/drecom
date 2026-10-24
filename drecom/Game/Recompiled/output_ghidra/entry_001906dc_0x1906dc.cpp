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

// Function: entry_001906dc
// Address: 0x1906dc - 0x1906fc
void entry_001906dc_0x1906dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001906dc_0x1906dc");
#endif

    ctx->pc = 0x1906dcu;

    // 0x1906dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1906e0: 0x8c320af0  lw          $s2, 0xAF0($at)
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1906e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1906E4u;
    {
        const bool branch_taken_0x1906e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906e4) {
            ctx->pc = 0x1906FCu;
            return;
        }
    }
    ctx->pc = 0x1906ECu;
    // 0x1906ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1906f0: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x1906f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1906F4u;
    {
        const bool branch_taken_0x1906f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906f4) {
            ctx->pc = 0x190704u;
            return;
        }
    }
    ctx->pc = 0x1906FCu;
}
