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

// Function: set_eff_em09_del_BlackLight
// Address: 0x3562c0 - 0x356350
void set_eff_em09_del_BlackLight_0x3562c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em09_del_BlackLight_0x3562c0");
#endif

    switch (ctx->pc) {
        case 0x3562f4u: goto label_3562f4;
        case 0x35632cu: goto label_35632c;
        default: break;
    }

    ctx->pc = 0x3562c0u;

    // 0x3562c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3562c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3562c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3562c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3562c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3562c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3562cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3562ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3562d0: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3562d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3562d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3562d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3562d8: 0x2463a690  addiu       $v1, $v1, -0x5970
    ctx->pc = 0x3562d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944400));
    // 0x3562dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3562dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3562e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3562e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA690u));
    // 0x3562e4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3562e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3562e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3562e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3562ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3562ECu;
    {
        const bool branch_taken_0x3562ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562ec) {
            ctx->pc = 0x356330u;
            goto label_356330;
        }
    }
    ctx->pc = 0x3562F4u;
label_3562f4:
    // 0x3562f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3562f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3562f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3562fc: 0x2442a6a0  addiu       $v0, $v0, -0x5960
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
    // 0x356300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x356300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x356304: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x356304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35630c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35630cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356310: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356314: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356318: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35631c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x35631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x356320: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x356320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356324: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x356324u;
    SET_GPR_U32(ctx, 31, 0x35632Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x356324u, 0x35632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35632Cu;
label_35632c:
    // 0x35632c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35632cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_356330:
    // 0x356330: 0x2e03001b  sltiu       $v1, $s0, 0x1B
    ctx->pc = 0x356330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x356334: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x356334u;
    {
        const bool branch_taken_0x356334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356334) {
            ctx->pc = 0x3562F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3562f4;
        }
    }
    ctx->pc = 0x35633Cu;
    // 0x35633c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35633cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356344: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x356344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x356348: 0x3e00008  jr          $ra
    ctx->pc = 0x356348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356350u;
}
