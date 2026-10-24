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

// Function: entry_0023a6b4
// Address: 0x23a6b4 - 0x23a700
void entry_0023a6b4_0x23a6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a6b4_0x23a6b4");
#endif

    switch (ctx->pc) {
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6f8u: goto label_23a6f8;
        default: break;
    }

    ctx->pc = 0x23a6b4u;

    // 0x23a6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a6b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6bc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A6C0u;
    SET_GPR_U32(ctx, 31, 0x23A6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A6C0u, 0x23A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6C8u;
label_23a6c8:
    // 0x23a6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a6cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a6d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A6D0u;
    {
        const bool branch_taken_0x23a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6d0) {
            ctx->pc = 0x23A700u;
            return;
        }
    }
    ctx->pc = 0x23A6D8u;
    // 0x23a6d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a6e4: 0x24061e1e  addiu       $a2, $zero, 0x1E1E
    ctx->pc = 0x23a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7710));
    // 0x23a6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a6ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a6f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A6F0u;
    SET_GPR_U32(ctx, 31, 0x23A6F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A6F0u, 0x23A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6F8u;
label_23a6f8:
    // 0x23a6f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A6F8u;
    {
        const bool branch_taken_0x23a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6f8) {
            ctx->pc = 0x23A720u;
            return;
        }
    }
    ctx->pc = 0x23A700u;
}
