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

// Function: entry_001022d0
// Address: 0x1022d0 - 0x1022f8
void entry_001022d0_0x1022d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022d0_0x1022d0");
#endif

    switch (ctx->pc) {
        case 0x1022e0u: goto label_1022e0;
        default: break;
    }

    ctx->pc = 0x1022d0u;

    // 0x1022d0: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1022D0u;
    {
        const bool branch_taken_0x1022d0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1022d0) {
            ctx->pc = 0x102318u;
            return;
        }
    }
    ctx->pc = 0x1022D8u;
    // 0x1022d8: 0xc046760  jal         func_119D80
    ctx->pc = 0x1022D8u;
    SET_GPR_U32(ctx, 31, 0x1022E0u);
    ctx->pc = 0x1022DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022D8u;
    // 0x1022dc: 0x2644c500  addiu       $a0, $s2, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1022E0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1022E0u) { return; }
    ctx->pc = 0x1022E0u;
label_1022e0:
    // 0x1022e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1022e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1022e4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1022e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1022ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1022ECu;
    {
        const bool branch_taken_0x1022ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1022ec) {
            ctx->pc = 0x102318u;
            return;
        }
    }
    ctx->pc = 0x1022F4u;
    // 0x1022f4: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x1022f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x1022f8u;
}
