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

// Function: entry_001153d4
// Address: 0x1153d4 - 0x1153e8
void entry_001153d4_0x1153d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153d4_0x1153d4");
#endif

    switch (ctx->pc) {
        case 0x1153e0u: goto label_1153e0;
        default: break;
    }

    ctx->pc = 0x1153d4u;

    // 0x1153d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153d8: 0xc04509a  jal         func_114268
    ctx->pc = 0x1153D8u;
    SET_GPR_U32(ctx, 31, 0x1153E0u);
    ctx->pc = 0x1153DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153D8u;
    // 0x1153dc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x1153E0u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153E0u) { return; }
    ctx->pc = 0x1153E0u;
label_1153e0:
    // 0x1153e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1153E0u;
    {
        const bool branch_taken_0x1153e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153E0u;
        // 0x1153e4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153e0) {
            ctx->pc = 0x1153F4u;
            return;
        }
    }
    ctx->pc = 0x1153E8u;
}
