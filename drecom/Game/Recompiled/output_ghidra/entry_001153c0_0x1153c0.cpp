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

// Function: entry_001153c0
// Address: 0x1153c0 - 0x1153d4
void entry_001153c0_0x1153c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153c0_0x1153c0");
#endif

    switch (ctx->pc) {
        case 0x1153ccu: goto label_1153cc;
        default: break;
    }

    ctx->pc = 0x1153c0u;

    // 0x1153c0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1153c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1153c4: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x1153C4u;
    SET_GPR_U32(ctx, 31, 0x1153CCu);
    ctx->pc = 0x1153C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153C4u;
    // 0x1153c8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x1153CCu;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153CCu) { return; }
    ctx->pc = 0x1153CCu;
label_1153cc:
    // 0x1153cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1153CCu;
    {
        const bool branch_taken_0x1153cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153CCu;
        // 0x1153d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153cc) {
            ctx->pc = 0x1153F8u;
            return;
        }
    }
    ctx->pc = 0x1153D4u;
}
