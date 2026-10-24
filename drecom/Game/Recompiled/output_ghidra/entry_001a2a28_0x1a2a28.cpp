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

// Function: entry_001a2a28
// Address: 0x1a2a28 - 0x1a2a90
void entry_001a2a28_0x1a2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a28_0x1a2a28");
#endif

    switch (ctx->pc) {
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a78u: goto label_1a2a78;
        default: break;
    }

    ctx->pc = 0x1a2a28u;

    // 0x1a2a28: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1a2a2c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1a2a30: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2a38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2a40: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a2a44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a4c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a50: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a54: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1a2a58: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A58u;
    SET_GPR_U32(ctx, 31, 0x1A2A60u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A58u, 0x1A2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A60u;
label_1a2a60:
    // 0x1a2a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a68: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a6c: 0x2465010c  addiu       $a1, $v1, 0x10C
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 268));
    // 0x1a2a70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A70u;
    SET_GPR_U32(ctx, 31, 0x1A2A78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A70u, 0x1A2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A78u;
label_1a2a78:
    // 0x1a2a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a80: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a84: 0x24650138  addiu       $a1, $v1, 0x138
    ctx->pc = 0x1a2a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x1a2a88: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2A88u;
    SET_GPR_U32(ctx, 31, 0x1A2A90u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2A88u, 0x1A2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A90u;
}
