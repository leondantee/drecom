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

// Function: entry_002db2f0
// Address: 0x2db2f0 - 0x2db324
void entry_002db2f0_0x2db2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db2f0_0x2db2f0");
#endif

    switch (ctx->pc) {
        case 0x2db314u: goto label_2db314;
        default: break;
    }

    ctx->pc = 0x2db2f0u;

    // 0x2db2f0: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2db2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db2f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2db2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db2f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2db2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db2fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2db2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2db300: 0x24060a00  addiu       $a2, $zero, 0xA00
    ctx->pc = 0x2db300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x2db304: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2db304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db308: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2db308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db30c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DB30Cu;
    SET_GPR_U32(ctx, 31, 0x2DB314u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DB30Cu, 0x2DB314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB314u;
label_2db314:
    // 0x2db314: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db318: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2db318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2db31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db320: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2db320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2db324u;
}
