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

// Function: entry_0032e190
// Address: 0x32e190 - 0x32e1e4
void entry_0032e190_0x32e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e190_0x32e190");
#endif

    ctx->pc = 0x32e190u;

    // 0x32e190: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32e198: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x32e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x32e19c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x32e19cu;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32e1a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e1a4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32e1a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e1ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32e1b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32E1B0u;
    {
        const bool branch_taken_0x32e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e1b0) {
            ctx->pc = 0x32E1E4u;
            return;
        }
    }
    ctx->pc = 0x32E1B8u;
    // 0x32e1b8: 0x2933023  subu        $a2, $s4, $s3
    ctx->pc = 0x32e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x32e1bc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32e1c0: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32e1c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e1c8: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e1cc: 0x34420205  ori         $v0, $v0, 0x205
    ctx->pc = 0x32e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)517);
    // 0x32e1d0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e1d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e1d8: 0x24451f50  addiu       $a1, $v0, 0x1F50
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    // 0x32e1dc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E1DCu;
    SET_GPR_U32(ctx, 31, 0x32E1E4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E1DCu, 0x32E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1E4u;
}
