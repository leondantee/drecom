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

// Function: caseD_8
// Address: 0x1430e4 - 0x143118
void caseD_8_0x1430e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1430e4");
#endif

    switch (ctx->pc) {
        case 0x1430f0u: goto label_1430f0;
        default: break;
    }

    ctx->pc = 0x1430e4u;

    // 0x1430e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1430e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1430e8: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1430E8u;
    SET_GPR_U32(ctx, 31, 0x1430F0u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1430E8u, 0x1430F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430F0u;
label_1430f0:
    // 0x1430f0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1430f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1430f4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1430f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x1430f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1430F8u;
    {
        const bool branch_taken_0x1430f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430f8) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x143100u;
    // 0x143100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143104: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x143108: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14310c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143114: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x143114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    ctx->pc = 0x143118u;
}
