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

// Function: Em00_R1_ikaku
// Address: 0x2d2dd0 - 0x2d2ecc
void Em00_R1_ikaku_0x2d2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_ikaku_0x2d2dd0");
#endif

    switch (ctx->pc) {
        case 0x2d2e24u: goto label_2d2e24;
        case 0x2d2e70u: goto label_2d2e70;
        case 0x2d2e7cu: goto label_2d2e7c;
        default: break;
    }

    ctx->pc = 0x2d2dd0u;

    // 0x2d2dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2dd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2dd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d2ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2de0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d2de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2de4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d2de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d2de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2dec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2DECu;
    {
        const bool branch_taken_0x2d2dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d2dec) {
            ctx->pc = 0x2D2E34u;
            goto label_2d2e34;
        }
    }
    ctx->pc = 0x2D2DF4u;
    // 0x2d2df4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2DF4u;
    {
        const bool branch_taken_0x2d2df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2df4) {
            ctx->pc = 0x2D2E04u;
            goto label_2d2e04;
        }
    }
    ctx->pc = 0x2D2DFCu;
    // 0x2d2dfc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D2DFCu;
    {
        const bool branch_taken_0x2d2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2dfc) {
            ctx->pc = 0x2D2EBCu;
            goto label_2d2ebc;
        }
    }
    ctx->pc = 0x2D2E04u;
label_2d2e04:
    // 0x2d2e04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2e10: 0x24063c0d  addiu       $a2, $zero, 0x3C0D
    ctx->pc = 0x2d2e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15373));
    // 0x2d2e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2e1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2E1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2E1Cu, 0x2D2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E24u;
label_2d2e24:
    // 0x2d2e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e28: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2e30: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2e34:
    // 0x2d2e34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e38: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d2e3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2e40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2E40u;
    {
        const bool branch_taken_0x2d2e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e40) {
            ctx->pc = 0x2D2E70u;
            goto label_2d2e70;
        }
    }
    ctx->pc = 0x2D2E48u;
    // 0x2d2e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e4c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d2e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d2e54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d2e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d2e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2E58u;
    {
        const bool branch_taken_0x2d2e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e58) {
            ctx->pc = 0x2D2E70u;
            goto label_2d2e70;
        }
    }
    ctx->pc = 0x2D2E60u;
    // 0x2d2e60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d2e68: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D2E68u;
    SET_GPR_U32(ctx, 31, 0x2D2E70u);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D2E68u, 0x2D2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E70u;
label_2d2e70:
    // 0x2d2e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e74: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2E74u;
    SET_GPR_U32(ctx, 31, 0x2D2E7Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2E74u, 0x2D2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E7Cu;
label_2d2e7c:
    // 0x2d2e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2e84: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2E84u;
    {
        const bool branch_taken_0x2d2e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e84) {
            ctx->pc = 0x2D2EBCu;
            goto label_2d2ebc;
        }
    }
    ctx->pc = 0x2D2E8Cu;
    // 0x2d2e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2ea0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2ea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2ea8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2eac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2eb0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2eb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2eb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d2ebc:
    // 0x2d2ebc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d2ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2ec0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2ECCu;
}
