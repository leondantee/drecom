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

// Function: entry_001d0010
// Address: 0x1d0010 - 0x1d0068
void entry_001d0010_0x1d0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0010_0x1d0010");
#endif

    switch (ctx->pc) {
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0058u: goto label_1d0058;
        default: break;
    }

    ctx->pc = 0x1d0010u;

    // 0x1d0010: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0018: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1d0018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d001c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0020: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0024: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1d0028: 0x24061e8b  addiu       $a2, $zero, 0x1E8B
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7819));
    // 0x1d002c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d002cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0030: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0034: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D0034u;
    SET_GPR_U32(ctx, 31, 0x1D003Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0034u, 0x1D003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D003Cu;
label_1d003c:
    // 0x1d003c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d0040: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0044: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0044u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0048: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d0048u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d004c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d004cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0050: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1D0050u;
    SET_GPR_U32(ctx, 31, 0x1D0058u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1D0050u, 0x1D0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0058u;
label_1d0058:
    // 0x1d0058: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d005c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d005cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0064: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d0068u;
}
