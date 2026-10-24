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

// Function: Em0c_R1_dm01
// Address: 0x22e620 - 0x22ecf8
void Em0c_R1_dm01_0x22e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_dm01_0x22e620");
#endif

    switch (ctx->pc) {
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e738u: goto label_22e738;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e798u: goto label_22e798;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e904u: goto label_22e904;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e928u: goto label_22e928;
        case 0x22e970u: goto label_22e970;
        case 0x22e994u: goto label_22e994;
        default: break;
    }

    ctx->pc = 0x22e620u;

    // 0x22e620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e624: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x22e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x22e628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e630: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x22e630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x22e634: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e638: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22e638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e63c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22e640: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x22e640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x22e644: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e648: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22e648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22e64c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e650: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22e650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e654: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22e654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22e658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e65c: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x22E65Cu;
    {
        const bool branch_taken_0x22e65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e65c) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E664u;
    // 0x22e664: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E664u;
    {
        const bool branch_taken_0x22e664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e664) {
            ctx->pc = 0x22E674u;
            goto label_22e674;
        }
    }
    ctx->pc = 0x22E66Cu;
    // 0x22e66c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x22E66Cu;
    {
        const bool branch_taken_0x22e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e66c) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E674u;
label_22e674:
    // 0x22e674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e678: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22e678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e680: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22e680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22e684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e68c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22e690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22e698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22e69c: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x22e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x22e6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22e6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22e6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22E6A8u;
    SET_GPR_U32(ctx, 31, 0x22E6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22E6A8u, 0x22E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6B0u;
label_22e6b0:
    // 0x22e6b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6b4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6b8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e6bc: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22e6c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e6c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6d0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22e6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22e6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22e6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6f0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22e6f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22e6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e700: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e704: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22e704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22e708: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22e70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e714: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e718: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22e71c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x22e720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e72c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22e730: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E730u;
    SET_GPR_U32(ctx, 31, 0x22E738u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E730u, 0x22E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E738u;
label_22e738:
    // 0x22e738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e73c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e740: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E740u;
    {
        const bool branch_taken_0x22e740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e740) {
            ctx->pc = 0x22E774u;
            goto label_22e774;
        }
    }
    ctx->pc = 0x22E748u;
    // 0x22e748: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e74c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e758: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22e75c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e760: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e760u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e764: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E764u;
    SET_GPR_U32(ctx, 31, 0x22E76Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E764u, 0x22E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E76Cu;
label_22e76c:
    // 0x22e76c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22E76Cu;
    {
        const bool branch_taken_0x22e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e76c) {
            ctx->pc = 0x22E798u;
            goto label_22e798;
        }
    }
    ctx->pc = 0x22E774u;
label_22e774:
    // 0x22e774: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e778: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e77c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e780: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e784: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x22e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x22e788: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22e788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e78c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e78cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e790: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E790u;
    SET_GPR_U32(ctx, 31, 0x22E798u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E790u, 0x22E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E798u;
label_22e798:
    // 0x22e798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e79c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e7a0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e7a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22e7a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e7ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E7ACu;
    {
        const bool branch_taken_0x22e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7ac) {
            ctx->pc = 0x22E7D0u;
            goto label_22e7d0;
        }
    }
    ctx->pc = 0x22E7B4u;
    // 0x22e7b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e7b8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22e7bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e7c0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22e7c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e7c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e7cc: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22e7ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_22e7d0:
    // 0x22e7d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e7d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22e7d8: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22e7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e7e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22e7e4: 0x24513b60  addiu       $s1, $v0, 0x3B60
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22e7e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22e7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e7ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e7f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E7F4u;
    {
        const bool branch_taken_0x22e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7f4) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E7FCu;
    // 0x22e7fc: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x22e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22e800: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22e800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22e804: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e80c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E80Cu;
    {
        const bool branch_taken_0x22e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e80c) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E814u;
    // 0x22e814: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22e814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e818:
    // 0x22e818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e81c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x22e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e824: 0x0  nop
    ctx->pc = 0x22e824u;
    // NOP
    // 0x22e828: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e82c: 0x0  nop
    ctx->pc = 0x22e82cu;
    // NOP
    // 0x22e830: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E858u;
            goto label_22e858;
        }
    }
    ctx->pc = 0x22E838u;
    // 0x22e838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e83c: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x22e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e844: 0x0  nop
    ctx->pc = 0x22e844u;
    // NOP
    // 0x22e848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e84c: 0x0  nop
    ctx->pc = 0x22e84cu;
    // NOP
    // 0x22e850: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x22E850u;
    {
        const bool branch_taken_0x22e850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e850) {
            ctx->pc = 0x22E90Cu;
            goto label_22e90c;
        }
    }
    ctx->pc = 0x22E858u;
label_22e858:
    // 0x22e858: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e85c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e860: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e864: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22e868: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E868u;
    {
        const bool branch_taken_0x22e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e868) {
            ctx->pc = 0x22E8A8u;
            goto label_22e8a8;
        }
    }
    ctx->pc = 0x22E870u;
    // 0x22e870: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e874: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e87c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e880: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22e884: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e888: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e88c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e890: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22e894: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E894u;
    SET_GPR_U32(ctx, 31, 0x22E89Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E894u, 0x22E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E89Cu;
label_22e89c:
    // 0x22e89c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22e8a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22E8A0u;
    {
        const bool branch_taken_0x22e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8a0) {
            ctx->pc = 0x22E8ECu;
            goto label_22e8ec;
        }
    }
    ctx->pc = 0x22E8A8u;
label_22e8a8:
    // 0x22e8a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e8b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22e8b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22e8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e8c0: 0x0  nop
    ctx->pc = 0x22e8c0u;
    // NOP
    // 0x22e8c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22e8c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22e8c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e8d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22e8d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e8d8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e8dc: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22e8e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E8E0u;
    SET_GPR_U32(ctx, 31, 0x22E8E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E8E0u, 0x22E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E8u;
label_22e8e8:
    // 0x22e8e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_22e8ec:
    // 0x22e8ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e8f4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e8f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22e8f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e8fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22E8FCu;
    SET_GPR_U32(ctx, 31, 0x22E904u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22E8FCu, 0x22E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e908: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_22e90c:
    // 0x22e90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e910: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22e914: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22E914u;
    SET_GPR_U32(ctx, 31, 0x22E91Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22E914u, 0x22E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E91Cu;
label_22e91c:
    // 0x22e91c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e920: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E920u;
    SET_GPR_U32(ctx, 31, 0x22E928u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E920u, 0x22E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E928u;
label_22e928:
    // 0x22e928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e92c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e930: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E930u;
    {
        const bool branch_taken_0x22e930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e930) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E938u;
    // 0x22e938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e940: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e94c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e954: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e95c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e964: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e968: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E968u;
    SET_GPR_U32(ctx, 31, 0x22E970u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E968u, 0x22E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e974: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e978: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e97c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e980: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e980u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e988: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e98c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E98Cu;
    SET_GPR_U32(ctx, 31, 0x22E994u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E98Cu, 0x22E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E994u;
label_22e994:
    // 0x22e994: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e998: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e99c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22e9a0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e9a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e9a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e9a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e9b0: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22e9b4:
    // 0x22e9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x22e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e9bc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x22e9c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e9c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e9c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22e9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22e9c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22e9c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e9d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22e9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e9d4: 0x0  nop
    ctx->pc = 0x22e9d4u;
    // NOP
    // 0x22e9d8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22E9D8u;
    {
        const bool branch_taken_0x22e9d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e9d8) {
            ctx->pc = 0x22E9FCu;
            goto label_22e9fc;
        }
    }
    ctx->pc = 0x22E9E0u;
    // 0x22e9e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e9e8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e9ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9f0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e9f8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_22e9fc:
    // 0x22e9fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea00: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x22ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ea04: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22ea08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ea08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ea0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22ea10: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22ea10u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ea14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ea18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x22ea18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea1c: 0x0  nop
    ctx->pc = 0x22ea1cu;
    // NOP
    // 0x22ea20: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22EA20u;
    {
        const bool branch_taken_0x22ea20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ea20) {
            ctx->pc = 0x22EA44u;
            goto label_22ea44;
        }
    }
    ctx->pc = 0x22EA28u;
    // 0x22ea28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea30: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ea34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ea3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22ea40: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22ea40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_22ea44:
    // 0x22ea44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea4c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x22ea50: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x22ea54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ea54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ea58: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x22ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ea5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ea60: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22ea64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea6c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ea70: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22ea74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ea74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ea78: 0x0  nop
    ctx->pc = 0x22ea78u;
    // NOP
    // 0x22ea7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ea7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea80: 0x0  nop
    ctx->pc = 0x22ea80u;
    // NOP
    // 0x22ea84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EA84u;
    {
        const bool branch_taken_0x22ea84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ea84) {
            ctx->pc = 0x22EAA0u;
            goto label_22eaa0;
        }
    }
    ctx->pc = 0x22EA8Cu;
    // 0x22ea8c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22ea90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ea90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ea94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea9c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22eaa0:
    // 0x22eaa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eaa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eaa8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22eaac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22eaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22eab0: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22EAB8u;
    // 0x22eab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eabc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eac0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eac8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eacc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22eaccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ead0: 0x0  nop
    ctx->pc = 0x22ead0u;
    // NOP
    // 0x22ead4: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22EAD4u;
    {
        const bool branch_taken_0x22ead4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ead4) {
            ctx->pc = 0x22EBCCu;
            goto label_22ebcc;
        }
    }
    ctx->pc = 0x22EADCu;
    // 0x22eadc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eae0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eae4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eaec: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eaf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22eaf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eaf4: 0x0  nop
    ctx->pc = 0x22eaf4u;
    // NOP
    // 0x22eaf8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EAF8u;
    {
        const bool branch_taken_0x22eaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eaf8) {
            ctx->pc = 0x22EB54u;
            goto label_22eb54;
        }
    }
    ctx->pc = 0x22EB00u;
    // 0x22eb00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb08: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb10: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22eb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22eb18: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22eb1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb2c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22eb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb34: 0x0  nop
    ctx->pc = 0x22eb34u;
    // NOP
    // 0x22eb38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EB38u;
    {
        const bool branch_taken_0x22eb38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb38) {
            ctx->pc = 0x22EB54u;
            goto label_22eb54;
        }
    }
    ctx->pc = 0x22EB40u;
    // 0x22eb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb48: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb50: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_22eb54:
    // 0x22eb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb5c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb64: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb6c: 0x0  nop
    ctx->pc = 0x22eb6cu;
    // NOP
    // 0x22eb70: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EB70u;
    {
        const bool branch_taken_0x22eb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb70) {
            ctx->pc = 0x22EBCCu;
            goto label_22ebcc;
        }
    }
    ctx->pc = 0x22EB78u;
    // 0x22eb78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb80: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb88: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eb8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eb90: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22eb94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb9c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eba4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ebac: 0x0  nop
    ctx->pc = 0x22ebacu;
    // NOP
    // 0x22ebb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EBB0u;
    {
        const bool branch_taken_0x22ebb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ebb0) {
            ctx->pc = 0x22EBCCu;
            goto label_22ebcc;
        }
    }
    ctx->pc = 0x22EBB8u;
    // 0x22ebb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebc0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ebc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebc8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22ebc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_22ebcc:
    // 0x22ebcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebd4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ebd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebdc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ebe0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22ebe0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ebe4: 0x0  nop
    ctx->pc = 0x22ebe4u;
    // NOP
    // 0x22ebe8: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22EBE8u;
    {
        const bool branch_taken_0x22ebe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ebe8) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22EBF0u;
    // 0x22ebf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebf4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebf8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ebfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec00: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ec04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec08: 0x0  nop
    ctx->pc = 0x22ec08u;
    // NOP
    // 0x22ec0c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EC0Cu;
    {
        const bool branch_taken_0x22ec0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec0c) {
            ctx->pc = 0x22EC68u;
            goto label_22ec68;
        }
    }
    ctx->pc = 0x22EC14u;
    // 0x22ec14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec1c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x22ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec24: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ec28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22ec2c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ec30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec38: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec40: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ec44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec48: 0x0  nop
    ctx->pc = 0x22ec48u;
    // NOP
    // 0x22ec4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EC4Cu;
    {
        const bool branch_taken_0x22ec4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec4c) {
            ctx->pc = 0x22EC68u;
            goto label_22ec68;
        }
    }
    ctx->pc = 0x22EC54u;
    // 0x22ec54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec5c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec64: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_22ec68:
    // 0x22ec68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec70: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec78: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ec7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec80: 0x0  nop
    ctx->pc = 0x22ec80u;
    // NOP
    // 0x22ec84: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EC84u;
    {
        const bool branch_taken_0x22ec84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec84) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22EC8Cu;
    // 0x22ec8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec94: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec9c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eca0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eca4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22eca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22eca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ecb0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ecb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecb8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ecbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ecbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ecc0: 0x0  nop
    ctx->pc = 0x22ecc0u;
    // NOP
    // 0x22ecc4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22ECCCu;
    // 0x22eccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ecd4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ecd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecdc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_22ece0:
    // 0x22ece0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x22ece0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ece4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ece4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ece8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ece8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ecec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22ececu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22ecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ECF8u;
}
