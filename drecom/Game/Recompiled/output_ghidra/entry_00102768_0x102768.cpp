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

// Function: entry_00102768
// Address: 0x102768 - 0x102790
void entry_00102768_0x102768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102768_0x102768");
#endif

    switch (ctx->pc) {
        case 0x102778u: goto label_102778;
        default: break;
    }

    ctx->pc = 0x102768u;

    // 0x102768: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102768u;
    {
        const bool branch_taken_0x102768 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x102768) {
            ctx->pc = 0x1027B0u;
            return;
        }
    }
    ctx->pc = 0x102770u;
    // 0x102770: 0xc046760  jal         func_119D80
    ctx->pc = 0x102770u;
    SET_GPR_U32(ctx, 31, 0x102778u);
    ctx->pc = 0x102774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102770u;
    // 0x102774: 0x2644c500  addiu       $a0, $s2, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x102778u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x102778u) { return; }
    ctx->pc = 0x102778u;
label_102778:
    // 0x102778: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x102778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10277c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x10277cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x102780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x102784u;
    {
        const bool branch_taken_0x102784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102784) {
            ctx->pc = 0x1027B0u;
            return;
        }
    }
    ctx->pc = 0x10278Cu;
    // 0x10278c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x102790u;
}
