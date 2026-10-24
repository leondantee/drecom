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

// Function: entry_001fa514
// Address: 0x1fa514 - 0x1fa56c
void entry_001fa514_0x1fa514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa514_0x1fa514");
#endif

    ctx->pc = 0x1fa514u;

    // 0x1fa514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1fa518: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1fa518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1fa51c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1fa51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fa520: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa524: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x1fa524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x1fa528: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa52c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1fa52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fa530: 0x14830070  bne         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1FA530u;
    {
        const bool branch_taken_0x1fa530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa530) {
            ctx->pc = 0x1FA6F4u;
            return;
        }
    }
    ctx->pc = 0x1FA538u;
    // 0x1fa538: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa53c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1fa540: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1fa540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fa544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa548: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA548u;
    {
        const bool branch_taken_0x1fa548 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fa548) {
            ctx->pc = 0x1FA56Cu;
            return;
        }
    }
    ctx->pc = 0x1FA550u;
    // 0x1fa550: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa554: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa558: 0x94830082  lhu         $v1, 0x82($a0)
    ctx->pc = 0x1fa558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x1fa55c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1fa55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1fa560: 0xa4830082  sh          $v1, 0x82($a0)
    ctx->pc = 0x1fa560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa564: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FA564u;
    {
        const bool branch_taken_0x1fa564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa564) {
            ctx->pc = 0x1FA6F4u;
            return;
        }
    }
    ctx->pc = 0x1FA56Cu;
}
