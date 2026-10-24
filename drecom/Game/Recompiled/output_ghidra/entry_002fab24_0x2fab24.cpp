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

// Function: entry_002fab24
// Address: 0x2fab24 - 0x2fabd4
void entry_002fab24_0x2fab24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fab24_0x2fab24");
#endif

    switch (ctx->pc) {
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabccu: goto label_2fabcc;
        default: break;
    }

    ctx->pc = 0x2fab24u;

    // 0x2fab24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab28: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fab2c: 0x28a1000d  slti        $at, $a1, 0xD
    ctx->pc = 0x2fab2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2fab30: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FAB30u;
    {
        const bool branch_taken_0x2fab30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fab30) {
            ctx->pc = 0x2FAC40u;
            return;
        }
    }
    ctx->pc = 0x2FAB38u;
    // 0x2fab38: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab3c: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fab40: 0x28a10012  slti        $at, $a1, 0x12
    ctx->pc = 0x2fab40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2fab44: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FAB44u;
    {
        const bool branch_taken_0x2fab44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fab44) {
            ctx->pc = 0x2FAC40u;
            return;
        }
    }
    ctx->pc = 0x2FAB4Cu;
    // 0x2fab4c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fab54: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FAB54u;
    {
        const bool branch_taken_0x2fab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fab54) {
            ctx->pc = 0x2FABD4u;
            return;
        }
    }
    ctx->pc = 0x2FAB5Cu;
    // 0x2fab5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab60: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2fab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fab64: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x2fab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2fab68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fab6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fab70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fab74: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fab78: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fab78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fab7c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2fab7cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2fab80: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x2fab80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2fab84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fab88: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fab8c: 0x24470640  addiu       $a3, $v0, 0x640
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2fab90: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2fab90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fab94: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fab94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fab98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fab9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2faba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faba4: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2faba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2faba8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2faba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fabac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fabacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fabb0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fabb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fabb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fabb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FABB8u;
    SET_GPR_U32(ctx, 31, 0x2FABC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FABB8u, 0x2FABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABC0u;
label_2fabc0:
    // 0x2fabc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fabc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fabc4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FABC4u;
    SET_GPR_U32(ctx, 31, 0x2FABCCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FABC4u, 0x2FABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABCCu;
label_2fabcc:
    // 0x2fabcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FABCCu;
    {
        const bool branch_taken_0x2fabcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fabcc) {
            ctx->pc = 0x2FAC40u;
            return;
        }
    }
    ctx->pc = 0x2FABD4u;
}
