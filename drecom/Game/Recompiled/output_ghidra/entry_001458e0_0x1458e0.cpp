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

// Function: entry_001458e0
// Address: 0x1458e0 - 0x145a64
void entry_001458e0_0x1458e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001458e0_0x1458e0");
#endif

    switch (ctx->pc) {
        case 0x1458f4u: goto label_1458f4;
        case 0x14590cu: goto label_14590c;
        case 0x145924u: goto label_145924;
        case 0x145930u: goto label_145930;
        case 0x145940u: goto label_145940;
        case 0x145958u: goto label_145958;
        case 0x145968u: goto label_145968;
        case 0x145978u: goto label_145978;
        case 0x14598cu: goto label_14598c;
        case 0x14599cu: goto label_14599c;
        case 0x1459acu: goto label_1459ac;
        case 0x1459bcu: goto label_1459bc;
        default: break;
    }

    ctx->pc = 0x1458e0u;

    // 0x1458e0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1458e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1458e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1458ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1458ECu;
    SET_GPR_U32(ctx, 31, 0x1458F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1458ECu, 0x1458F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458F4u;
label_1458f4:
    // 0x1458f4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1458fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145900: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145904: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145904u;
    SET_GPR_U32(ctx, 31, 0x14590Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145904u, 0x14590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14590Cu;
label_14590c:
    // 0x14590c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145910: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145914: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x145914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x145918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14591c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14591Cu;
    SET_GPR_U32(ctx, 31, 0x145924u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14591Cu, 0x145924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145924u;
label_145924:
    // 0x145924: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145928: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x145928u;
    SET_GPR_U32(ctx, 31, 0x145930u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x145928u, 0x145930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145930u;
label_145930:
    // 0x145930: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145934: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145938: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x145938u;
    SET_GPR_U32(ctx, 31, 0x145940u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x145938u, 0x145940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145940u;
label_145940:
    // 0x145940: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x145940u;
    {
        const bool branch_taken_0x145940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145940) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145948u;
    // 0x145948: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14594c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145950: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x145950u;
    SET_GPR_U32(ctx, 31, 0x145958u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x145950u, 0x145958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145958u;
label_145958:
    // 0x145958: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x145958u;
    {
        const bool branch_taken_0x145958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145958) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145960u;
    // 0x145960: 0xc058410  jal         func_161040
    ctx->pc = 0x145960u;
    SET_GPR_U32(ctx, 31, 0x145968u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x145960u, 0x145968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145968u;
label_145968:
    // 0x145968: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x145968u;
    {
        const bool branch_taken_0x145968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145968) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145970u;
    // 0x145970: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145970u;
    SET_GPR_U32(ctx, 31, 0x145978u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145970u, 0x145978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145978u;
label_145978:
    // 0x145978: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x145978u;
    {
        const bool branch_taken_0x145978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145978) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145980u;
    // 0x145980: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145984: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145984u;
    SET_GPR_U32(ctx, 31, 0x14598Cu);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145984u, 0x14598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14598Cu;
label_14598c:
    // 0x14598c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x14598Cu;
    {
        const bool branch_taken_0x14598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14598c) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145994u;
    // 0x145994: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145994u;
    SET_GPR_U32(ctx, 31, 0x14599Cu);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145994u, 0x14599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14599Cu;
label_14599c:
    // 0x14599c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x14599Cu;
    {
        const bool branch_taken_0x14599c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14599c) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x1459A4u;
    // 0x1459a4: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x1459A4u;
    SET_GPR_U32(ctx, 31, 0x1459ACu);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x1459A4u, 0x1459ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459ACu;
label_1459ac:
    // 0x1459ac: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1459ACu;
    {
        const bool branch_taken_0x1459ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459ac) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x1459B4u;
    // 0x1459b4: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1459B4u;
    SET_GPR_U32(ctx, 31, 0x1459BCu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1459B4u, 0x1459BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459BCu;
label_1459bc:
    // 0x1459bc: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1459BCu;
    {
        const bool branch_taken_0x1459bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459bc) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x1459C4u;
    // 0x1459c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1459c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1459c8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1459c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1459cc: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x1459ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x1459d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1459d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1459d4: 0x0  nop
    ctx->pc = 0x1459d4u;
    // NOP
    // 0x1459d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1459d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1459dc: 0x0  nop
    ctx->pc = 0x1459dcu;
    // NOP
    // 0x1459e0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1459E0u;
    {
        const bool branch_taken_0x1459e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1459e0) {
            ctx->pc = 0x145A64u;
            return;
        }
    }
    ctx->pc = 0x1459E8u;
    // 0x1459e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1459e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1459ec: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x1459ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x1459f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1459f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1459f4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1459F4u;
    {
        const bool branch_taken_0x1459f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459f4) {
            ctx->pc = 0x145A64u;
            return;
        }
    }
    ctx->pc = 0x1459FCu;
    // 0x1459fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1459fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a00: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a04: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a0c: 0x0  nop
    ctx->pc = 0x145a0cu;
    // NOP
    // 0x145a10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a14: 0x0  nop
    ctx->pc = 0x145a14u;
    // NOP
    // 0x145a18: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x145A18u;
    {
        const bool branch_taken_0x145a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a18) {
            ctx->pc = 0x145A64u;
            return;
        }
    }
    ctx->pc = 0x145A20u;
    // 0x145a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145a30: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x145a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145a38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145a40: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145a48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145a50: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145a54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145a5c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x145A5Cu;
    {
        const bool branch_taken_0x145a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a5c) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145A64u;
}
