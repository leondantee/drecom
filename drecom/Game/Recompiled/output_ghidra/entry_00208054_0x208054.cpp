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

// Function: entry_00208054
// Address: 0x208054 - 0x208094
void entry_00208054_0x208054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208054_0x208054");
#endif

    switch (ctx->pc) {
        case 0x208074u: goto label_208074;
        default: break;
    }

    ctx->pc = 0x208054u;

    // 0x208054: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208058: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20805c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x208060: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x208064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208068: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20806c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20806Cu;
    SET_GPR_U32(ctx, 31, 0x208074u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20806Cu, 0x208074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208074u;
label_208074:
    // 0x208074: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208078: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20807c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208080: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x208080u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x208084: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208088: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20808c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208090: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x208094u;
}
