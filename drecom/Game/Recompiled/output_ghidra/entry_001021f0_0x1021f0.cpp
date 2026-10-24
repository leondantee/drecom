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

// Function: entry_001021f0
// Address: 0x1021f0 - 0x102218
void entry_001021f0_0x1021f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001021f0_0x1021f0");
#endif

    switch (ctx->pc) {
        case 0x102200u: goto label_102200;
        default: break;
    }

    ctx->pc = 0x1021f0u;

    // 0x1021f0: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1021F0u;
    {
        const bool branch_taken_0x1021f0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1021f0) {
            ctx->pc = 0x102238u;
            return;
        }
    }
    ctx->pc = 0x1021F8u;
    // 0x1021f8: 0xc046760  jal         func_119D80
    ctx->pc = 0x1021F8u;
    SET_GPR_U32(ctx, 31, 0x102200u);
    ctx->pc = 0x1021FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021F8u;
    // 0x1021fc: 0x2644c500  addiu       $a0, $s2, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x102200u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x102200u) { return; }
    ctx->pc = 0x102200u;
label_102200:
    // 0x102200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102204: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x102204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x102208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10220c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10220Cu;
    {
        const bool branch_taken_0x10220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10220c) {
            ctx->pc = 0x102238u;
            return;
        }
    }
    ctx->pc = 0x102214u;
    // 0x102214: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x102218u;
}
