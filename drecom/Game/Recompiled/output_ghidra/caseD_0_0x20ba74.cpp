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

// Function: caseD_0
// Address: 0x20ba74 - 0x20bab4
void caseD_0_0x20ba74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x20ba74");
#endif

    switch (ctx->pc) {
        case 0x20ba94u: goto label_20ba94;
        default: break;
    }

    ctx->pc = 0x20ba74u;

    // 0x20ba74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20ba78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20ba7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20ba80: 0x3406c808  ori         $a2, $zero, 0xC808
    ctx->pc = 0x20ba80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51208);
    // 0x20ba84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ba84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ba88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ba8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20BA8Cu;
    SET_GPR_U32(ctx, 31, 0x20BA94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BA8Cu, 0x20BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA94u;
label_20ba94:
    // 0x20ba94: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20ba98: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20ba98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ba9c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20baa0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20baa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20baa4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20baa8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20baa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20baac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20bab0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20bab4u;
}
