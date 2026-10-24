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

// Function: entry_00270d5c
// Address: 0x270d5c - 0x270d98
void entry_00270d5c_0x270d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270d5c_0x270d5c");
#endif

    switch (ctx->pc) {
        case 0x270d7cu: goto label_270d7c;
        default: break;
    }

    ctx->pc = 0x270d5cu;

    // 0x270d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270d68: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x270d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
    // 0x270d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270d70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x270d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270d74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270D74u;
    SET_GPR_U32(ctx, 31, 0x270D7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270D74u, 0x270D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D7Cu;
label_270d7c:
    // 0x270d7c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x270d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d84: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x270d84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x270d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d8c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x270d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270d94: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x270d98u;
}
