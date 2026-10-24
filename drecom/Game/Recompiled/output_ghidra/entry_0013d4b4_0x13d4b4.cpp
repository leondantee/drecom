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

// Function: entry_0013d4b4
// Address: 0x13d4b4 - 0x13d4fc
void entry_0013d4b4_0x13d4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4b4_0x13d4b4");
#endif

    switch (ctx->pc) {
        case 0x13d4f4u: goto label_13d4f4;
        default: break;
    }

    ctx->pc = 0x13d4b4u;

    // 0x13d4b4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x13d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x13d4b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4bc: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x13d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x13d4c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d4c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d4c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13D4C8u;
    {
        const bool branch_taken_0x13d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4c8) {
            ctx->pc = 0x13D4FCu;
            return;
        }
    }
    ctx->pc = 0x13D4D0u;
    // 0x13d4d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d4d8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d4dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d4e0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x13d4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d4e4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x13d4e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x13d4e8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x13d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13d4ec: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x13D4ECu;
    SET_GPR_U32(ctx, 31, 0x13D4F4u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x13D4ECu, 0x13D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4F4u;
label_13d4f4:
    // 0x13d4f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D4F4u;
    {
        const bool branch_taken_0x13d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4f4) {
            ctx->pc = 0x13D510u;
            return;
        }
    }
    ctx->pc = 0x13D4FCu;
}
