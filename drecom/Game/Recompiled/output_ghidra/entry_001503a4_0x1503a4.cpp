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

// Function: entry_001503a4
// Address: 0x1503a4 - 0x1503cc
void entry_001503a4_0x1503a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001503a4_0x1503a4");
#endif

    switch (ctx->pc) {
        case 0x1503c0u: goto label_1503c0;
        default: break;
    }

    ctx->pc = 0x1503a4u;

    // 0x1503a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1503a8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x1503a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1503ac: 0x24060a05  addiu       $a2, $zero, 0xA05
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
    // 0x1503b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1503b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1503b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1503b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1503B8u;
    SET_GPR_U32(ctx, 31, 0x1503C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1503B8u, 0x1503C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503C0u;
label_1503c0:
    // 0x1503c0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1503c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1503c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1503c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1503c8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1503c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1503ccu;
}
