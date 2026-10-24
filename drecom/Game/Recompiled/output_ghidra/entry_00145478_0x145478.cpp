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

// Function: entry_00145478
// Address: 0x145478 - 0x1455e8
void entry_00145478_0x145478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145478_0x145478");
#endif

    switch (ctx->pc) {
        case 0x145484u: goto label_145484;
        case 0x14549cu: goto label_14549c;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454c0u: goto label_1454c0;
        case 0x1454d0u: goto label_1454d0;
        case 0x1454e8u: goto label_1454e8;
        case 0x1454f8u: goto label_1454f8;
        case 0x145508u: goto label_145508;
        case 0x14551cu: goto label_14551c;
        case 0x14552cu: goto label_14552c;
        case 0x14553cu: goto label_14553c;
        case 0x14554cu: goto label_14554c;
        default: break;
    }

    ctx->pc = 0x145478u;

    // 0x145478: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14547c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14547Cu;
    SET_GPR_U32(ctx, 31, 0x145484u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14547Cu, 0x145484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145484u;
label_145484:
    // 0x145484: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145488: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14548c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145490: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145494: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145494u;
    SET_GPR_U32(ctx, 31, 0x14549Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145494u, 0x14549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14549Cu;
label_14549c:
    // 0x14549c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1454a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1454a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454a4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1454a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1454a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1454a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1454ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1454ACu;
    SET_GPR_U32(ctx, 31, 0x1454B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1454ACu, 0x1454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B4u;
label_1454b4:
    // 0x1454b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1454b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1454b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1454B8u;
    SET_GPR_U32(ctx, 31, 0x1454C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1454B8u, 0x1454C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454C0u;
label_1454c0:
    // 0x1454c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454c4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1454c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1454c8: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1454C8u;
    SET_GPR_U32(ctx, 31, 0x1454D0u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1454C8u, 0x1454D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454D0u;
label_1454d0:
    // 0x1454d0: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1454D0u;
    {
        const bool branch_taken_0x1454d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454d0) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x1454D8u;
    // 0x1454d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454dc: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1454dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1454e0: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x1454E0u;
    SET_GPR_U32(ctx, 31, 0x1454E8u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x1454E0u, 0x1454E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454E8u;
label_1454e8:
    // 0x1454e8: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1454E8u;
    {
        const bool branch_taken_0x1454e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454e8) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x1454F0u;
    // 0x1454f0: 0xc058410  jal         func_161040
    ctx->pc = 0x1454F0u;
    SET_GPR_U32(ctx, 31, 0x1454F8u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x1454F0u, 0x1454F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454F8u;
label_1454f8:
    // 0x1454f8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145500u;
    // 0x145500: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145500u;
    SET_GPR_U32(ctx, 31, 0x145508u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145500u, 0x145508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145508u;
label_145508:
    // 0x145508: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x145508u;
    {
        const bool branch_taken_0x145508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145508) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145510u;
    // 0x145510: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145514: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145514u;
    SET_GPR_U32(ctx, 31, 0x14551Cu);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145514u, 0x14551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14551Cu;
label_14551c:
    // 0x14551c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14551Cu;
    {
        const bool branch_taken_0x14551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14551c) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145524u;
    // 0x145524: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145524u;
    SET_GPR_U32(ctx, 31, 0x14552Cu);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145524u, 0x14552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14552Cu;
label_14552c:
    // 0x14552c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14552Cu;
    {
        const bool branch_taken_0x14552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14552c) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145534u;
    // 0x145534: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x145534u;
    SET_GPR_U32(ctx, 31, 0x14553Cu);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x145534u, 0x14553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14553Cu;
label_14553c:
    // 0x14553c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14553Cu;
    {
        const bool branch_taken_0x14553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14553c) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145544u;
    // 0x145544: 0xc058478  jal         func_1611E0
    ctx->pc = 0x145544u;
    SET_GPR_U32(ctx, 31, 0x14554Cu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x145544u, 0x14554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14554Cu;
label_14554c:
    // 0x14554c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14554Cu;
    {
        const bool branch_taken_0x14554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14554c) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145554u;
    // 0x145554: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145558: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14555c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x14555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145564: 0x0  nop
    ctx->pc = 0x145564u;
    // NOP
    // 0x145568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14556c: 0x0  nop
    ctx->pc = 0x14556cu;
    // NOP
    // 0x145570: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x145570u;
    {
        const bool branch_taken_0x145570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145570) {
            ctx->pc = 0x145624u;
            return;
        }
    }
    ctx->pc = 0x145578u;
    // 0x145578: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14557c: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x14557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145580: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x145584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145588: 0x0  nop
    ctx->pc = 0x145588u;
    // NOP
    // 0x14558c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14558cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145590: 0x0  nop
    ctx->pc = 0x145590u;
    // NOP
    // 0x145594: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x145594u;
    {
        const bool branch_taken_0x145594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145594) {
            ctx->pc = 0x1455E8u;
            return;
        }
    }
    ctx->pc = 0x14559Cu;
    // 0x14559c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1455a0: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x1455a4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1455a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1455a8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1455A8u;
    {
        const bool branch_taken_0x1455a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1455a8) {
            ctx->pc = 0x1455E8u;
            return;
        }
    }
    ctx->pc = 0x1455B0u;
    // 0x1455b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1455b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1455bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1455c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1455c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1455ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1455d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1455d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1455d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1455dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1455e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1455E0u;
    {
        const bool branch_taken_0x1455e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455e0) {
            ctx->pc = 0x145618u;
            return;
        }
    }
    ctx->pc = 0x1455E8u;
}
