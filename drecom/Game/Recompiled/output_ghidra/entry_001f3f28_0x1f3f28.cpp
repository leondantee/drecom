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

// Function: entry_001f3f28
// Address: 0x1f3f28 - 0x1f3f84
void entry_001f3f28_0x1f3f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f28_0x1f3f28");
#endif

    switch (ctx->pc) {
        case 0x1f3f7cu: goto label_1f3f7c;
        default: break;
    }

    ctx->pc = 0x1f3f28u;

    // 0x1f3f28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3f2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f30: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f3f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f3f3c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f3f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f3f40: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f3f44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3f4c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f3f50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f3f54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f3f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3f60: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f3f64: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1f3f68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f3f6c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f3f70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f74: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F3F74u;
    SET_GPR_U32(ctx, 31, 0x1F3F7Cu);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F3F74u, 0x1F3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F7Cu;
label_1f3f7c:
    // 0x1f3f7c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1F3F7Cu;
    {
        const bool branch_taken_0x1f3f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f7c) {
            ctx->pc = 0x1F4338u;
            return;
        }
    }
    ctx->pc = 0x1F3F84u;
}
