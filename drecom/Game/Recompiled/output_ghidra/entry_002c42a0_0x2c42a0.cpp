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

// Function: entry_002c42a0
// Address: 0x2c42a0 - 0x2c42d0
void entry_002c42a0_0x2c42a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c42a0_0x2c42a0");
#endif

    switch (ctx->pc) {
        case 0x2c42c4u: goto label_2c42c4;
        default: break;
    }

    ctx->pc = 0x2c42a0u;

    // 0x2c42a0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x2c42a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c42a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c42a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c42ac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C42ACu;
    {
        const bool branch_taken_0x2c42ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c42ac) {
            ctx->pc = 0x2C42D0u;
            return;
        }
    }
    ctx->pc = 0x2C42B4u;
    // 0x2c42b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42b8: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x2c42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x2c42bc: 0xc05a5a4  jal         func_169690
    ctx->pc = 0x2C42BCu;
    SET_GPR_U32(ctx, 31, 0x2C42C4u);
    ctx->pc = 0x169690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169690u, 0x2C42BCu, 0x2C42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42C4u;
label_2c42c4:
    // 0x2c42c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c42c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c42cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2c42d0u;
}
