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

// Function: entry_0026c750
// Address: 0x26c750 - 0x26c790
void entry_0026c750_0x26c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c750_0x26c750");
#endif

    switch (ctx->pc) {
        case 0x26c758u: goto label_26c758;
        case 0x26c784u: goto label_26c784;
        default: break;
    }

    ctx->pc = 0x26c750u;

    // 0x26c750: 0xc0bcd40  jal         func_2F3500
    ctx->pc = 0x26C750u;
    SET_GPR_U32(ctx, 31, 0x26C758u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x26C750u, 0x26C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C758u;
label_26c758:
    // 0x26c758: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26c758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c75c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c75cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c760: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x26c760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x26c764: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26c764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26c768: 0x308300c0  andi        $v1, $a0, 0xC0
    ctx->pc = 0x26c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x26c76c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x26C76Cu;
    {
        const bool branch_taken_0x26c76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c76c) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C774u;
    // 0x26c774: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c778: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26c778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26c77c: 0xc09b88c  jal         func_26E230
    ctx->pc = 0x26C77Cu;
    SET_GPR_U32(ctx, 31, 0x26C784u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x26C77Cu, 0x26C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C784u;
label_26c784:
    // 0x26c784: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26c784u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c788: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26C788u;
    {
        const bool branch_taken_0x26c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c788) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C790u;
}
