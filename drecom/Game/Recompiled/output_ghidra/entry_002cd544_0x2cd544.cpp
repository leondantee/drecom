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

// Function: entry_002cd544
// Address: 0x2cd544 - 0x2cd560
void entry_002cd544_0x2cd544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd544_0x2cd544");
#endif

    ctx->pc = 0x2cd544u;

    // 0x2cd544: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd548: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2cd548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cd54c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2cd54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2cd550: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2cd550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2cd554: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd558: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD558u;
    SET_GPR_U32(ctx, 31, 0x2CD560u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD558u, 0x2CD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD560u;
}
