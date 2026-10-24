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

// Function: entry_00302398
// Address: 0x302398 - 0x3023f4
void entry_00302398_0x302398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302398_0x302398");
#endif

    switch (ctx->pc) {
        case 0x3023e8u: goto label_3023e8;
        default: break;
    }

    ctx->pc = 0x302398u;

    // 0x302398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30239c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30239cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3023a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3023a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3023a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3023a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3023a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3023A8u;
    {
        const bool branch_taken_0x3023a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023a8) {
            ctx->pc = 0x3023F4u;
            return;
        }
    }
    ctx->pc = 0x3023B0u;
    // 0x3023b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3023b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3023b8: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x3023b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3023bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3023bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3023c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3023c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3023c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3023c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3023c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3023cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3023ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3023d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3023d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3023d4: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x3023d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x3023d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3023d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3023dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3023dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3023e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3023E0u;
    SET_GPR_U32(ctx, 31, 0x3023E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3023E0u, 0x3023E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023E8u;
label_3023e8:
    // 0x3023e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3023e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3023ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3023ECu;
    SET_GPR_U32(ctx, 31, 0x3023F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3023ECu, 0x3023F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023F4u;
}
