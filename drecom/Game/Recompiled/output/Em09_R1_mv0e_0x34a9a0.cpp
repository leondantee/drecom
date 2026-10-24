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

// Function: Em09_R1_mv0e
// Address: 0x34a9a0 - 0x34ab64
void Em09_R1_mv0e_0x34a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0e_0x34a9a0");
#endif

    switch (ctx->pc) {
        case 0x34aa20u: goto label_34aa20;
        case 0x34aa5cu: goto label_34aa5c;
        case 0x34aab0u: goto label_34aab0;
        case 0x34aae4u: goto label_34aae4;
        case 0x34ab10u: goto label_34ab10;
        case 0x34ab28u: goto label_34ab28;
        case 0x34ab34u: goto label_34ab34;
        case 0x34ab44u: goto label_34ab44;
        case 0x34ab50u: goto label_34ab50;
        default: break;
    }

    ctx->pc = 0x34a9a0u;

    // 0x34a9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a9a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34a9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a9ac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34a9b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9b4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34a9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34a9b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9bc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a9c0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34a9c4: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x34a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x34a9c8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34a9cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34a9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34a9d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34a9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34a9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a9dc: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x34A9DCu;
    {
        const bool branch_taken_0x34a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a9dc) {
            ctx->pc = 0x34AA90u;
            goto label_34aa90;
        }
    }
    ctx->pc = 0x34A9E4u;
    // 0x34a9e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A9E4u;
    {
        const bool branch_taken_0x34a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a9e4) {
            ctx->pc = 0x34A9F4u;
            goto label_34a9f4;
        }
    }
    ctx->pc = 0x34A9ECu;
    // 0x34a9ec: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x34A9ECu;
    {
        const bool branch_taken_0x34a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a9ec) {
            ctx->pc = 0x34AB50u;
            goto label_34ab50;
        }
    }
    ctx->pc = 0x34A9F4u;
label_34a9f4:
    // 0x34a9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a9f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9fc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34aa00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34aa0c: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x34aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x34aa10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34aa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34aa14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34aa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34aa18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AA18u;
    SET_GPR_U32(ctx, 31, 0x34AA20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AA18u, 0x34AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA20u;
label_34aa20:
    // 0x34aa20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa24: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34aa28: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34aa2c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34aa30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aa34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34aa38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34aa3c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x34aa40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aa48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa50: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34aa54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34AA54u;
    SET_GPR_U32(ctx, 31, 0x34AA5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34AA54u, 0x34AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA5Cu;
label_34aa5c:
    // 0x34aa5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34aa60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34aa64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AA64u;
    {
        const bool branch_taken_0x34aa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa64) {
            ctx->pc = 0x34AA84u;
            goto label_34aa84;
        }
    }
    ctx->pc = 0x34AA6Cu;
    // 0x34aa6c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34aa70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34aa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34aa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34aa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aa78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa80: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34aa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34aa84:
    // 0x34aa84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa8c: 0xa44000c2  sh          $zero, 0xC2($v0)
    ctx->pc = 0x34aa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 0));
label_34aa90:
    // 0x34aa90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aa9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaa0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x34aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aaa4: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x34aaa4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34aaa8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AAA8u;
    SET_GPR_U32(ctx, 31, 0x34AAB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AAA8u, 0x34AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAB0u;
label_34aab0:
    // 0x34aab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aab4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34aab8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aabc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aac0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x34aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x34aac4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34aac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34aac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34aacc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34aad0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34aad4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34aad8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34aadc: 0xc05c848  jal         func_172120
    ctx->pc = 0x34AADCu;
    SET_GPR_U32(ctx, 31, 0x34AAE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34AADCu, 0x34AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAE4u;
label_34aae4:
    // 0x34aae4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34aae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aaf0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x34aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aaf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaf8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aafc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ab00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34ab00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34ab04: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x34ab04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34ab08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AB08u;
    SET_GPR_U32(ctx, 31, 0x34AB10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AB08u, 0x34AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB10u;
label_34ab10:
    // 0x34ab10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ab18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ab1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ab20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34AB20u;
    SET_GPR_U32(ctx, 31, 0x34AB28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34AB20u, 0x34AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB28u;
label_34ab28:
    // 0x34ab28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AB2Cu;
    SET_GPR_U32(ctx, 31, 0x34AB34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AB2Cu, 0x34AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB34u;
label_34ab34:
    // 0x34ab34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ab38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ab3c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AB3Cu;
    SET_GPR_U32(ctx, 31, 0x34AB44u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AB3Cu, 0x34AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB44u;
label_34ab44:
    // 0x34ab44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AB48u;
    SET_GPR_U32(ctx, 31, 0x34AB50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AB48u, 0x34AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB50u;
label_34ab50:
    // 0x34ab50: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34ab50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ab54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ab54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ab58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34ab5c: 0x3e00008  jr          $ra
    ctx->pc = 0x34AB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AB64u;
}
