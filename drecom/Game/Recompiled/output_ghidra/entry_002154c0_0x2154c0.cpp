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

// Function: entry_002154c0
// Address: 0x2154c0 - 0x2154e8
void entry_002154c0_0x2154c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002154c0_0x2154c0");
#endif

    switch (ctx->pc) {
        case 0x2154c8u: goto label_2154c8;
        default: break;
    }

    ctx->pc = 0x2154c0u;

label_2154c0:
    // 0x2154c0: 0xc085306  jal         func_214C18
    ctx->pc = 0x2154C0u;
    SET_GPR_U32(ctx, 31, 0x2154C8u);
    ctx->pc = 0x2154C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154C0u;
    // 0x2154c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C18u;
    {
        ctx->pc = 0x2154C8u;
        ps2_stubs::sceSifGetSreg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2154C8u) { return; }
    ctx->pc = 0x2154C8u;
label_2154c8:
    // 0x2154c8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2154C8u;
    {
        const bool branch_taken_0x2154c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C8u;
        // 0x2154cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154c8) {
            ctx->pc = 0x2154C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2154c0;
        }
    }
    ctx->pc = 0x2154D0u;
    // 0x2154d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2154d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2154d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2154d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2154d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2154dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2154dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2154e0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x2154e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2154e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2154e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2154e8u;
}
