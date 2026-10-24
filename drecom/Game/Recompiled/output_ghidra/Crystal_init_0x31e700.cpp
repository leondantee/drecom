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

// Function: Crystal_init
// Address: 0x31e700 - 0x31e798
void Crystal_init_0x31e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_init_0x31e700");
#endif

    switch (ctx->pc) {
        case 0x31e738u: goto label_31e738;
        case 0x31e748u: goto label_31e748;
        default: break;
    }

    ctx->pc = 0x31e700u;

    // 0x31e700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e704: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31e704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31e708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e70c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e70cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e710: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x31e710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x31e714: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x31e714u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x31e718: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31E718u;
    {
        const bool branch_taken_0x31e718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e718) {
            ctx->pc = 0x31E784u;
            goto label_31e784;
        }
    }
    ctx->pc = 0x31E720u;
    // 0x31e720: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e724: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31e724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31e728: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31e72c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e730: 0xa422af66  sh          $v0, -0x509A($at)
    ctx->pc = 0x31e730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF66u, _value); } while (0);
    // 0x31e734: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e734u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31e738:
    // 0x31e738: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31e73c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x31e73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e740: 0xc099794  jal         func_265E50
    ctx->pc = 0x31E740u;
    SET_GPR_U32(ctx, 31, 0x31E748u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x31E740u, 0x31E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e74c: 0xac22af6c  sw          $v0, -0x5094($at)
    ctx->pc = 0x31e74cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
    // 0x31e750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31e754: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x31e754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31e758: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31E758u;
    {
        const bool branch_taken_0x31e758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e758) {
            ctx->pc = 0x31E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e738;
        }
    }
    ctx->pc = 0x31E760u;
    // 0x31e760: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e764: 0x9423af66  lhu         $v1, -0x509A($at)
    ctx->pc = 0x31e764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31e768: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31e768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31e76c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x31e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e770: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e774: 0x8c23af6c  lw          $v1, -0x5094($at)
    ctx->pc = 0x31e774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31e778: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e77c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e780: 0xac23af6c  sw          $v1, -0x5094($at)
    ctx->pc = 0x31e780u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
label_31e784:
    // 0x31e784: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31e784u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e78c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31e78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e790: 0x3e00008  jr          $ra
    ctx->pc = 0x31E790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E798u;
}
