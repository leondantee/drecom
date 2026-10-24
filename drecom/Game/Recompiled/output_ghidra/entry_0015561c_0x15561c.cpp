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

// Function: entry_0015561c
// Address: 0x15561c - 0x15563c
void entry_0015561c_0x15561c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015561c_0x15561c");
#endif

    ctx->pc = 0x15561cu;

    // 0x15561c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x15561cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155620: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155628: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155628u;
    {
        const bool branch_taken_0x155628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155628) {
            ctx->pc = 0x15563Cu;
            return;
        }
    }
    ctx->pc = 0x155630u;
    // 0x155630: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155630u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155634: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x155634u;
    {
        const bool branch_taken_0x155634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155634) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x15563Cu;
}
