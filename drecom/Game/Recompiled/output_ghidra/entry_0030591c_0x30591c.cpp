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

// Function: entry_0030591c
// Address: 0x30591c - 0x30595c
void entry_0030591c_0x30591c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030591c_0x30591c");
#endif

    switch (ctx->pc) {
        case 0x30593cu: goto label_30593c;
        default: break;
    }

    ctx->pc = 0x30591cu;

    // 0x30591c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305920: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x305924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305928: 0x24062814  addiu       $a2, $zero, 0x2814
    ctx->pc = 0x305928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10260));
    // 0x30592c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305934u;
    SET_GPR_U32(ctx, 31, 0x30593Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305934u, 0x30593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30593Cu;
label_30593c:
    // 0x30593c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305940: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x305940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305944: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305948: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30594c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305950: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305958: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30595cu;
}
