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

// Function: entry_00145db4
// Address: 0x145db4 - 0x145ee0
void entry_00145db4_0x145db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145db4_0x145db4");
#endif

    switch (ctx->pc) {
        case 0x145dc8u: goto label_145dc8;
        case 0x145de0u: goto label_145de0;
        case 0x145df8u: goto label_145df8;
        case 0x145e04u: goto label_145e04;
        case 0x145e14u: goto label_145e14;
        case 0x145e2cu: goto label_145e2c;
        case 0x145e3cu: goto label_145e3c;
        case 0x145e4cu: goto label_145e4c;
        case 0x145e60u: goto label_145e60;
        case 0x145e70u: goto label_145e70;
        case 0x145e80u: goto label_145e80;
        case 0x145e90u: goto label_145e90;
        default: break;
    }

    ctx->pc = 0x145db4u;

    // 0x145db4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145db8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dbc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x145dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dc0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x145DC0u, 0x145DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC8u;
label_145dc8:
    // 0x145dc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dcc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dd0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dd4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145dd8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145DD8u;
    SET_GPR_U32(ctx, 31, 0x145DE0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145DD8u, 0x145DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE0u;
label_145de0:
    // 0x145de0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145de4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145de8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x145de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x145decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145df0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x145DF0u;
    SET_GPR_U32(ctx, 31, 0x145DF8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x145DF0u, 0x145DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DF8u;
label_145df8:
    // 0x145df8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145dfc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x145DFCu;
    SET_GPR_U32(ctx, 31, 0x145E04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x145DFCu, 0x145E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E04u;
label_145e04:
    // 0x145e04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e08: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145e0c: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x145E0Cu;
    SET_GPR_U32(ctx, 31, 0x145E14u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x145E0Cu, 0x145E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E14u;
label_145e14:
    // 0x145e14: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x145E14u;
    {
        const bool branch_taken_0x145e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e14) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E1Cu;
    // 0x145e1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e20: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145e24: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x145E24u;
    SET_GPR_U32(ctx, 31, 0x145E2Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x145E24u, 0x145E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E2Cu;
label_145e2c:
    // 0x145e2c: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x145E2Cu;
    {
        const bool branch_taken_0x145e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e2c) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E34u;
    // 0x145e34: 0xc058410  jal         func_161040
    ctx->pc = 0x145E34u;
    SET_GPR_U32(ctx, 31, 0x145E3Cu);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x145E34u, 0x145E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x145E3Cu;
    {
        const bool branch_taken_0x145e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e3c) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E44u;
    // 0x145e44: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145E44u;
    SET_GPR_U32(ctx, 31, 0x145E4Cu);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145E44u, 0x145E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E4Cu;
label_145e4c:
    // 0x145e4c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x145E4Cu;
    {
        const bool branch_taken_0x145e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e4c) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E54u;
    // 0x145e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145e58: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145E58u;
    SET_GPR_U32(ctx, 31, 0x145E60u);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145E58u, 0x145E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E60u;
label_145e60:
    // 0x145e60: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x145E60u;
    {
        const bool branch_taken_0x145e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e60) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E68u;
    // 0x145e68: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x145E70u;
    {
        const bool branch_taken_0x145e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e70) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E78u;
    // 0x145e78: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x145E78u;
    SET_GPR_U32(ctx, 31, 0x145E80u);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x145E78u, 0x145E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E80u;
label_145e80:
    // 0x145e80: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x145E80u;
    {
        const bool branch_taken_0x145e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e80) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E88u;
    // 0x145e88: 0xc058478  jal         func_1611E0
    ctx->pc = 0x145E88u;
    SET_GPR_U32(ctx, 31, 0x145E90u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x145E88u, 0x145E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E90u;
label_145e90:
    // 0x145e90: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x145E90u;
    {
        const bool branch_taken_0x145e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e90) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145E98u;
    // 0x145e98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e9c: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ea0: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x145ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145ea8: 0x0  nop
    ctx->pc = 0x145ea8u;
    // NOP
    // 0x145eac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145eacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145eb0: 0x0  nop
    ctx->pc = 0x145eb0u;
    // NOP
    // 0x145eb4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x145EB4u;
    {
        const bool branch_taken_0x145eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145eb4) {
            ctx->pc = 0x145EE0u;
            return;
        }
    }
    ctx->pc = 0x145EBCu;
    // 0x145ebc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x145ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x145ec0: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x145ec4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x145ec8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x145EC8u;
    {
        const bool branch_taken_0x145ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ec8) {
            ctx->pc = 0x145F48u;
            return;
        }
    }
    ctx->pc = 0x145ED0u;
    // 0x145ed0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ed4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x145ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x145ed8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x145ED8u;
    {
        const bool branch_taken_0x145ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ed8) {
            ctx->pc = 0x145F48u;
            return;
        }
    }
    ctx->pc = 0x145EE0u;
}
