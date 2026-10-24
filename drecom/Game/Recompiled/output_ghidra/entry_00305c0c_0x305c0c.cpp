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

// Function: entry_00305c0c
// Address: 0x305c0c - 0x305c4c
void entry_00305c0c_0x305c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305c0c_0x305c0c");
#endif

    switch (ctx->pc) {
        case 0x305c2cu: goto label_305c2c;
        default: break;
    }

    ctx->pc = 0x305c0cu;

    // 0x305c0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x305c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305c18: 0x24062815  addiu       $a2, $zero, 0x2815
    ctx->pc = 0x305c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10261));
    // 0x305c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305c20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305c24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305C24u;
    SET_GPR_U32(ctx, 31, 0x305C2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305C24u, 0x305C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C2Cu;
label_305c2c:
    // 0x305c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c30: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x305c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305c34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c38: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x305c3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c40: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305c48: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x305c4cu;
}
