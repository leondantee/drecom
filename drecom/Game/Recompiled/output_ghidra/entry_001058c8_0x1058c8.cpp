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

// Function: entry_001058c8
// Address: 0x1058c8 - 0x105900
void entry_001058c8_0x1058c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001058c8_0x1058c8");
#endif

    ctx->pc = 0x1058c8u;

    // 0x1058c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1058c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1058cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1058ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1058d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1058d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1058d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1058d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1058d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1058d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1058dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1058dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1058e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1058e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1058e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1058e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1058e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1058e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1058ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1058ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1058f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1058f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1058f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1058f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1058f8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1058F8u;
    {
        const bool branch_taken_0x1058f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F8u;
        // 0x1058fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058f8) {
            ctx->pc = 0x10596Cu;
            return;
        }
    }
    ctx->pc = 0x105900u;
}
