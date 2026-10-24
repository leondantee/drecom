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

// Function: entry_00187858
// Address: 0x187858 - 0x187878
void entry_00187858_0x187858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187858_0x187858");
#endif

    ctx->pc = 0x187858u;

    // 0x187858: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18785c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18785cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x187860: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187860u;
    {
        const bool branch_taken_0x187860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187860) {
            ctx->pc = 0x187878u;
            return;
        }
    }
    ctx->pc = 0x187868u;
    // 0x187868: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18786c: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x18786cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187870: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x187870u;
    {
        const bool branch_taken_0x187870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187870) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x187878u;
}
