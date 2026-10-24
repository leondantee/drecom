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

// Function: entry_002a4d3c
// Address: 0x2a4d3c - 0x2a4da8
void entry_002a4d3c_0x2a4d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4d3c_0x2a4d3c");
#endif

    switch (ctx->pc) {
        case 0x2a4d48u: goto label_2a4d48;
        case 0x2a4d60u: goto label_2a4d60;
        case 0x2a4d78u: goto label_2a4d78;
        case 0x2a4d90u: goto label_2a4d90;
        default: break;
    }

    ctx->pc = 0x2a4d3cu;

    // 0x2a4d3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4D40u;
    SET_GPR_U32(ctx, 31, 0x2A4D48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4D40u, 0x2A4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D48u;
label_2a4d48:
    // 0x2a4d48: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4d50: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d58: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D58u;
    SET_GPR_U32(ctx, 31, 0x2A4D60u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D58u, 0x2A4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D60u;
label_2a4d60:
    // 0x2a4d60: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d64: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4d68: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d70: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D70u;
    SET_GPR_U32(ctx, 31, 0x2A4D78u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D70u, 0x2A4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D78u;
label_2a4d78:
    // 0x2a4d78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d7c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4d80: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d88: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D88u;
    SET_GPR_U32(ctx, 31, 0x2A4D90u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D88u, 0x2A4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D90u;
label_2a4d90:
    // 0x2a4d90: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d94: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4d98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4da0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4DA0u;
    SET_GPR_U32(ctx, 31, 0x2A4DA8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4DA0u, 0x2A4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DA8u;
}
