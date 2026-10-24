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

// Function: entry_00345710
// Address: 0x345710 - 0x345734
void entry_00345710_0x345710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345710_0x345710");
#endif

    ctx->pc = 0x345710u;

    // 0x345710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345714: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x345718: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x345718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x34571c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345720: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x345720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x345724: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345728: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34572c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34572Cu;
    SET_GPR_U32(ctx, 31, 0x345734u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34572Cu, 0x345734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345734u;
}
