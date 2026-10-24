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

// Function: entry_0033ba78
// Address: 0x33ba78 - 0x33baf8
void entry_0033ba78_0x33ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ba78_0x33ba78");
#endif

    ctx->pc = 0x33ba78u;

    // 0x33ba78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33ba7c: 0x8c26bb40  lw          $a2, -0x44C0($at)
    ctx->pc = 0x33ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33ba80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33ba84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33ba88: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33ba8c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33ba90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ba94: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ba98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x33ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x33ba9c: 0x24839a40  addiu       $v1, $a0, -0x65C0
    ctx->pc = 0x33ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
    // 0x33baa0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x33baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33baa4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33baa8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x33baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33baac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33baacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33bab0: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x33bab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x33bab4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33bab8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x33bab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x33babc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x33BABCu;
    {
        const bool branch_taken_0x33babc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33babc) {
            ctx->pc = 0x33BAF8u;
            return;
        }
    }
    ctx->pc = 0x33BAC4u;
    // 0x33bac4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33bac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33bac8: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x33bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33bacc: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x33baccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x33bad0: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x33BAD0u;
    {
        const bool branch_taken_0x33bad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bad0) {
            ctx->pc = 0x33BB5Cu;
            return;
        }
    }
    ctx->pc = 0x33BAD8u;
    // 0x33bad8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33badc: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x33badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33bae0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x33bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x33bae4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x33bae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33baec: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33baecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33baf0: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x33BAF0u;
    {
        const bool branch_taken_0x33baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33baf0) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BAF8u;
}
