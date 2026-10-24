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

// Function: entry_00275d44
// Address: 0x275d44 - 0x275d68
void entry_00275d44_0x275d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275d44_0x275d44");
#endif

    ctx->pc = 0x275d44u;

    // 0x275d44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x275d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x275d48: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x275d4c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x275d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x275d50: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x275d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275d54: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x275d58: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x275d58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275d5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x275d5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275d60: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x275D60u;
    {
        const bool branch_taken_0x275d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d60) {
            ctx->pc = 0x276540u;
            return;
        }
    }
    ctx->pc = 0x275D68u;
}
