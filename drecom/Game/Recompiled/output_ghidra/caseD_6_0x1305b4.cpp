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

// Function: caseD_6
// Address: 0x1305b4 - 0x1305ec
void caseD_6_0x1305b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1305b4");
#endif

    switch (ctx->pc) {
        case 0x1305dcu: goto label_1305dc;
        default: break;
    }

    ctx->pc = 0x1305b4u;

    // 0x1305b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1305b8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1305bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1305bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1305c0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1305c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1305c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1305c8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1305c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1305cc: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x1305ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1305d0: 0x72004628  paddub      $t0, $s0, $zero
    ctx->pc = 0x1305d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1305d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1305D4u;
    SET_GPR_U32(ctx, 31, 0x1305DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1305D4u, 0x1305DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305DCu;
label_1305dc:
    // 0x1305dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1305e0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1305e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1305e4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1305e8: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1305e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1305ecu;
}
