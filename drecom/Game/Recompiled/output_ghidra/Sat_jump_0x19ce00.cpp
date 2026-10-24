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

// Function: Sat_jump
// Address: 0x19ce00 - 0x19ce68
void Sat_jump_0x19ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_jump_0x19ce00");
#endif

    switch (ctx->pc) {
        case 0x19ce20u: goto label_19ce20;
        default: break;
    }

    ctx->pc = 0x19ce00u;

    // 0x19ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ce04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19ce08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ce0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19ce10: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x19ce10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ce14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ce18: 0xc055574  jal         func_1555D0
    ctx->pc = 0x19CE18u;
    SET_GPR_U32(ctx, 31, 0x19CE20u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x19CE18u, 0x19CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE20u;
label_19ce20:
    // 0x19ce20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CE20u;
    {
        const bool branch_taken_0x19ce20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce20) {
            ctx->pc = 0x19CE34u;
            goto label_19ce34;
        }
    }
    ctx->pc = 0x19CE28u;
    // 0x19ce28: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19ce28u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ce2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19CE2Cu;
    {
        const bool branch_taken_0x19ce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce2c) {
            ctx->pc = 0x19CE54u;
            goto label_19ce54;
        }
    }
    ctx->pc = 0x19CE34u;
label_19ce34:
    // 0x19ce34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ce38: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x19ce3c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19ce40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ce44: 0xac2295b4  sw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ce44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195B4u, _value); } while (0);
    // 0x19ce48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ce4c: 0xac3095bc  sw          $s0, -0x6A44($at)
    ctx->pc = 0x19ce4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6195BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195BCu, _value); } while (0);
    // 0x19ce50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ce54:
    // 0x19ce54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19ce54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ce58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ce58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ce60: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE68u;
}
