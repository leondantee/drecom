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

// Function: entry_00130dc0
// Address: 0x130dc0 - 0x130eb0
void entry_00130dc0_0x130dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130dc0_0x130dc0");
#endif

    switch (ctx->pc) {
        case 0x130de4u: goto label_130de4;
        case 0x130dfcu: goto label_130dfc;
        case 0x130e10u: goto label_130e10;
        case 0x130e20u: goto label_130e20;
        case 0x130e2cu: goto label_130e2c;
        case 0x130e74u: goto label_130e74;
        default: break;
    }

    ctx->pc = 0x130dc0u;

    // 0x130dc0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130dc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130dc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dd4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x130dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130dd8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x130dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130ddc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130DDCu;
    SET_GPR_U32(ctx, 31, 0x130DE4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130DDCu, 0x130DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DE4u;
label_130de4:
    // 0x130de4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130de8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130df4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x130DF4u;
    SET_GPR_U32(ctx, 31, 0x130DFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130DF4u, 0x130DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DFCu;
label_130dfc:
    // 0x130dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e04: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x130e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130e08: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130E08u;
    SET_GPR_U32(ctx, 31, 0x130E10u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130E08u, 0x130E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E10u;
label_130e10:
    // 0x130e10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130e14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130e18: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130E18u;
    SET_GPR_U32(ctx, 31, 0x130E20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130E18u, 0x130E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E20u;
label_130e20:
    // 0x130e20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130E24u;
    SET_GPR_U32(ctx, 31, 0x130E2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130E24u, 0x130E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E2Cu;
label_130e2c:
    // 0x130e2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x130e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130e34: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x130E34u;
    {
        const bool branch_taken_0x130e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e34) {
            ctx->pc = 0x130FFCu;
            return;
        }
    }
    ctx->pc = 0x130E3Cu;
    // 0x130e3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e44: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x130e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x130e48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x130e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e50: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x130e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x130e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e58: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x130e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e60: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x130e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x130e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x130e6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x130E6Cu, 0x130E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E74u;
label_130e74:
    // 0x130e74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x130e78: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x130e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x130e7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x130e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130e80: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x130E80u;
    {
        const bool branch_taken_0x130e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e80) {
            ctx->pc = 0x130FB4u;
            return;
        }
    }
    ctx->pc = 0x130E88u;
    // 0x130e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130e8c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x130E8Cu;
    {
        const bool branch_taken_0x130e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e8c) {
            ctx->pc = 0x130F78u;
            return;
        }
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e98: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130EE8u;
            return;
        }
    }
    ctx->pc = 0x130EA0u;
    // 0x130ea0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130EA0u;
    {
        const bool branch_taken_0x130ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea0) {
            ctx->pc = 0x130EB0u;
            return;
        }
    }
    ctx->pc = 0x130EA8u;
    // 0x130ea8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x130EA8u;
    {
        const bool branch_taken_0x130ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea8) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130EB0u;
}
