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

// Function: entry_001153ac
// Address: 0x1153ac - 0x1153c0
void entry_001153ac_0x1153ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153ac_0x1153ac");
#endif

    switch (ctx->pc) {
        case 0x1153b8u: goto label_1153b8;
        default: break;
    }

    ctx->pc = 0x1153acu;

    // 0x1153ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153b0: 0xc04509a  jal         func_114268
    ctx->pc = 0x1153B0u;
    SET_GPR_U32(ctx, 31, 0x1153B8u);
    ctx->pc = 0x1153B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153B0u;
    // 0x1153b4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x1153B8u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153B8u) { return; }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1153B8u;
    {
        const bool branch_taken_0x1153b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B8u;
        // 0x1153bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b8) {
            ctx->pc = 0x1153F8u;
            return;
        }
    }
    ctx->pc = 0x1153C0u;
}
