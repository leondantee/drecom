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

// Function: entry_002e5088
// Address: 0x2e5088 - 0x2e50c4
void entry_002e5088_0x2e5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5088_0x2e5088");
#endif

    switch (ctx->pc) {
        case 0x2e50b4u: goto label_2e50b4;
        default: break;
    }

    ctx->pc = 0x2e5088u;

    // 0x2e5088: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e508c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5090: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e5090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e5094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5098: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e509c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e50a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e50a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e50a4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2e50a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e50a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e50a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e50ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E50ACu;
    SET_GPR_U32(ctx, 31, 0x2E50B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E50ACu, 0x2E50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50B4u;
label_2e50b4:
    // 0x2e50b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e50b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e50b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e50bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e50c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e50c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e50c4u;
}
