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

// Function: entry_001a9088
// Address: 0x1a9088 - 0x1a90d0
void entry_001a9088_0x1a9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9088_0x1a9088");
#endif

    switch (ctx->pc) {
        case 0x1a90ccu: goto label_1a90cc;
        default: break;
    }

    ctx->pc = 0x1a9088u;

    // 0x1a9088: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a908c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9090: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9094: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a9094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a9098: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a909c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a90a0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a90a4: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a90a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a90a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a90a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a90ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a90acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a90b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90b4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1a90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a90bc: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a90c0: 0x8c660070  lw          $a2, 0x70($v1)
    ctx->pc = 0x1a90c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1a90c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A90C4u;
    SET_GPR_U32(ctx, 31, 0x1A90CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A90C4u, 0x1A90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90CCu;
label_1a90cc:
    // 0x1a90cc: 0x0  nop
    ctx->pc = 0x1a90ccu;
    // NOP
    ctx->pc = 0x1a90d0u;
}
