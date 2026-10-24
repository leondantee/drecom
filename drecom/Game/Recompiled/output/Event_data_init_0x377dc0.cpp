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

// Function: Event_data_init
// Address: 0x377dc0 - 0x377e50
void Event_data_init_0x377dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_data_init_0x377dc0");
#endif

    switch (ctx->pc) {
        case 0x377e00u: goto label_377e00;
        case 0x377e1cu: goto label_377e1c;
        default: break;
    }

    ctx->pc = 0x377dc0u;

    // 0x377dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x377dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x377dc4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x377dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x377dc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x377dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377dd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377ddc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x377ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x377de0: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x377de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x377de4: 0x8e831a14  lw          $v1, 0x1A14($s4)
    ctx->pc = 0x377de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x377de8: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x377de8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x377dec: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x377decu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x377df0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x377df0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x377df4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x377df4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377df8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x377DF8u;
    {
        const bool branch_taken_0x377df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377df8) {
            ctx->pc = 0x377E20u;
            goto label_377e20;
        }
    }
    ctx->pc = 0x377E00u;
label_377e00:
    // 0x377e00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x377e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377e04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x377e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377e08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x377e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x377e0c: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x377e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377e10: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x377e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x377e14: 0xc0ddf94  jal         func_377E50
    ctx->pc = 0x377E14u;
    SET_GPR_U32(ctx, 31, 0x377E1Cu);
    ctx->pc = 0x377E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377E50u, 0x377E14u, 0x377E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E1Cu;
label_377e1c:
    // 0x377e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_377e20:
    // 0x377e20: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x377e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x377e24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x377E24u;
    {
        const bool branch_taken_0x377e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377e24) {
            ctx->pc = 0x377E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377e00;
        }
    }
    ctx->pc = 0x377E2Cu;
    // 0x377e2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x377e2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377e44: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x377e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x377e48: 0x3e00008  jr          $ra
    ctx->pc = 0x377E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377E50u;
}
