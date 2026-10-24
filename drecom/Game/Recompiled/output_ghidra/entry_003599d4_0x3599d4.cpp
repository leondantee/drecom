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

// Function: entry_003599d4
// Address: 0x3599d4 - 0x359a04
void entry_003599d4_0x3599d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003599d4_0x3599d4");
#endif

    switch (ctx->pc) {
        case 0x3599f4u: goto label_3599f4;
        default: break;
    }

    ctx->pc = 0x3599d4u;

    // 0x3599d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3599d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3599d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3599dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3599e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3599e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3599e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3599e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3599e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3599ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3599ECu;
    SET_GPR_U32(ctx, 31, 0x3599F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3599ECu, 0x3599F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599F4u;
label_3599f4:
    // 0x3599f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3599f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3599f8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3599f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3599fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3599fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359a00: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x359a04u;
}
