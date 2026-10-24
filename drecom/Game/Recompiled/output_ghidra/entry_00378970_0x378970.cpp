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

// Function: entry_00378970
// Address: 0x378970 - 0x3789b0
void entry_00378970_0x378970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378970_0x378970");
#endif

    switch (ctx->pc) {
        case 0x3789a0u: goto label_3789a0;
        default: break;
    }

    ctx->pc = 0x378970u;

    // 0x378970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378974: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x378974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x378978: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x378978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37897c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37897cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x378980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x378980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x378984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378988: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x378988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x37898c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37898cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378990: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x378990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378994: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x378994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x378998: 0xc0965d0  jal         func_259740
    ctx->pc = 0x378998u;
    SET_GPR_U32(ctx, 31, 0x3789A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x378998u, 0x3789A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789A0u;
label_3789a0:
    // 0x3789a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3789a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3789a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3789ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3789acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3789b0u;
}
