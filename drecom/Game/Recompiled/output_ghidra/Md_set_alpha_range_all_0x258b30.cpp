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

// Function: Md_set_alpha_range_all
// Address: 0x258b30 - 0x258b90
void Md_set_alpha_range_all_0x258b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_alpha_range_all_0x258b30");
#endif

    switch (ctx->pc) {
        case 0x258b54u: goto label_258b54;
        case 0x258b6cu: goto label_258b6c;
        default: break;
    }

    ctx->pc = 0x258b30u;

    // 0x258b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258b34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258b3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x258b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x258b40: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x258b40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x258b44: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x258b44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x258b48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258b48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258b4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x258B4Cu;
    {
        const bool branch_taken_0x258b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b4c) {
            ctx->pc = 0x258B70u;
            goto label_258b70;
        }
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x258b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258b58: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x258b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258b5c: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x258b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258b60: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x258b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258b64: 0xc0962e4  jal         func_258B90
    ctx->pc = 0x258B64u;
    SET_GPR_U32(ctx, 31, 0x258B6Cu);
    ctx->pc = 0x258B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B90u, 0x258B64u, 0x258B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B6Cu;
label_258b6c:
    // 0x258b6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258b70:
    // 0x258b70: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258b74: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258B74u;
    {
        const bool branch_taken_0x258b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258b74) {
            ctx->pc = 0x258B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258b54;
        }
    }
    ctx->pc = 0x258B7Cu;
    // 0x258b7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258b7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258b88: 0x3e00008  jr          $ra
    ctx->pc = 0x258B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B90u;
}
