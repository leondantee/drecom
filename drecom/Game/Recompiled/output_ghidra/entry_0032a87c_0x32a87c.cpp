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

// Function: entry_0032a87c
// Address: 0x32a87c - 0x32a900
void entry_0032a87c_0x32a87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a87c_0x32a87c");
#endif

    switch (ctx->pc) {
        case 0x32a8ccu: goto label_32a8cc;
        default: break;
    }

    ctx->pc = 0x32a87cu;

    // 0x32a87c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32a880: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x32a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x32a884: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32a888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a88c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x32a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a890: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a894: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32a898: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x32A898u;
    {
        const bool branch_taken_0x32a898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a898) {
            ctx->pc = 0x32A900u;
            return;
        }
    }
    ctx->pc = 0x32A8A0u;
    // 0x32a8a0: 0x2933023  subu        $a2, $s4, $s3
    ctx->pc = 0x32a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x32a8a4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32a8a8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32a8ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32a8b0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32a8b4: 0x34420204  ori         $v0, $v0, 0x204
    ctx->pc = 0x32a8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)516);
    // 0x32a8b8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32a8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a8bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32a8c0: 0x24451e80  addiu       $a1, $v0, 0x1E80
    ctx->pc = 0x32a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x32a8c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32A8C4u;
    SET_GPR_U32(ctx, 31, 0x32A8CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32A8C4u, 0x32A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8CCu;
label_32a8cc:
    // 0x32a8cc: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x32a8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32a8d0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32a8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a8d4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32a8d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32a8d8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32a8dc: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32a8e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32a8e4: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32a8e8: 0x34420206  ori         $v0, $v0, 0x206
    ctx->pc = 0x32a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)518);
    // 0x32a8ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32a8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a8f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32a8f4: 0x24451ea0  addiu       $a1, $v0, 0x1EA0
    ctx->pc = 0x32a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7840));
    // 0x32a8f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32A8F8u;
    SET_GPR_U32(ctx, 31, 0x32A900u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32A8F8u, 0x32A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A900u;
}
