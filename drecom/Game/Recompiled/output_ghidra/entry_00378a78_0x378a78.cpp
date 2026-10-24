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

// Function: entry_00378a78
// Address: 0x378a78 - 0x378ab8
void entry_00378a78_0x378a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378a78_0x378a78");
#endif

    switch (ctx->pc) {
        case 0x378aa8u: goto label_378aa8;
        default: break;
    }

    ctx->pc = 0x378a78u;

    // 0x378a78: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378a7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x378a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x378a80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x378a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x378a84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x378a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x378a88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x378a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378a8c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x378a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378a90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x378a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x378a94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x378a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x378a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378a9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x378a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x378aa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x378AA0u;
    SET_GPR_U32(ctx, 31, 0x378AA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x378AA0u, 0x378AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AA8u;
label_378aa8:
    // 0x378aa8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378aac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x378aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x378ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x378ab4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x378ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x378ab8u;
}
