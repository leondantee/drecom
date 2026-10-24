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

// Function: entry_00102490
// Address: 0x102490 - 0x1024b8
void entry_00102490_0x102490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102490_0x102490");
#endif

    switch (ctx->pc) {
        case 0x1024a0u: goto label_1024a0;
        default: break;
    }

    ctx->pc = 0x102490u;

    // 0x102490: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x102490u;
    {
        const bool branch_taken_0x102490 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x102490) {
            ctx->pc = 0x1024D8u;
            return;
        }
    }
    ctx->pc = 0x102498u;
    // 0x102498: 0xc046760  jal         func_119D80
    ctx->pc = 0x102498u;
    SET_GPR_U32(ctx, 31, 0x1024A0u);
    ctx->pc = 0x10249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102498u;
    // 0x10249c: 0x2644c500  addiu       $a0, $s2, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1024A0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1024A0u) { return; }
    ctx->pc = 0x1024A0u;
label_1024a0:
    // 0x1024a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1024a4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1024a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1024a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1024a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1024ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1024ACu;
    {
        const bool branch_taken_0x1024ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1024ac) {
            ctx->pc = 0x1024D8u;
            return;
        }
    }
    ctx->pc = 0x1024B4u;
    // 0x1024b4: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x1024b8u;
}
