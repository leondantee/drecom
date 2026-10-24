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

// Function: entry_001647cc
// Address: 0x1647cc - 0x16481c
void entry_001647cc_0x1647cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001647cc_0x1647cc");
#endif

    ctx->pc = 0x1647ccu;

    // 0x1647cc: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x1647ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1647d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1647d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1647d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1647d8: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1647D8u;
    {
        const bool branch_taken_0x1647d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647d8) {
            ctx->pc = 0x164AF0u;
            return;
        }
    }
    ctx->pc = 0x1647E0u;
    // 0x1647e0: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x1647e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1647e4: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x1647e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1647e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1647e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1647ec: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x1647ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1647f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1647f4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1647F4u;
    {
        const bool branch_taken_0x1647f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1647f4) {
            ctx->pc = 0x164850u;
            return;
        }
    }
    ctx->pc = 0x1647FCu;
    // 0x1647fc: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x1647fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x164800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164804: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164808: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164808u;
    {
        const bool branch_taken_0x164808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164808) {
            ctx->pc = 0x16481Cu;
            return;
        }
    }
    ctx->pc = 0x164810u;
    // 0x164810: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x164810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x164814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164814u;
    {
        const bool branch_taken_0x164814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164814) {
            ctx->pc = 0x164828u;
            return;
        }
    }
    ctx->pc = 0x16481Cu;
}
