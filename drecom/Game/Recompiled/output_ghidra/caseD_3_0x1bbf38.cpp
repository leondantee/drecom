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

// Function: caseD_3
// Address: 0x1bbf38 - 0x1bbfa8
void caseD_3_0x1bbf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1bbf38");
#endif

    switch (ctx->pc) {
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbfa4u: goto label_1bbfa4;
        default: break;
    }

    ctx->pc = 0x1bbf38u;

    // 0x1bbf38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf3c: 0x904409da  lbu         $a0, 0x9DA($v0)
    ctx->pc = 0x1bbf3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x1bbf40: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1bbf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bbf44: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1bbf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1bbf48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bbf4c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BBF4Cu;
    {
        const bool branch_taken_0x1bbf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbf4c) {
            ctx->pc = 0x1BBFA8u;
            return;
        }
    }
    ctx->pc = 0x1BBF54u;
    // 0x1bbf54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BBF54u;
    SET_GPR_U32(ctx, 31, 0x1BBF5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BBF54u, 0x1BBF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF5Cu;
label_1bbf5c:
    // 0x1bbf5c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1bbf5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bbf60: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x1bbf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1bbf64: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bbf68: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1bbf6c: 0x24a652d8  addiu       $a2, $a1, 0x52D8
    ctx->pc = 0x1bbf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21208));
    // 0x1bbf70: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bbf74: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1bbf74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbf78: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bbf7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf80: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1bbf84: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1bbf88: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1bbf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1bbf8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bbf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbf90: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1bbf90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1bbf94: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bbf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1bbf98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bbf98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bbf9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBFA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BBF9Cu, 0x1BBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFA4u;
label_1bbfa4:
    // 0x1bbfa4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bbfa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bbfa8u;
}
