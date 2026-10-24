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

// Function: Sat_use
// Address: 0x19cee0 - 0x19cf70
void Sat_use_0x19cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_use_0x19cee0");
#endif

    switch (ctx->pc) {
        case 0x19cf10u: goto label_19cf10;
        default: break;
    }

    ctx->pc = 0x19cee0u;

    // 0x19cee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cee4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19cee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ceec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cef0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x19cef4: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x19cef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19cef8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cefc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x19cefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19cf00: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cf04: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x19cf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19cf08: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x19CF08u;
    SET_GPR_U32(ctx, 31, 0x19CF10u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x19CF08u, 0x19CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF10u;
label_19cf10:
    // 0x19cf10: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x19cf10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19cf14: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CF28u;
            goto label_19cf28;
        }
    }
    ctx->pc = 0x19CF1Cu;
    // 0x19cf1c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19cf1cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19cf20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19CF20u;
    {
        const bool branch_taken_0x19cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cf20) {
            ctx->pc = 0x19CF58u;
            goto label_19cf58;
        }
    }
    ctx->pc = 0x19CF28u;
label_19cf28:
    // 0x19cf28: 0x3223001f  andi        $v1, $s1, 0x1F
    ctx->pc = 0x19cf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x19cf2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cf30: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19cf34: 0x111143  sra         $v0, $s1, 5
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
    // 0x19cf38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cf3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19cf40: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19cf44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cf48: 0x8c6219ec  lw          $v0, 0x19EC($v1)
    ctx->pc = 0x19cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6636)));
    // 0x19cf4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19cf50: 0xac6219ec  sw          $v0, 0x19EC($v1)
    ctx->pc = 0x19cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6636), GPR_U32(ctx, 2));
    // 0x19cf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cf58:
    // 0x19cf58: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19cf58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF70u;
}
