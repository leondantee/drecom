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

// Function: entry_0011885c
// Address: 0x11885c - 0x118888
void entry_0011885c_0x11885c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011885c_0x11885c");
#endif

    switch (ctx->pc) {
        case 0x118880u: goto label_118880;
        default: break;
    }

    ctx->pc = 0x11885cu;

    // 0x11885c: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x11885cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x118860: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x118860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118868: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x118868u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11886c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x118870: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x118870u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x118874: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x118874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x118878: 0xc046346  jal         func_118D18
    ctx->pc = 0x118878u;
    SET_GPR_U32(ctx, 31, 0x118880u);
    ctx->pc = 0x11887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118878u;
    // 0x11887c: 0xad490008  sw          $t1, 0x8($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x118880u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118880u) { return; }
    ctx->pc = 0x118880u;
label_118880:
    // 0x118880: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x118880u;
    {
        const bool branch_taken_0x118880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118880u;
        // 0x118884: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118880) {
            ctx->pc = 0x1188C0u;
            return;
        }
    }
    ctx->pc = 0x118888u;
}
