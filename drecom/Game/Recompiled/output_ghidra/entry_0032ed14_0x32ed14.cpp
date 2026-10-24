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

// Function: entry_0032ed14
// Address: 0x32ed14 - 0x32ed50
void entry_0032ed14_0x32ed14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ed14_0x32ed14");
#endif

    ctx->pc = 0x32ed14u;

    // 0x32ed14: 0x2aa10005  slti        $at, $s5, 0x5
    ctx->pc = 0x32ed14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32ed18: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x32ED18u;
    {
        const bool branch_taken_0x32ed18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ed18) {
            ctx->pc = 0x32ED50u;
            return;
        }
    }
    ctx->pc = 0x32ED20u;
    // 0x32ed20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ed24: 0x8c22ec10  lw          $v0, -0x13F0($at)
    ctx->pc = 0x32ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ed28: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x32ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x32ed2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ed30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ed34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32ed38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ed3c: 0x24549510  addiu       $s4, $v0, -0x6AF0
    ctx->pc = 0x32ed3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x32ed40: 0x283b021  addu        $s6, $s4, $v1
    ctx->pc = 0x32ed40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32ed44: 0x72c08e28  paddub      $s1, $s6, $zero
    ctx->pc = 0x32ed44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x32ed48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32ED48u;
    {
        const bool branch_taken_0x32ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ed48) {
            ctx->pc = 0x32ED70u;
            return;
        }
    }
    ctx->pc = 0x32ED50u;
}
