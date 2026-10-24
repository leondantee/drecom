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

// Function: entry_0026550c
// Address: 0x26550c - 0x2655b0
void entry_0026550c_0x26550c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026550c_0x26550c");
#endif

    switch (ctx->pc) {
        case 0x2655a8u: goto label_2655a8;
        default: break;
    }

    ctx->pc = 0x26550cu;

    // 0x26550c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265510: 0x2221804  sllv        $v1, $v0, $s1
    ctx->pc = 0x265510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x265514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265518: 0x8c22fcac  lw          $v0, -0x354($at)
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCACu));
    // 0x26551c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x265520: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x265520u;
    {
        const bool branch_taken_0x265520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265520) {
            ctx->pc = 0x2655B0u;
            return;
        }
    }
    ctx->pc = 0x265528u;
    // 0x265528: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x265528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x26552c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x265530: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x265530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x265534: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265538: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26553c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265540: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265544: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x265544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265548: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26554c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265554: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x265554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265558: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x26555c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x265560: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x265560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x265564: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265568: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26556c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265574: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x265574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265578: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26557c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265584: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x265584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26558c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265590: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x265590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265594: 0x8ca415b4  lw          $a0, 0x15B4($a1)
    ctx->pc = 0x265594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5556)));
    // 0x265598: 0x8c6515ac  lw          $a1, 0x15AC($v1)
    ctx->pc = 0x265598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5548)));
    // 0x26559c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x26559cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2655a0: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x2655A0u;
    SET_GPR_U32(ctx, 31, 0x2655A8u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x2655A0u, 0x2655A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655A8u;
label_2655a8:
    // 0x2655a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2655A8u;
    {
        const bool branch_taken_0x2655a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655a8) {
            ctx->pc = 0x265630u;
            return;
        }
    }
    ctx->pc = 0x2655B0u;
}
