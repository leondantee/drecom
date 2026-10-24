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

// Function: entry_00301480
// Address: 0x301480 - 0x30152c
void entry_00301480_0x301480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301480_0x301480");
#endif

    switch (ctx->pc) {
        case 0x3014f4u: goto label_3014f4;
        case 0x301500u: goto label_301500;
        default: break;
    }

    ctx->pc = 0x301480u;

    // 0x301480: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301488: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x301488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x30148c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301490: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x301490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301494: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x301494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x301498: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x301498u;
    {
        const bool branch_taken_0x301498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301498) {
            ctx->pc = 0x30152Cu;
            return;
        }
    }
    ctx->pc = 0x3014A0u;
    // 0x3014a0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3014a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x3014a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3014a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3014a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3014ac: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x3014acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x3014b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3014b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3014b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3014b8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3014b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3014bc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3014c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3014c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3014c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3014c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3014c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3014c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3014cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3014ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3014d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3014d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3014d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3014d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3014d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3014d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3014dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3014dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3014e0: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x3014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x3014e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3014e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3014e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3014e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3014ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3014ECu;
    SET_GPR_U32(ctx, 31, 0x3014F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3014ECu, 0x3014F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014F4u;
label_3014f4:
    // 0x3014f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3014f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3014f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3014F8u;
    SET_GPR_U32(ctx, 31, 0x301500u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3014F8u, 0x301500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301500u;
label_301500:
    // 0x301500: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x301500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x301504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x301508: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x301508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x30150c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x30150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301510: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x301510u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x301514: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x301514u;
    {
        const bool branch_taken_0x301514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301514) {
            ctx->pc = 0x3015D0u;
            return;
        }
    }
    ctx->pc = 0x30151Cu;
    // 0x30151c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301520: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x301520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x301524: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x301524u;
    {
        const bool branch_taken_0x301524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301524) {
            ctx->pc = 0x3015D0u;
            return;
        }
    }
    ctx->pc = 0x30152Cu;
}
