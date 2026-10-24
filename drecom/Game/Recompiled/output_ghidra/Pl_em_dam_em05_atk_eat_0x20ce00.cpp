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

// Function: Pl_em_dam_em05_atk_eat
// Address: 0x20ce00 - 0x20cff8
void Pl_em_dam_em05_atk_eat_0x20ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em05_atk_eat_0x20ce00");
#endif

    switch (ctx->pc) {
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce88u: goto label_20ce88;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cf1cu: goto label_20cf1c;
        case 0x20cf38u: goto label_20cf38;
        case 0x20cf44u: goto label_20cf44;
        default: break;
    }

    ctx->pc = 0x20ce00u;

    // 0x20ce00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ce04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x20ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20ce08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ce0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ce10: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x20ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x20ce14: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x20ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x20ce18: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x20ce1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce20: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x20ce20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x20ce24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce28: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20ce28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ce2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20ce2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20ce30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce34: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20CE34u;
    {
        const bool branch_taken_0x20ce34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ce34) {
            ctx->pc = 0x20CEA0u;
            goto label_20cea0;
        }
    }
    ctx->pc = 0x20CE3Cu;
    // 0x20ce3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CE3Cu;
    {
        const bool branch_taken_0x20ce3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce3c) {
            ctx->pc = 0x20CE4Cu;
            goto label_20ce4c;
        }
    }
    ctx->pc = 0x20CE44u;
    // 0x20ce44: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x20CE44u;
    {
        const bool branch_taken_0x20ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce44) {
            ctx->pc = 0x20CFE0u;
            goto label_20cfe0;
        }
    }
    ctx->pc = 0x20CE4Cu;
label_20ce4c:
    // 0x20ce4c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ce50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce54: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20ce54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ce58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce5c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20ce60: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x20ce64: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20ce68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ce6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20CE6Cu;
    SET_GPR_U32(ctx, 31, 0x20CE74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20CE6Cu, 0x20CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE74u;
label_20ce74:
    // 0x20ce74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce78: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20ce7c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20ce80: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x20CE80u;
    SET_GPR_U32(ctx, 31, 0x20CE88u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x20CE80u, 0x20CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE88u;
label_20ce88:
    // 0x20ce88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce8c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20ce90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20ce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ce98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ce9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20ce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20cea0:
    // 0x20cea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cea8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20ceac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20ceb0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20ceb4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ceb8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20cebc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20CEBCu;
    SET_GPR_U32(ctx, 31, 0x20CEC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20CEBCu, 0x20CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEC4u;
label_20cec4:
    // 0x20cec4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cec8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20cecc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ced0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ced0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ced4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20CED4u;
    SET_GPR_U32(ctx, 31, 0x20CEDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20CED4u, 0x20CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEDCu;
label_20cedc:
    // 0x20cedc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cee0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cee4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cee8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20CEE8u;
    SET_GPR_U32(ctx, 31, 0x20CEF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20CEE8u, 0x20CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cef4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20cef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20cef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cefc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20cf00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CF00u;
    {
        const bool branch_taken_0x20cf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf00) {
            ctx->pc = 0x20CF24u;
            goto label_20cf24;
        }
    }
    ctx->pc = 0x20CF08u;
    // 0x20cf08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20cf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cf0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20cf14: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20CF14u;
    SET_GPR_U32(ctx, 31, 0x20CF1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20CF14u, 0x20CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF1Cu;
label_20cf1c:
    // 0x20cf1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20CF1Cu;
    {
        const bool branch_taken_0x20cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf1c) {
            ctx->pc = 0x20CF38u;
            goto label_20cf38;
        }
    }
    ctx->pc = 0x20CF24u;
label_20cf24:
    // 0x20cf24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20cf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cf28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf30: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20CF30u;
    SET_GPR_U32(ctx, 31, 0x20CF38u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20CF30u, 0x20CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF38u;
label_20cf38:
    // 0x20cf38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20CF3Cu, 0x20CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20cf48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20cf4c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20CF4Cu;
    {
        const bool branch_taken_0x20cf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf4c) {
            ctx->pc = 0x20CFE0u;
            goto label_20cfe0;
        }
    }
    ctx->pc = 0x20CF54u;
    // 0x20cf54: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x20cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x20cf58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cf5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf60: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20cf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20cf64: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x20cf68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20cf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20cf6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cf6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cf70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf74: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x20cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x20cf78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20cf80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cf84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20cf90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20cf98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20cfa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfa4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20cfa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfac: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20cfacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cfb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfb4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20cfb8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20cfbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x20cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20cfc0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20cfc4: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x20cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x20cfc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x20cfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cfd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfd4: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x20cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x20cfd8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20CFD8u;
    {
        const bool branch_taken_0x20cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfd8) {
            ctx->pc = 0x20CFE0u;
            goto label_20cfe0;
        }
    }
    ctx->pc = 0x20CFE0u;
label_20cfe0:
    // 0x20cfe0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x20cfe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cfe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cfe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cfec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20cff0: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CFF8u;
}
