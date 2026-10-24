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

// Function: entry_002a1b08
// Address: 0x2a1b08 - 0x2a1b48
void entry_002a1b08_0x2a1b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1b08_0x2a1b08");
#endif

    switch (ctx->pc) {
        case 0x2a1b34u: goto label_2a1b34;
        default: break;
    }

    ctx->pc = 0x2a1b08u;

    // 0x2a1b08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1b0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a1b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1b14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1b20: 0x24060f0f  addiu       $a2, $zero, 0xF0F
    ctx->pc = 0x2a1b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x2a1b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1b28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1b2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1B2Cu, 0x2A1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B34u;
label_2a1b34:
    // 0x2a1b34: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a1b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a1b38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b3c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a1b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1b40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b44: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2a1b44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2a1b48u;
}
