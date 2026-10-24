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

// Function: Sat_jump2
// Address: 0x19ce70 - 0x19ced8
void Sat_jump2_0x19ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_jump2_0x19ce70");
#endif

    switch (ctx->pc) {
        case 0x19ce90u: goto label_19ce90;
        default: break;
    }

    ctx->pc = 0x19ce70u;

    // 0x19ce70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ce74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19ce78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ce7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19ce80: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ce84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ce88: 0xc055574  jal         func_1555D0
    ctx->pc = 0x19CE88u;
    SET_GPR_U32(ctx, 31, 0x19CE90u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x19CE88u, 0x19CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE90u;
label_19ce90:
    // 0x19ce90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CE90u;
    {
        const bool branch_taken_0x19ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce90) {
            ctx->pc = 0x19CEA4u;
            goto label_19cea4;
        }
    }
    ctx->pc = 0x19CE98u;
    // 0x19ce98: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19ce98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ce9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19CE9Cu;
    {
        const bool branch_taken_0x19ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce9c) {
            ctx->pc = 0x19CEC4u;
            goto label_19cec4;
        }
    }
    ctx->pc = 0x19CEA4u;
label_19cea4:
    // 0x19cea4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19cea8: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x19ceac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19ceb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ceb4: 0xac2295b4  sw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ceb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195B4u, _value); } while (0);
    // 0x19ceb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19cebc: 0xac3095bc  sw          $s0, -0x6A44($at)
    ctx->pc = 0x19cebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6195BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195BCu, _value); } while (0);
    // 0x19cec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cec4:
    // 0x19cec4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19cec4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ced0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CED8u;
}
