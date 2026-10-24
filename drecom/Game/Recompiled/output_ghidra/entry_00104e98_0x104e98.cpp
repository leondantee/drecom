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

// Function: entry_00104e98
// Address: 0x104e98 - 0x104eb8
void entry_00104e98_0x104e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e98_0x104e98");
#endif

    ctx->pc = 0x104e98u;

    // 0x104e98: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104e9c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x104e9cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104ea0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104ea4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x104ea4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x104ea8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x104ea8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x104eac: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x104eacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x104eb0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EB0u;
        // 0x104eb4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104EF4u;
            return;
        }
    }
    ctx->pc = 0x104EB8u;
}
