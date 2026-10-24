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

// Function: entry_001751f8
// Address: 0x1751f8 - 0x175224
void entry_001751f8_0x1751f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751f8_0x1751f8");
#endif

    switch (ctx->pc) {
        case 0x175208u: goto label_175208;
        default: break;
    }

    ctx->pc = 0x1751f8u;

    // 0x1751f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1751fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x175200: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x175200u;
    SET_GPR_U32(ctx, 31, 0x175208u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x175200u, 0x175208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175208u;
label_175208:
    // 0x175208: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17520c: 0x8c22bcf8  lw          $v0, -0x4308($at)
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BCF8u));
    // 0x175210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175210u;
    {
        const bool branch_taken_0x175210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175210) {
            ctx->pc = 0x175224u;
            return;
        }
    }
    ctx->pc = 0x175218u;
    // 0x175218: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17521c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x17521Cu;
    SET_GPR_U32(ctx, 31, 0x175224u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x17521Cu, 0x175224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175224u;
}
