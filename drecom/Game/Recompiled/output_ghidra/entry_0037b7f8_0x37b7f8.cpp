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

// Function: entry_0037b7f8
// Address: 0x37b7f8 - 0x37b864
void entry_0037b7f8_0x37b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b7f8_0x37b7f8");
#endif

    switch (ctx->pc) {
        case 0x37b844u: goto label_37b844;
        default: break;
    }

    ctx->pc = 0x37b7f8u;

    // 0x37b7f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b7fc: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b800: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37b800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b804: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B804u;
    {
        const bool branch_taken_0x37b804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b804) {
            ctx->pc = 0x37B7D8u;
            return;
        }
    }
    ctx->pc = 0x37B80Cu;
    // 0x37b80c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b810: 0x8c220588  lw          $v0, 0x588($at)
    ctx->pc = 0x37b810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b814: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b818: 0x26370520  addiu       $s7, $s1, 0x520
    ctx->pc = 0x37b818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x37b81c: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x37b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x37b820: 0x344200a5  ori         $v0, $v0, 0xA5
    ctx->pc = 0x37b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)165);
    // 0x37b824: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x37b824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x37b828: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x37b828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x37b82c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x37b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x37b830: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x37b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x37b834: 0x34455800  ori         $a1, $v0, 0x5800
    ctx->pc = 0x37b834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22528);
    // 0x37b838: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x37b838u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b83c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x37B83Cu;
    SET_GPR_U32(ctx, 31, 0x37B844u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x37B83Cu, 0x37B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B844u;
label_37b844:
    // 0x37b844: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x37b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b848: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37b848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37b84c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x37b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x37b850: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b858: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b85c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x37B85Cu;
    {
        const bool branch_taken_0x37b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b85c) {
            ctx->pc = 0x37B950u;
            return;
        }
    }
    ctx->pc = 0x37B864u;
}
