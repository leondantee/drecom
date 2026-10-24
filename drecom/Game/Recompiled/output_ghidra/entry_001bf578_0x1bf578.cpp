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

// Function: entry_001bf578
// Address: 0x1bf578 - 0x1bf5b4
void entry_001bf578_0x1bf578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf578_0x1bf578");
#endif

    switch (ctx->pc) {
        case 0x1bf59cu: goto label_1bf59c;
        default: break;
    }

    ctx->pc = 0x1bf578u;

    // 0x1bf578: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1bf578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf57c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf580: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf584: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf588: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf594: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF594u;
    SET_GPR_U32(ctx, 31, 0x1BF59Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF594u, 0x1BF59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF59Cu;
label_1bf59c:
    // 0x1bf59c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5a0: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf5a4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1bf5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1bf5a8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bf5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bf5ac: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF5ACu;
    SET_GPR_U32(ctx, 31, 0x1BF5B4u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF5ACu, 0x1BF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5B4u;
}
