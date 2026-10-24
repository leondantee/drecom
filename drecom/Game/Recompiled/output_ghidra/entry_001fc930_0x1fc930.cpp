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

// Function: entry_001fc930
// Address: 0x1fc930 - 0x1fc968
void entry_001fc930_0x1fc930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc930_0x1fc930");
#endif

    switch (ctx->pc) {
        case 0x1fc960u: goto label_1fc960;
        default: break;
    }

    ctx->pc = 0x1fc930u;

    // 0x1fc930: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc934: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc938: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc93c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc940: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc94c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fc950: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc954: 0x24460270  addiu       $a2, $v0, 0x270
    ctx->pc = 0x1fc954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x1fc958: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC958u;
    SET_GPR_U32(ctx, 31, 0x1FC960u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC958u, 0x1FC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC960u;
label_1fc960:
    // 0x1fc960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc964: 0x0  nop
    ctx->pc = 0x1fc964u;
    // NOP
    ctx->pc = 0x1fc968u;
}
