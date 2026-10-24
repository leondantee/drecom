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
// Address: 0x1b9b70 - 0x1b9be0
void caseD_3_0x1b9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1b9b70");
#endif

    switch (ctx->pc) {
        case 0x1b9b94u: goto label_1b9b94;
        default: break;
    }

    ctx->pc = 0x1b9b70u;

    // 0x1b9b70: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b74: 0x90c209da  lbu         $v0, 0x9DA($a2)
    ctx->pc = 0x1b9b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2522)));
    // 0x1b9b78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b9b7c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x1b9b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1b9b80: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1b9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b9b84: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B9B84u;
    {
        const bool branch_taken_0x1b9b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9b84) {
            ctx->pc = 0x1B9BE0u;
            return;
        }
    }
    ctx->pc = 0x1B9B8Cu;
    // 0x1b9b8c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1B9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B94u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B9B8Cu, 0x1B9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B94u;
label_1b9b94:
    // 0x1b9b94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9b94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9b98: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b9b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b9b9c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b9b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b9ba0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b9ba4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b9ba8: 0x246352d8  addiu       $v1, $v1, 0x52D8
    ctx->pc = 0x1b9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21208));
    // 0x1b9bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b9bb0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b9bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9bb4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b9bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b9bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9bbc: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1b9bc0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1b9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1b9bc4: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x1b9bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1b9bc8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1b9bc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9bcc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b9bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b9bd0: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x1b9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1b9bd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b9bd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9bd8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1B9BD8u;
    SET_GPR_U32(ctx, 31, 0x1B9BE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B9BD8u, 0x1B9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BE0u;
}
