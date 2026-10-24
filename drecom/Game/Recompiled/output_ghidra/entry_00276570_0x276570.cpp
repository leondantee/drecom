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

// Function: entry_00276570
// Address: 0x276570 - 0x276588
void entry_00276570_0x276570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276570_0x276570");
#endif

    ctx->pc = 0x276570u;

    // 0x276570: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x276570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x276574: 0x1460fdfc  bnez        $v1, . + 4 + (-0x204 << 2)
    ctx->pc = 0x276574u;
    {
        const bool branch_taken_0x276574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276574) {
            ctx->pc = 0x275D68u;
            return;
        }
    }
    ctx->pc = 0x27657Cu;
    // 0x27657c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x27657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x276580: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x276580u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x276584: 0x0  nop
    ctx->pc = 0x276584u;
    // NOP
    ctx->pc = 0x276588u;
}
