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

// Function: entry_00122f58
// Address: 0x122f58 - 0x123038
void entry_00122f58_0x122f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f58_0x122f58");
#endif

    switch (ctx->pc) {
        case 0x122f84u: goto label_122f84;
        case 0x122f90u: goto label_122f90;
        case 0x122f9cu: goto label_122f9c;
        case 0x122fa8u: goto label_122fa8;
        case 0x122fb4u: goto label_122fb4;
        case 0x122fc0u: goto label_122fc0;
        case 0x122fccu: goto label_122fcc;
        case 0x122ff0u: goto label_122ff0;
        default: break;
    }

    ctx->pc = 0x122f58u;

label_122f58:
    // 0x122f58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f5c:
    // 0x122f5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f60:
    // 0x122f60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x122f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_122f64:
    // 0x122f64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x122f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_122f68:
    // 0x122f68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x122f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_122f6c:
    // 0x122f6c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x122f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_122f70:
    // 0x122f70: 0x24424ef0  addiu       $v0, $v0, 0x4EF0
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
label_122f74:
    // 0x122f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_122f78:
    // 0x122f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122f7c:
    // 0x122f7c: 0x40f809  jalr        $v0
label_122f80:
    if (ctx->pc == 0x122F80u) {
        ctx->pc = 0x122F84u;
        goto label_122f84;
    }
    ctx->pc = 0x122F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122F84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F7Cu, 0x122F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122F84u;
label_122f84:
    // 0x122f84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f88:
    // 0x122f88: 0xc04d414  jal         func_135050
label_122f8c:
    if (ctx->pc == 0x122F8Cu) {
        ctx->pc = 0x122F90u;
        goto label_122f90;
    }
    ctx->pc = 0x122F88u;
    SET_GPR_U32(ctx, 31, 0x122F90u);
    ctx->pc = 0x135050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135050u, 0x122F88u, 0x122F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F90u;
label_122f90:
    // 0x122f90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f94:
    // 0x122f94: 0xc04d808  jal         func_136020
label_122f98:
    if (ctx->pc == 0x122F98u) {
        ctx->pc = 0x122F9Cu;
        goto label_122f9c;
    }
    ctx->pc = 0x122F94u;
    SET_GPR_U32(ctx, 31, 0x122F9Cu);
    ctx->pc = 0x136020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136020u, 0x122F94u, 0x122F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F9Cu;
label_122f9c:
    // 0x122f9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fa0:
    // 0x122fa0: 0xc04da7c  jal         func_1369F0
label_122fa4:
    if (ctx->pc == 0x122FA4u) {
        ctx->pc = 0x122FA8u;
        goto label_122fa8;
    }
    ctx->pc = 0x122FA0u;
    SET_GPR_U32(ctx, 31, 0x122FA8u);
    ctx->pc = 0x1369F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369F0u, 0x122FA0u, 0x122FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FA8u;
label_122fa8:
    // 0x122fa8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fac:
    // 0x122fac: 0xc04daf0  jal         func_136BC0
label_122fb0:
    if (ctx->pc == 0x122FB0u) {
        ctx->pc = 0x122FB4u;
        goto label_122fb4;
    }
    ctx->pc = 0x122FACu;
    SET_GPR_U32(ctx, 31, 0x122FB4u);
    ctx->pc = 0x136BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136BC0u, 0x122FACu, 0x122FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FB4u;
label_122fb4:
    // 0x122fb4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fb8:
    // 0x122fb8: 0xc04dd20  jal         func_137480
label_122fbc:
    if (ctx->pc == 0x122FBCu) {
        ctx->pc = 0x122FC0u;
        goto label_122fc0;
    }
    ctx->pc = 0x122FB8u;
    SET_GPR_U32(ctx, 31, 0x122FC0u);
    ctx->pc = 0x137480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137480u, 0x122FB8u, 0x122FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FC0u;
label_122fc0:
    // 0x122fc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fc4:
    // 0x122fc4: 0xc04e4ac  jal         func_1392B0
label_122fc8:
    if (ctx->pc == 0x122FC8u) {
        ctx->pc = 0x122FCCu;
        goto label_122fcc;
    }
    ctx->pc = 0x122FC4u;
    SET_GPR_U32(ctx, 31, 0x122FCCu);
    ctx->pc = 0x1392B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392B0u, 0x122FC4u, 0x122FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FCCu;
label_122fcc:
    // 0x122fcc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x122fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fd0:
    // 0x122fd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_122fd4:
    // 0x122fd4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_122fd8:
    // 0x122fd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x122fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_122fdc:
    // 0x122fdc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_122fe0:
    if (ctx->pc == 0x122FE0u) {
        ctx->pc = 0x122FE4u;
        goto label_122fe4;
    }
    ctx->pc = 0x122FDCu;
    {
        const bool branch_taken_0x122fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x122fdc) {
            ctx->pc = 0x123050u;
            return;
        }
    }
    ctx->pc = 0x122FE4u;
label_122fe4:
    // 0x122fe4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fe8:
    // 0x122fe8: 0xc0874e8  jal         func_21D3A0
label_122fec:
    if (ctx->pc == 0x122FECu) {
        ctx->pc = 0x122FF0u;
        goto label_122ff0;
    }
    ctx->pc = 0x122FE8u;
    SET_GPR_U32(ctx, 31, 0x122FF0u);
    ctx->pc = 0x21D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3A0u, 0x122FE8u, 0x122FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FF0u;
label_122ff0:
    // 0x122ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_122ff4:
    // 0x122ff4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_122ff8:
    // 0x122ff8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x122ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_122ffc:
    // 0x122ffc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_123000:
    if (ctx->pc == 0x123000u) {
        ctx->pc = 0x123004u;
        goto label_123004;
    }
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x123038u;
            return;
        }
    }
    ctx->pc = 0x123004u;
label_123004:
    // 0x123004: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123008:
    // 0x123008: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x123008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
label_12300c:
    // 0x12300c: 0x3c03e3ff  lui         $v1, 0xE3FF
    ctx->pc = 0x12300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58367 << 16));
label_123010:
    // 0x123010: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x123010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_123014:
    // 0x123014: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_123018:
    // 0x123018: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x123018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_12301c:
    // 0x12301c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123020:
    // 0x123020: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
label_123024:
    // 0x123024: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x123024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_123028:
    // 0x123028: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x123028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_12302c:
    // 0x12302c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12302cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_123030:
    // 0x123030: 0x10000007  b           . + 4 + (0x7 << 2)
label_123034:
    if (ctx->pc == 0x123034u) {
        ctx->pc = 0x123038u;
        goto label_fallthrough_0x123030;
    }
    ctx->pc = 0x123030u;
    {
        const bool branch_taken_0x123030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123030) {
            ctx->pc = 0x123050u;
            return;
        }
    }
label_fallthrough_0x123030:
    ctx->pc = 0x123038u;
}
