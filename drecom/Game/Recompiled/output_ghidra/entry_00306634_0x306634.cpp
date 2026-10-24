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

// Function: entry_00306634
// Address: 0x306634 - 0x306678
void entry_00306634_0x306634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306634_0x306634");
#endif

    switch (ctx->pc) {
        case 0x306654u: goto label_306654;
        default: break;
    }

    ctx->pc = 0x306634u;

    // 0x306634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306638: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x306638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30663c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306648: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30664c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30664Cu;
    SET_GPR_U32(ctx, 31, 0x306654u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30664Cu, 0x306654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306654u;
label_306654:
    // 0x306654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306658: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x306658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30665c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x306660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306664: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x306664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x306668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30666c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30666cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306674: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306678u;
}
