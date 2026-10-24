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

// Function: entry_00115044
// Address: 0x115044 - 0x11505c
void entry_00115044_0x115044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115044_0x115044");
#endif

    switch (ctx->pc) {
        case 0x115054u: goto label_115054;
        default: break;
    }

    ctx->pc = 0x115044u;

    // 0x115044: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x115044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x115048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11504c: 0xc04509a  jal         func_114268
    ctx->pc = 0x11504Cu;
    SET_GPR_U32(ctx, 31, 0x115054u);
    ctx->pc = 0x115050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11504Cu;
    // 0x115050: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x115054u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115054u) { return; }
    ctx->pc = 0x115054u;
label_115054:
    // 0x115054: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x115054u;
    {
        const bool branch_taken_0x115054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115054u;
        // 0x115058: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115054) {
            ctx->pc = 0x115074u;
            return;
        }
    }
    ctx->pc = 0x11505Cu;
}
