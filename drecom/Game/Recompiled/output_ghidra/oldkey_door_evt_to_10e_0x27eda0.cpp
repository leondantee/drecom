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

// Function: oldkey_door_evt_to_10e
// Address: 0x27eda0 - 0x27ee18
void oldkey_door_evt_to_10e_0x27eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oldkey_door_evt_to_10e_0x27eda0");
#endif

    switch (ctx->pc) {
        case 0x27edc4u: goto label_27edc4;
        case 0x27edd8u: goto label_27edd8;
        case 0x27edf4u: goto label_27edf4;
        case 0x27edfcu: goto label_27edfc;
        case 0x27ee04u: goto label_27ee04;
        default: break;
    }

    ctx->pc = 0x27eda0u;

    // 0x27eda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27eda4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27eda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27edac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27edacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27edb0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x27edb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x27edb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27edb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27edb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27edbc: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x27EDBCu;
    SET_GPR_U32(ctx, 31, 0x27EDC4u);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x27EDBCu, 0x27EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDC4u;
label_27edc4:
    // 0x27edc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27edc8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27EDC8u;
    {
        const bool branch_taken_0x27edc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27edc8) {
            ctx->pc = 0x27EDE0u;
            goto label_27ede0;
        }
    }
    ctx->pc = 0x27EDD0u;
    // 0x27edd0: 0xc09fb88  jal         func_27EE20
    ctx->pc = 0x27EDD0u;
    SET_GPR_U32(ctx, 31, 0x27EDD8u);
    ctx->pc = 0x27EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EE20u, 0x27EDD0u, 0x27EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDD8u;
label_27edd8:
    // 0x27edd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27EDD8u;
    {
        const bool branch_taken_0x27edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27edd8) {
            ctx->pc = 0x27EDFCu;
            goto label_27edfc;
        }
    }
    ctx->pc = 0x27EDE0u;
label_27ede0:
    // 0x27ede0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ede4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ede4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ede8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ede8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27edec: 0xc0ce188  jal         func_338620
    ctx->pc = 0x27EDECu;
    SET_GPR_U32(ctx, 31, 0x27EDF4u);
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x27EDECu, 0x27EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDF4u;
label_27edf4:
    // 0x27edf4: 0xc09fba8  jal         func_27EEA0
    ctx->pc = 0x27EDF4u;
    SET_GPR_U32(ctx, 31, 0x27EDFCu);
    ctx->pc = 0x27EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EEA0u, 0x27EDF4u, 0x27EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDFCu;
label_27edfc:
    // 0x27edfc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27EDFCu;
    SET_GPR_U32(ctx, 31, 0x27EE04u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27EDFCu, 0x27EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE04u;
label_27ee04:
    // 0x27ee04: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ee04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ee08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE18u;
}
