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

// Function: entry_00379710
// Address: 0x379710 - 0x379758
void entry_00379710_0x379710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379710_0x379710");
#endif

    ctx->pc = 0x379710u;

    // 0x379710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379714: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x379714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x379718: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x379718u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37971c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x379720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379724: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x379724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x379728: 0x24037f80  addiu       $v1, $zero, 0x7F80
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32640));
    // 0x37972c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379730: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x379730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x379734: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x379734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x379738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37973c: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x37973cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x379740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379744: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x379744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x379748: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x379748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37974c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379750: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x379750u;
    SET_GPR_U32(ctx, 31, 0x379758u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x379750u, 0x379758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379758u;
}
