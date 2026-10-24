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

// Function: Vramview_disp
// Address: 0x1a4ed0 - 0x1a4f4c
void Vramview_disp_0x1a4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vramview_disp_0x1a4ed0");
#endif

    switch (ctx->pc) {
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f34u: goto label_1a4f34;
        default: break;
    }

    ctx->pc = 0x1a4ed0u;

    // 0x1a4ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4ed4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a4ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a4ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4ee0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a4ee4: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1a4ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4ee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4eec: 0x24710320  addiu       $s1, $v1, 0x320
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x1a4ef0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a4ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4ef4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4efc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4EFCu;
    {
        const bool branch_taken_0x1a4efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4efc) {
            ctx->pc = 0x1A4F28u;
            goto label_1a4f28;
        }
    }
    ctx->pc = 0x1A4F04u;
    // 0x1a4f04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4F04u;
    {
        const bool branch_taken_0x1a4f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f04) {
            ctx->pc = 0x1A4F14u;
            goto label_1a4f14;
        }
    }
    ctx->pc = 0x1A4F0Cu;
    // 0x1a4f0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4F0Cu;
    {
        const bool branch_taken_0x1a4f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f0c) {
            ctx->pc = 0x1A4F34u;
            goto label_1a4f34;
        }
    }
    ctx->pc = 0x1A4F14u;
label_1a4f14:
    // 0x1a4f14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f18: 0xc0693d4  jal         func_1A4F50
    ctx->pc = 0x1A4F18u;
    SET_GPR_U32(ctx, 31, 0x1A4F20u);
    ctx->pc = 0x1A4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F50u, 0x1A4F18u, 0x1A4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F20u;
label_1a4f20:
    // 0x1a4f20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4F20u;
    {
        const bool branch_taken_0x1a4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f20) {
            ctx->pc = 0x1A4F34u;
            goto label_1a4f34;
        }
    }
    ctx->pc = 0x1A4F28u;
label_1a4f28:
    // 0x1a4f28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f2c: 0xc068b60  jal         func_1A2D80
    ctx->pc = 0x1A4F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F34u);
    ctx->pc = 0x1A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D80u, 0x1A4F2Cu, 0x1A4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F34u;
label_1a4f34:
    // 0x1a4f34: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a4f34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F4Cu;
}
