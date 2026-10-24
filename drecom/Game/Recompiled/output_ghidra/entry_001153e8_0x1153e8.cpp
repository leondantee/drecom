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

// Function: entry_001153e8
// Address: 0x1153e8 - 0x1153f4
void entry_001153e8_0x1153e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153e8_0x1153e8");
#endif

    switch (ctx->pc) {
        case 0x1153f0u: goto label_1153f0;
        default: break;
    }

    ctx->pc = 0x1153e8u;

    // 0x1153e8: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x1153E8u;
    SET_GPR_U32(ctx, 31, 0x1153F0u);
    ctx->pc = 0x1153ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153E8u;
    // 0x1153ec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x1153F0u;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153F0u) { return; }
    ctx->pc = 0x1153F0u;
label_1153f0:
    // 0x1153f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1153f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1153f4u;
}
