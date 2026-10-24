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

// Function: entry_00101524
// Address: 0x101524 - 0x101554
void entry_00101524_0x101524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101524_0x101524");
#endif

    switch (ctx->pc) {
        case 0x101530u: goto label_101530;
        default: break;
    }

    ctx->pc = 0x101524u;

    // 0x101524: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x101528: 0xc046760  jal         func_119D80
    ctx->pc = 0x101528u;
    SET_GPR_U32(ctx, 31, 0x101530u);
    ctx->pc = 0x10152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101528u;
    // 0x10152c: 0x2484c368  addiu       $a0, $a0, -0x3C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x101530u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x101530u) { return; }
    ctx->pc = 0x101530u;
label_101530:
    // 0x101530: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x101534: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x101538: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x10153c: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x10153cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x101540: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x101540u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x383940u));
    // 0x101544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101548: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x101548u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 4));
    // 0x10154c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x10154Cu;
    {
        const bool branch_taken_0x10154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10154Cu;
        // 0x101550: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10154c) {
            ctx->pc = 0x1017D0u;
            return;
        }
    }
    ctx->pc = 0x101554u;
}
