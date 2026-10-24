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

// Function: entry_00271854
// Address: 0x271854 - 0x2718a0
void entry_00271854_0x271854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271854_0x271854");
#endif

    ctx->pc = 0x271854u;

    // 0x271854: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x271854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x271858: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x271858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27185c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271860: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x271860u;
    {
        const bool branch_taken_0x271860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x271860) {
            ctx->pc = 0x2718A0u;
            return;
        }
    }
    ctx->pc = 0x271868u;
    // 0x271868: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x271868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27186c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x27186cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x271870: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x271870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x271874: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271878: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271878u;
    {
        const bool branch_taken_0x271878 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x271878) {
            ctx->pc = 0x2718A0u;
            return;
        }
    }
    ctx->pc = 0x271880u;
    // 0x271880: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x271880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x271884: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x271884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271888: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x27188c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x27188cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x271890: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x271890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271894: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x271894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x271898: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x271898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x27189c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x27189cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2718a0u;
}
