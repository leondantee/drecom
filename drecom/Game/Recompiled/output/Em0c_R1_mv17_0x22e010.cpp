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

// Function: Em0c_R1_mv17
// Address: 0x22e010 - 0x22e294
void Em0c_R1_mv17_0x22e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv17_0x22e010");
#endif

    switch (ctx->pc) {
        case 0x22e068u: goto label_22e068;
        case 0x22e160u: goto label_22e160;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e204u: goto label_22e204;
        case 0x22e228u: goto label_22e228;
        default: break;
    }

    ctx->pc = 0x22e010u;

    // 0x22e010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e014: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x22e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x22e018: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x22e018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x22e01c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e020: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22e020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22e024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22e028: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e02c: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x22E02Cu;
    {
        const bool branch_taken_0x22e02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e02c) {
            ctx->pc = 0x22E190u;
            goto label_22e190;
        }
    }
    ctx->pc = 0x22E034u;
    // 0x22e034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e038: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x22E038u;
    {
        const bool branch_taken_0x22e038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e038) {
            ctx->pc = 0x22E140u;
            goto label_22e140;
        }
    }
    ctx->pc = 0x22E040u;
    // 0x22e040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e044: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x22E044u;
    {
        const bool branch_taken_0x22e044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e044) {
            ctx->pc = 0x22E0F4u;
            goto label_22e0f4;
        }
    }
    ctx->pc = 0x22E04Cu;
    // 0x22e04c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E04Cu;
    {
        const bool branch_taken_0x22e04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e04c) {
            ctx->pc = 0x22E05Cu;
            goto label_22e05c;
        }
    }
    ctx->pc = 0x22E054u;
    // 0x22e054: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x22E054u;
    {
        const bool branch_taken_0x22e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e054) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E05Cu;
label_22e05c:
    // 0x22e05c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e060: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x22E060u;
    SET_GPR_U32(ctx, 31, 0x22E068u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x22E060u, 0x22E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E068u;
label_22e068:
    // 0x22e068: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e06c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e070: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x22e070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e074: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e07c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22e07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22e080: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x22e084: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x22e084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e088: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22e08c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x22e090: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22e094: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x22e094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x22e098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e09c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0a0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x22e0a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e0a8: 0x0  nop
    ctx->pc = 0x22e0a8u;
    // NOP
    // 0x22e0ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22e0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e0b0: 0x0  nop
    ctx->pc = 0x22e0b0u;
    // NOP
    // 0x22e0b4: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x22E0B4u;
    {
        const bool branch_taken_0x22e0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e0b4) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E0BCu;
    // 0x22e0bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0c0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x22e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22e0c4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x22e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x22e0c8: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E0D0u;
    // 0x22e0d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22e0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e0dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e0e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x22e0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22e0e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x22e0ec: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x22E0ECu;
    {
        const bool branch_taken_0x22e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0ec) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E0F4u;
label_22e0f4:
    // 0x22e0f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e0f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0fc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22e0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e104: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e108: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22e10c: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x22e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x22e110: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22e110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22e114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e118: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e11c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e120: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22e124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e128: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e12c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x22e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22e130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e134: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e13c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22e13cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_22e140:
    // 0x22e140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e144: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x22e144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22e148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e14c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x22e14cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x22e150: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e154: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22e154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e158: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22E158u;
    SET_GPR_U32(ctx, 31, 0x22E160u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22E158u, 0x22E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E160u;
label_22e160:
    // 0x22e160: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e164: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E164u;
    SET_GPR_U32(ctx, 31, 0x22E16Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E164u, 0x22E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E16Cu;
label_22e16c:
    // 0x22e16c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e170: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e174: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x22E174u;
    {
        const bool branch_taken_0x22e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e174) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E17Cu;
    // 0x22e17c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e184: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22e184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e188: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22E188u;
    {
        const bool branch_taken_0x22e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e188) {
            ctx->pc = 0x22E284u;
            goto label_22e284;
        }
    }
    ctx->pc = 0x22E190u;
label_22e190:
    // 0x22e190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e194: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e198: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e19c: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x22e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x22e1a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e1a4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1b0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22e1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x22e1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1bc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22e1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22e1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1c8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x22e1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x22e1cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e1d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e1d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e1dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e1e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e1ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e1f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e1fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E1FCu;
    SET_GPR_U32(ctx, 31, 0x22E204u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E1FCu, 0x22E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E204u;
label_22e204:
    // 0x22e204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e208: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e20c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e210: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e214: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e218: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e21c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e21cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e220: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E220u;
    SET_GPR_U32(ctx, 31, 0x22E228u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E220u, 0x22E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E228u;
label_22e228:
    // 0x22e228: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e22c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e230: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22e234: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e238: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e238u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e23c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e244: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22e248: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e24c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x22e24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x22e250: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x22e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x22e254: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x22e254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e25c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x22e25cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e260: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e264: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22e268: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x22e26c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22e270: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x22e270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x22e274: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e278: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e27c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x22e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22e280: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_22e284:
    // 0x22e284: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22e284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e28c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E294u;
}
