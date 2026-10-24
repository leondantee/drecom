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

// Function: entry_0020c2a0
// Address: 0x20c2a0 - 0x20c2d4
void entry_0020c2a0_0x20c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c2a0_0x20c2a0");
#endif

    switch (ctx->pc) {
        case 0x20c2ccu: goto label_20c2cc;
        default: break;
    }

    ctx->pc = 0x20c2a0u;

    // 0x20c2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2a8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c2ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c2b8: 0x24060a13  addiu       $a2, $zero, 0xA13
    ctx->pc = 0x20c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2579));
    // 0x20c2bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c2c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C2C4u;
    SET_GPR_U32(ctx, 31, 0x20C2CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C2C4u, 0x20C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2CCu;
label_20c2cc:
    // 0x20c2cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20C2CCu;
    {
        const bool branch_taken_0x20c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2cc) {
            ctx->pc = 0x20C2FCu;
            return;
        }
    }
    ctx->pc = 0x20C2D4u;
}
