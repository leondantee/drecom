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

// Function: entry_00306c98
// Address: 0x306c98 - 0x306ce8
void entry_00306c98_0x306c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306c98_0x306c98");
#endif

    switch (ctx->pc) {
        case 0x306cccu: goto label_306ccc;
        default: break;
    }

    ctx->pc = 0x306c98u;

    // 0x306c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c9c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x306c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x306ca0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306ca8: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x306ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x306cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cb0: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x306cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x306cb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cb8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306cc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306cc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306CC4u;
    SET_GPR_U32(ctx, 31, 0x306CCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306CC4u, 0x306CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CCCu;
label_306ccc:
    // 0x306ccc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x306cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x306cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cd4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x306cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x306cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cdc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306ce4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306ce8u;
}
