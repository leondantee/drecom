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

// Function: Em01_R1_dm_yoroke
// Address: 0x306d80 - 0x306e6c
void Em01_R1_dm_yoroke_0x306d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_dm_yoroke_0x306d80");
#endif

    switch (ctx->pc) {
        case 0x306dd4u: goto label_306dd4;
        case 0x306df4u: goto label_306df4;
        case 0x306e00u: goto label_306e00;
        case 0x306e10u: goto label_306e10;
        case 0x306e1cu: goto label_306e1c;
        default: break;
    }

    ctx->pc = 0x306d80u;

    // 0x306d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306d84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x306d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x306d88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x306d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x306d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306d90: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x306d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306d94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x306d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306d9c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x306D9Cu;
    {
        const bool branch_taken_0x306d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306d9c) {
            ctx->pc = 0x306DE4u;
            goto label_306de4;
        }
    }
    ctx->pc = 0x306DA4u;
    // 0x306da4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306DA4u;
    {
        const bool branch_taken_0x306da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306da4) {
            ctx->pc = 0x306DB4u;
            goto label_306db4;
        }
    }
    ctx->pc = 0x306DACu;
    // 0x306dac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x306DACu;
    {
        const bool branch_taken_0x306dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306dac) {
            ctx->pc = 0x306E5Cu;
            goto label_306e5c;
        }
    }
    ctx->pc = 0x306DB4u;
label_306db4:
    // 0x306db4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306db8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306dbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306dc0: 0x24063c42  addiu       $a2, $zero, 0x3C42
    ctx->pc = 0x306dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15426));
    // 0x306dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306dc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306dcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306DCCu;
    SET_GPR_U32(ctx, 31, 0x306DD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306DCCu, 0x306DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DD4u;
label_306dd4:
    // 0x306dd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306dd8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306de0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306de4:
    // 0x306de4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306de8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306DECu;
    SET_GPR_U32(ctx, 31, 0x306DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306DECu, 0x306DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF4u;
label_306df4:
    // 0x306df4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306df8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306DF8u;
    SET_GPR_U32(ctx, 31, 0x306E00u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306DF8u, 0x306E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E00u;
label_306e00:
    // 0x306e00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306e08: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306E08u;
    SET_GPR_U32(ctx, 31, 0x306E10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306E08u, 0x306E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E10u;
label_306e10:
    // 0x306e10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e14: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306E14u;
    SET_GPR_U32(ctx, 31, 0x306E1Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306E14u, 0x306E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E1Cu;
label_306e1c:
    // 0x306e1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306e24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306E24u;
    {
        const bool branch_taken_0x306e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306e24) {
            ctx->pc = 0x306E5Cu;
            goto label_306e5c;
        }
    }
    ctx->pc = 0x306E2Cu;
    // 0x306e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306e30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306e3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306e54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_306e5c:
    // 0x306e5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x306e5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306e60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x306e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x306e64: 0x3e00008  jr          $ra
    ctx->pc = 0x306E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306E6Cu;
}
