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

// Function: entry_001e33d8
// Address: 0x1e33d8 - 0x1e3410
void entry_001e33d8_0x1e33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e33d8_0x1e33d8");
#endif

    switch (ctx->pc) {
        case 0x1e3408u: goto label_1e3408;
        default: break;
    }

    ctx->pc = 0x1e33d8u;

    // 0x1e33d8: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x1e33d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1e33dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E33DCu;
    {
        const bool branch_taken_0x1e33dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33dc) {
            ctx->pc = 0x1E3410u;
            return;
        }
    }
    ctx->pc = 0x1E33E4u;
    // 0x1e33e4: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e33e8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1e33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e33ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e33ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e33f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e33f4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e33f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e33f8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e33fc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e33fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e3400: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E3400u;
    SET_GPR_U32(ctx, 31, 0x1E3408u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E3400u, 0x1E3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3408u;
label_1e3408:
    // 0x1e3408: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e3408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e340c: 0x0  nop
    ctx->pc = 0x1e340cu;
    // NOP
    ctx->pc = 0x1e3410u;
}
