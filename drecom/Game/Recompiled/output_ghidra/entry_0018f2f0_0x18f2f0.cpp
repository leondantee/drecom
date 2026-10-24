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

// Function: entry_0018f2f0
// Address: 0x18f2f0 - 0x18f318
void entry_0018f2f0_0x18f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f2f0_0x18f2f0");
#endif

    ctx->pc = 0x18f2f0u;

    // 0x18f2f0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f2f4: 0x94820118  lhu         $v0, 0x118($a0)
    ctx->pc = 0x18f2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x18f2f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f2fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x18f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x18f300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F300u;
    {
        const bool branch_taken_0x18f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f300) {
            ctx->pc = 0x18F318u;
            return;
        }
    }
    ctx->pc = 0x18F308u;
    // 0x18f308: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f30c: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F310u;
    {
        const bool branch_taken_0x18f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f310) {
            ctx->pc = 0x18F324u;
            return;
        }
    }
    ctx->pc = 0x18F318u;
}
