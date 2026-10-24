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

// Function: entry_0019b1c4
// Address: 0x19b1c4 - 0x19b210
void entry_0019b1c4_0x19b1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b1c4_0x19b1c4");
#endif

    switch (ctx->pc) {
        case 0x19b208u: goto label_19b208;
        default: break;
    }

    ctx->pc = 0x19b1c4u;

    // 0x19b1c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1c8: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19b1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19b1cc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19b1d0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19b1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1d8: 0x8c421340  lw          $v0, 0x1340($v0)
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x19b1dc: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19b1e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19B1E0u;
    {
        const bool branch_taken_0x19b1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1e0) {
            ctx->pc = 0x19B210u;
            return;
        }
    }
    ctx->pc = 0x19B1E8u;
    // 0x19b1e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b1f4: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x19b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
    // 0x19b1f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b1fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b200: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B200u;
    SET_GPR_U32(ctx, 31, 0x19B208u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B200u, 0x19B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B208u;
label_19b208:
    // 0x19b208: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19B208u;
    {
        const bool branch_taken_0x19b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b208) {
            ctx->pc = 0x19B230u;
            return;
        }
    }
    ctx->pc = 0x19B210u;
}
