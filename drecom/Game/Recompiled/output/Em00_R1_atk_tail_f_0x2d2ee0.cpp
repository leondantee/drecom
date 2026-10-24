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

// Function: Em00_R1_atk_tail_f
// Address: 0x2d2ee0 - 0x2d2fa0
void Em00_R1_atk_tail_f_0x2d2ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_tail_f_0x2d2ee0");
#endif

    switch (ctx->pc) {
        case 0x2d2f34u: goto label_2d2f34;
        case 0x2d2f50u: goto label_2d2f50;
        default: break;
    }

    ctx->pc = 0x2d2ee0u;

    // 0x2d2ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2ee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2ee8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d2eec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2ef0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d2ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2ef4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d2ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d2ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2efc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2EFCu;
    {
        const bool branch_taken_0x2d2efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d2efc) {
            ctx->pc = 0x2D2F44u;
            goto label_2d2f44;
        }
    }
    ctx->pc = 0x2D2F04u;
    // 0x2d2f04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2F04u;
    {
        const bool branch_taken_0x2d2f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f04) {
            ctx->pc = 0x2D2F14u;
            goto label_2d2f14;
        }
    }
    ctx->pc = 0x2D2F0Cu;
    // 0x2d2f0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D2F0Cu;
    {
        const bool branch_taken_0x2d2f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f0c) {
            ctx->pc = 0x2D2F90u;
            goto label_2d2f90;
        }
    }
    ctx->pc = 0x2D2F14u;
label_2d2f14:
    // 0x2d2f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2f20: 0x24063c0c  addiu       $a2, $zero, 0x3C0C
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15372));
    // 0x2d2f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2f2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2F2Cu, 0x2D2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F34u;
label_2d2f34:
    // 0x2d2f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f38: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2f40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2f44:
    // 0x2d2f44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f48: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2F48u;
    SET_GPR_U32(ctx, 31, 0x2D2F50u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2F48u, 0x2D2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F50u;
label_2d2f50:
    // 0x2d2f50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2f58: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2F58u;
    {
        const bool branch_taken_0x2d2f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f58) {
            ctx->pc = 0x2D2F90u;
            goto label_2d2f90;
        }
    }
    ctx->pc = 0x2D2F60u;
    // 0x2d2f60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2f78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2f80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2f88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d2f90:
    // 0x2d2f90: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d2f90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2FA0u;
}
