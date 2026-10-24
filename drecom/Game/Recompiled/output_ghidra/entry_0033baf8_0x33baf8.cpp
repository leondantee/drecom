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

// Function: entry_0033baf8
// Address: 0x33baf8 - 0x33bb5c
void entry_0033baf8_0x33baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033baf8_0x33baf8");
#endif

    ctx->pc = 0x33baf8u;

    // 0x33baf8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33bafc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33bb00: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33bb04: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33bb08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bb0c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bb10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33bb14: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33bb18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bb1c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33bb20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33bb24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bb28: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x33bb28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x33bb2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33bb30: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x33bb30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x33bb34: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BB34u;
    {
        const bool branch_taken_0x33bb34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bb34) {
            ctx->pc = 0x33BB5Cu;
            return;
        }
    }
    ctx->pc = 0x33BB3Cu;
    // 0x33bb3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33bb40: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33bb44: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33bb48: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x33bb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bb50: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bb54: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x33BB54u;
    {
        const bool branch_taken_0x33bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb54) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BB5Cu;
}
