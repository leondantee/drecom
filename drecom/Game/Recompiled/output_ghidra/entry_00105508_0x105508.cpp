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

// Function: entry_00105508
// Address: 0x105508 - 0x105528
void entry_00105508_0x105508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105508_0x105508");
#endif

    ctx->pc = 0x105508u;

    // 0x105508: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10550c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10550cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105510: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105510u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105514: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x105514u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105518: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105518u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10551c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x105520: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x105520u;
    {
        const bool branch_taken_0x105520 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x105524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105520u;
        // 0x105524: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105520) {
            ctx->pc = 0x10557Cu;
            return;
        }
    }
    ctx->pc = 0x105528u;
}
