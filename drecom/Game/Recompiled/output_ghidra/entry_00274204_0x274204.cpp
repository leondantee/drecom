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

// Function: entry_00274204
// Address: 0x274204 - 0x274228
void entry_00274204_0x274204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274204_0x274204");
#endif

    ctx->pc = 0x274204u;

    // 0x274204: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x274204u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x274208: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x27420c: 0x24c3e650  addiu       $v1, $a2, -0x19B0
    ctx->pc = 0x27420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960720));
    // 0x274210: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x274210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x274214: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x274218: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x274218u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x27421c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27421cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274220: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x274220u;
    {
        const bool branch_taken_0x274220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274220) {
            ctx->pc = 0x274A28u;
            return;
        }
    }
    ctx->pc = 0x274228u;
}
