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

// Function: entry_0030491c
// Address: 0x30491c - 0x30495c
void entry_0030491c_0x30491c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030491c_0x30491c");
#endif

    switch (ctx->pc) {
        case 0x30493cu: goto label_30493c;
        default: break;
    }

    ctx->pc = 0x30491cu;

    // 0x30491c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304920: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304928: 0x2406280e  addiu       $a2, $zero, 0x280E
    ctx->pc = 0x304928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10254));
    // 0x30492c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304934u;
    SET_GPR_U32(ctx, 31, 0x30493Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304934u, 0x30493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30493Cu;
label_30493c:
    // 0x30493c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304940: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304944: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304948: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30494c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304950: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304958: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30495cu;
}
