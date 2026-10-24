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

// Function: Cd_init
// Address: 0x1d8aa0 - 0x1d8b60
void Cd_init_0x1d8aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cd_init_0x1d8aa0");
#endif

    switch (ctx->pc) {
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b4cu: goto label_1d8b4c;
        default: break;
    }

    ctx->pc = 0x1d8aa0u;

    // 0x1d8aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8aa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d8aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d8aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d8aac:
    // 0x1d8aac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8ab0: 0x24440bc0  addiu       $a0, $v0, 0xBC0
    ctx->pc = 0x1d8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3008));
    // 0x1d8ab4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d8ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ab8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8abc: 0x24460be8  addiu       $a2, $v0, 0xBE8
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3048));
    // 0x1d8ac0: 0xc085dde  jal         func_217778
    ctx->pc = 0x1D8AC0u;
    SET_GPR_U32(ctx, 31, 0x1D8AC8u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x1D8AC8u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8AC8u) { return; }
    ctx->pc = 0x1D8AC8u;
label_1d8ac8:
    // 0x1d8ac8: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8AD0u;
label_1d8ad0:
    // 0x1d8ad0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ad4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8ad8: 0x3c021234  lui         $v0, 0x1234
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4660 << 16));
    // 0x1d8adc: 0x34455678  ori         $a1, $v0, 0x5678
    ctx->pc = 0x1d8adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22136);
    // 0x1d8ae0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8ae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ae4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x1D8AE4u;
    SET_GPR_U32(ctx, 31, 0x1D8AECu);
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x1D8AECu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8AECu) { return; }
    ctx->pc = 0x1D8AECu;
label_1d8aec:
    // 0x1d8aec: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8AECu;
    {
        const bool branch_taken_0x1d8aec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d8aec) {
            ctx->pc = 0x1D8B10u;
            goto label_1d8b10;
        }
    }
    ctx->pc = 0x1D8AF4u;
    // 0x1d8af4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8af8: 0x24440bf0  addiu       $a0, $v0, 0xBF0
    ctx->pc = 0x1d8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3056));
    // 0x1d8afc: 0xc046760  jal         func_119D80
    ctx->pc = 0x1D8AFCu;
    SET_GPR_U32(ctx, 31, 0x1D8B04u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1D8B04u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8B04u) { return; }
    ctx->pc = 0x1D8B04u;
label_1d8b04:
    // 0x1d8b04: 0x0  nop
    ctx->pc = 0x1d8b04u;
    // NOP
label_1d8b08:
    // 0x1d8b08: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x1D8B08u;
    {
        const bool branch_taken_0x1d8b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b08) {
            ctx->pc = 0x1D8B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0x24102710  addiu       $s0, $zero, 0x2710
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1d8b14: 0x0  nop
    ctx->pc = 0x1d8b14u;
    // NOP
label_1d8b18:
    // 0x1d8b18: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1d8b18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8b1c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8b20: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b18;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8b2c: 0x8c22c3e4  lw          $v0, -0x3C1C($at)
    ctx->pc = 0x1d8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC3E4u));
    // 0x1d8b30: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D8B30u;
    {
        const bool branch_taken_0x1d8b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b30) {
            ctx->pc = 0x1D8AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ad0;
        }
    }
    ctx->pc = 0x1D8B38u;
    // 0x1d8b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8b3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d8b3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8b40: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d8b44: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D8B44u;
    SET_GPR_U32(ctx, 31, 0x1D8B4Cu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D8B44u, 0x1D8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B4Cu;
label_1d8b4c:
    // 0x1d8b4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d8b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B60u;
}
