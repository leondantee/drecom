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

// Function: entry_00213808
// Address: 0x213808 - 0x213834
void entry_00213808_0x213808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213808_0x213808");
#endif

    switch (ctx->pc) {
        case 0x213810u: goto label_213810;
        default: break;
    }

    ctx->pc = 0x213808u;

    // 0x213808: 0xc084a98  jal         func_212A60
    ctx->pc = 0x213808u;
    SET_GPR_U32(ctx, 31, 0x213810u);
    ctx->pc = 0x21380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213808u;
    // 0x21380c: 0x8e849ce8  lw          $a0, -0x6318($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x213810u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213810u) { return; }
    ctx->pc = 0x213810u;
label_213810:
    // 0x213810: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213814: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x213814u;
    {
        const bool branch_taken_0x213814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x213818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213814u;
        // 0x213818: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213814) {
            ctx->pc = 0x213854u;
            return;
        }
    }
    ctx->pc = 0x21381Cu;
    // 0x21381c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21381Cu;
    {
        const bool branch_taken_0x21381c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21381Cu;
        // 0x213820: 0x26640ea8  addiu       $a0, $s3, 0xEA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21381c) {
            ctx->pc = 0x213834u;
            return;
        }
    }
    ctx->pc = 0x213824u;
    // 0x213824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213824u;
    {
        const bool branch_taken_0x213824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213824) {
            ctx->pc = 0x213844u;
            return;
        }
    }
    ctx->pc = 0x21382Cu;
    // 0x21382c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21382Cu;
    {
        const bool branch_taken_0x21382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21382c) {
            ctx->pc = 0x213874u;
            return;
        }
    }
    ctx->pc = 0x213834u;
}
