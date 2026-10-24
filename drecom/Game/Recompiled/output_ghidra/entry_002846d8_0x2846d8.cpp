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

// Function: entry_002846d8
// Address: 0x2846d8 - 0x2846f8
void entry_002846d8_0x2846d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002846d8_0x2846d8");
#endif

    ctx->pc = 0x2846d8u;

    // 0x2846d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2846d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2846dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2846dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2846e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2846e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2846e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2846E4u;
    {
        const bool branch_taken_0x2846e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846e4) {
            ctx->pc = 0x2846F8u;
            return;
        }
    }
    ctx->pc = 0x2846ECu;
    // 0x2846ec: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2846ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2846f0: 0xc056488  jal         func_159220
    ctx->pc = 0x2846F0u;
    SET_GPR_U32(ctx, 31, 0x2846F8u);
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x2846F0u, 0x2846F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846F8u;
}
