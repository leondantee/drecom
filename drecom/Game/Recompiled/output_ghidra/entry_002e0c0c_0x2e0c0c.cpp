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

// Function: entry_002e0c0c
// Address: 0x2e0c0c - 0x2e0c64
void entry_002e0c0c_0x2e0c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0c0c_0x2e0c0c");
#endif

    switch (ctx->pc) {
        case 0x2e0c3cu: goto label_2e0c3c;
        default: break;
    }

    ctx->pc = 0x2e0c0cu;

    // 0x2e0c0c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e0c10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c14: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0c18: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2e0c18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0c1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0c28: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2e0c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2e0c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0c34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0C34u;
    SET_GPR_U32(ctx, 31, 0x2E0C3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0C34u, 0x2E0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C3Cu;
label_2e0c3c:
    // 0x2e0c3c: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2e0c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0c40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c44: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2e0c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c50: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2e0c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0c54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e0c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0c60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e0c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e0c64u;
}
