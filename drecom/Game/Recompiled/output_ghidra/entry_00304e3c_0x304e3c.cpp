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

// Function: entry_00304e3c
// Address: 0x304e3c - 0x304e7c
void entry_00304e3c_0x304e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304e3c_0x304e3c");
#endif

    switch (ctx->pc) {
        case 0x304e5cu: goto label_304e5c;
        default: break;
    }

    ctx->pc = 0x304e3cu;

    // 0x304e3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304e48: 0x24063210  addiu       $a2, $zero, 0x3210
    ctx->pc = 0x304e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x304e4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304e50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304e54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304E54u;
    SET_GPR_U32(ctx, 31, 0x304E5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304E54u, 0x304E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E5Cu;
label_304e5c:
    // 0x304e5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304e64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x304e6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304e78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x304e7cu;
}
