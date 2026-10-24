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

// Function: entry_00214db8
// Address: 0x214db8 - 0x214dd8
void entry_00214db8_0x214db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214db8_0x214db8");
#endif

    switch (ctx->pc) {
        case 0x214dd4u: goto label_214dd4;
        default: break;
    }

    ctx->pc = 0x214db8u;

    // 0x214db8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x214db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x214dbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dc0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x214dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x214dc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214DC4u;
    {
        const bool branch_taken_0x214dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DC4u;
        // 0x214dc8: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dc4) {
            ctx->pc = 0x214DD8u;
            return;
        }
    }
    ctx->pc = 0x214DCCu;
    // 0x214dcc: 0xc084b80  jal         func_212E00
    ctx->pc = 0x214DCCu;
    SET_GPR_U32(ctx, 31, 0x214DD4u);
    ctx->pc = 0x212E00u;
    {
        ctx->pc = 0x214DD4u;
        ps2_stubs::sceSifSetDChain(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214DD4u) { return; }
    ctx->pc = 0x214DD4u;
label_214dd4:
    // 0x214dd4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x214dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    ctx->pc = 0x214dd8u;
}
