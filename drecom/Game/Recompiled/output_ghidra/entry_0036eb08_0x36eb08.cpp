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

// Function: entry_0036eb08
// Address: 0x36eb08 - 0x36eb40
void entry_0036eb08_0x36eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036eb08_0x36eb08");
#endif

    switch (ctx->pc) {
        case 0x36eb28u: goto label_36eb28;
        default: break;
    }

    ctx->pc = 0x36eb08u;

    // 0x36eb08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36eb14: 0x24065a0d  addiu       $a2, $zero, 0x5A0D
    ctx->pc = 0x36eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23053));
    // 0x36eb18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36eb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36eb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36eb20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36EB20u;
    SET_GPR_U32(ctx, 31, 0x36EB28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36EB20u, 0x36EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB28u;
label_36eb28:
    // 0x36eb28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb2c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36eb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36eb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36eb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36eb38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eb3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36eb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36eb40u;
}
