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

// Function: entry_00214514
// Address: 0x214514 - 0x214568
void entry_00214514_0x214514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214514_0x214514");
#endif

    switch (ctx->pc) {
        case 0x214524u: goto label_214524;
        case 0x21452cu: goto label_21452c;
        case 0x214534u: goto label_214534;
        case 0x214540u: goto label_214540;
        default: break;
    }

    ctx->pc = 0x214514u;

    // 0x214514: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214518: 0xdc250f68  ld          $a1, 0xF68($at)
    ctx->pc = 0x214518u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3B0F68u));
    // 0x21451c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21451Cu;
    SET_GPR_U32(ctx, 31, 0x214524u);
    ctx->pc = 0x214520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21451Cu;
    // 0x214520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21451Cu, 0x214524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214524u;
label_214524:
    // 0x214524: 0xc0474e4  jal         func_11D390
    ctx->pc = 0x214524u;
    SET_GPR_U32(ctx, 31, 0x21452Cu);
    ctx->pc = 0x214528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214524u;
    // 0x214528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D390u, 0x214524u, 0x21452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21452Cu;
label_21452c:
    // 0x21452c: 0xc0850b2  jal         func_2142C8
    ctx->pc = 0x21452Cu;
    SET_GPR_U32(ctx, 31, 0x214534u);
    ctx->pc = 0x214530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21452Cu;
    // 0x214530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2142C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2142C8u, 0x21452Cu, 0x214534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214534u;
label_214534:
    // 0x214534: 0x26440f40  addiu       $a0, $s2, 0xF40
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    // 0x214538: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x214538u;
    SET_GPR_U32(ctx, 31, 0x214540u);
    ctx->pc = 0x21453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214538u;
    // 0x21453c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x214538u, 0x214540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214540u;
label_214540:
    // 0x214540: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214540u;
    {
        const bool branch_taken_0x214540 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x214544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214540u;
        // 0x214544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214540) {
            ctx->pc = 0x214568u;
            return;
        }
    }
    ctx->pc = 0x214548u;
    // 0x214548: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x214548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21454c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214550: 0x24840f48  addiu       $a0, $a0, 0xF48
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3912));
    // 0x214554: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214558: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21455c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21455cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214560: 0x80852d4  j           func_214B50
    ctx->pc = 0x214560u;
    ctx->pc = 0x214564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214560u;
    // 0x214564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    kprintf_0x214b50(rdram, ctx, runtime); return;
    ctx->pc = 0x214568u;
}
