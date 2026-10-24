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

// Function: entry_00198a30
// Address: 0x198a30 - 0x198a80
void entry_00198a30_0x198a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a30_0x198a30");
#endif

    switch (ctx->pc) {
        case 0x198a50u: goto label_198a50;
        default: break;
    }

    ctx->pc = 0x198a30u;

    // 0x198a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198a3c: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x198a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x198a40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x198a48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x198A48u;
    SET_GPR_U32(ctx, 31, 0x198A50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x198A48u, 0x198A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A50u;
label_198a50:
    // 0x198a50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a54: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x198a58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x198a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x198a5c: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x198a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
    // 0x198a60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a64: 0xac601338  sw          $zero, 0x1338($v1)
    ctx->pc = 0x198a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 0));
    // 0x198a68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a6c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x198a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198a74: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198a78: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x198A78u;
    {
        const bool branch_taken_0x198a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a78) {
            ctx->pc = 0x198B8Cu;
            return;
        }
    }
    ctx->pc = 0x198A80u;
}
