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

// Function: entry_00104f6c
// Address: 0x104f6c - 0x104fec
void entry_00104f6c_0x104f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f6c_0x104f6c");
#endif

    ctx->pc = 0x104f6cu;

label_104f6c:
    // 0x104f6c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x104f6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104f70: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x104f70u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104f74: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x104f74u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x104f78: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x104f78u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x104f7c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x104f7cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x104f80: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x104f80u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x104f84: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x104f84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x104f88: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x104f88u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x104f8c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x104f8cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x104f90: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x104f90u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x104f94: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x104f94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x104f98: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x104f98u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x104f9c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x104f9cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x104fa0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x104fa0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x104fa4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x104fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x104fa8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x104fa8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x104fac: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x104facu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x104fb0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x104fb0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x104fb4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x104fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x104fb8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x104fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x104fbc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x104fc0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x104fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x104fc4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x104FC4u;
    {
        const bool branch_taken_0x104fc4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x104FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FC4u;
        // 0x104fc8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fc4) {
            ctx->pc = 0x104F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f6c;
        }
    }
    ctx->pc = 0x104FCCu;
    // 0x104fcc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x104fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x104fd0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x104fd4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104fd8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x104fd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x104fdc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x104FDCu;
    {
        const bool branch_taken_0x104fdc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FDCu;
        // 0x104fe0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fdc) {
            ctx->pc = 0x104F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f6c;
        }
    }
    ctx->pc = 0x104FE4u;
    // 0x104fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x104FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104FECu;
}
