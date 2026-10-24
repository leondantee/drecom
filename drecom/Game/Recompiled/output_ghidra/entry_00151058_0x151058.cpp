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

// Function: entry_00151058
// Address: 0x151058 - 0x151078
void entry_00151058_0x151058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151058_0x151058");
#endif

    ctx->pc = 0x151058u;

    // 0x151058: 0x1519c0  sll         $v1, $s5, 7
    ctx->pc = 0x151058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x15105c: 0x8fb600e8  lw          $s6, 0xE8($sp)
    ctx->pc = 0x15105cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151060: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x151060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x151064: 0x24721600  addiu       $s2, $v1, 0x1600
    ctx->pc = 0x151064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x151068: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x151068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x15106c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15106cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151070: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151070u;
    {
        const bool branch_taken_0x151070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151070) {
            ctx->pc = 0x1510B0u;
            return;
        }
    }
    ctx->pc = 0x151078u;
}
