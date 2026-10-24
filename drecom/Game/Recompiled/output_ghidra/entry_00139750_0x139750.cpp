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

// Function: entry_00139750
// Address: 0x139750 - 0x139788
void entry_00139750_0x139750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139750_0x139750");
#endif

    switch (ctx->pc) {
        case 0x139770u: goto label_139770;
        default: break;
    }

    ctx->pc = 0x139750u;

    // 0x139750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139754: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139758: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13975c: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x139760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139764: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139768: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139768u;
    SET_GPR_U32(ctx, 31, 0x139770u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139768u, 0x139770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139770u;
label_139770:
    // 0x139770: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139774: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x139774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x139778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13977c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13977cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139784: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x139788u;
}
