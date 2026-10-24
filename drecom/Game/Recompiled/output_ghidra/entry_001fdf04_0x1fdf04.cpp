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

// Function: entry_001fdf04
// Address: 0x1fdf04 - 0x1fdf40
void entry_001fdf04_0x1fdf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf04_0x1fdf04");
#endif

    ctx->pc = 0x1fdf04u;

    // 0x1fdf04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1fdf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fdf08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fdf0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fdf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fdf10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdf14: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1fdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1fdf18: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1fdf18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdf1c: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf20: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x1fdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x1fdf24: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FDF24u;
    {
        const bool branch_taken_0x1fdf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf24) {
            ctx->pc = 0x1FDFA8u;
            return;
        }
    }
    ctx->pc = 0x1FDF2Cu;
    // 0x1fdf2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf30: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdf30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdf34: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fdf34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdf38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FDF38u;
    {
        const bool branch_taken_0x1fdf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf38) {
            ctx->pc = 0x1FDF98u;
            return;
        }
    }
    ctx->pc = 0x1FDF40u;
}
