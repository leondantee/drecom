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

// Function: entry_001462a4
// Address: 0x1462a4 - 0x1463b4
void entry_001462a4_0x1462a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001462a4_0x1462a4");
#endif

    switch (ctx->pc) {
        case 0x1462b8u: goto label_1462b8;
        case 0x1462ccu: goto label_1462cc;
        case 0x1462d8u: goto label_1462d8;
        case 0x1462e8u: goto label_1462e8;
        case 0x146300u: goto label_146300;
        case 0x146310u: goto label_146310;
        case 0x146320u: goto label_146320;
        case 0x146334u: goto label_146334;
        case 0x146344u: goto label_146344;
        case 0x146354u: goto label_146354;
        case 0x146364u: goto label_146364;
        default: break;
    }

    ctx->pc = 0x1462a4u;

    // 0x1462a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1462a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1462acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1462b0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1462B0u;
    SET_GPR_U32(ctx, 31, 0x1462B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1462B0u, 0x1462B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462B8u;
label_1462b8:
    // 0x1462b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1462b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1462bc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1462c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1462c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1462C4u;
    SET_GPR_U32(ctx, 31, 0x1462CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1462C4u, 0x1462CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462CCu;
label_1462cc:
    // 0x1462cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1462ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1462d0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1462D0u;
    SET_GPR_U32(ctx, 31, 0x1462D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1462D0u, 0x1462D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462D8u;
label_1462d8:
    // 0x1462d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462dc: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1462e0: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1462E0u;
    SET_GPR_U32(ctx, 31, 0x1462E8u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1462E0u, 0x1462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462E8u;
label_1462e8:
    // 0x1462e8: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1462E8u;
    {
        const bool branch_taken_0x1462e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462e8) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x1462F0u;
    // 0x1462f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462f4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1462f8: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x1462F8u;
    SET_GPR_U32(ctx, 31, 0x146300u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x1462F8u, 0x146300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146300u;
label_146300:
    // 0x146300: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x146300u;
    {
        const bool branch_taken_0x146300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146300) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x146308u;
    // 0x146308: 0xc058410  jal         func_161040
    ctx->pc = 0x146308u;
    SET_GPR_U32(ctx, 31, 0x146310u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x146308u, 0x146310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146310u;
label_146310:
    // 0x146310: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x146310u;
    {
        const bool branch_taken_0x146310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146310) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x146318u;
    // 0x146318: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x146318u;
    SET_GPR_U32(ctx, 31, 0x146320u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x146318u, 0x146320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146320u;
label_146320:
    // 0x146320: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x146320u;
    {
        const bool branch_taken_0x146320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146320) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x146328u;
    // 0x146328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14632c: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x14632Cu;
    SET_GPR_U32(ctx, 31, 0x146334u);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x14632Cu, 0x146334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146334u;
label_146334:
    // 0x146334: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x146334u;
    {
        const bool branch_taken_0x146334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146334) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x14633Cu;
    // 0x14633c: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x14633Cu;
    SET_GPR_U32(ctx, 31, 0x146344u);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x14633Cu, 0x146344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146344u;
label_146344:
    // 0x146344: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x146344u;
    {
        const bool branch_taken_0x146344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146344) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x14634Cu;
    // 0x14634c: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x14634Cu;
    SET_GPR_U32(ctx, 31, 0x146354u);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x14634Cu, 0x146354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146354u;
label_146354:
    // 0x146354: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x146354u;
    {
        const bool branch_taken_0x146354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146354) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x14635Cu;
    // 0x14635c: 0xc058478  jal         func_1611E0
    ctx->pc = 0x14635Cu;
    SET_GPR_U32(ctx, 31, 0x146364u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x14635Cu, 0x146364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146364u;
label_146364:
    // 0x146364: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x146364u;
    {
        const bool branch_taken_0x146364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146364) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x14636Cu;
    // 0x14636c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146370: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x146370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146374: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x146378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14637c: 0x0  nop
    ctx->pc = 0x14637cu;
    // NOP
    // 0x146380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146384: 0x0  nop
    ctx->pc = 0x146384u;
    // NOP
    // 0x146388: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x146388u;
    {
        const bool branch_taken_0x146388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146388) {
            ctx->pc = 0x1463B4u;
            return;
        }
    }
    ctx->pc = 0x146390u;
    // 0x146390: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x146394: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x146398: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x146398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14639c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14639Cu;
    {
        const bool branch_taken_0x14639c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14639c) {
            ctx->pc = 0x14641Cu;
            return;
        }
    }
    ctx->pc = 0x1463A4u;
    // 0x1463a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1463a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1463ac: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1463ACu;
    {
        const bool branch_taken_0x1463ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1463ac) {
            ctx->pc = 0x14641Cu;
            return;
        }
    }
    ctx->pc = 0x1463B4u;
}
