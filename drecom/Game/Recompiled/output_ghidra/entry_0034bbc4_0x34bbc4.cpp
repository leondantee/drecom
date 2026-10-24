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

// Function: entry_0034bbc4
// Address: 0x34bbc4 - 0x34bd44
void entry_0034bbc4_0x34bbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bbc4_0x34bbc4");
#endif

    switch (ctx->pc) {
        case 0x34bbd8u: goto label_34bbd8;
        case 0x34bbe8u: goto label_34bbe8;
        case 0x34bc00u: goto label_34bc00;
        case 0x34bc34u: goto label_34bc34;
        case 0x34bcc0u: goto label_34bcc0;
        default: break;
    }

    ctx->pc = 0x34bbc4u;

    // 0x34bbc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbc8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbcc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34bbd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34BBD0u;
    SET_GPR_U32(ctx, 31, 0x34BBD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34BBD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34BBD8u) { return; }
    ctx->pc = 0x34BBD8u;
label_34bbd8:
    // 0x34bbd8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bbe0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34BBE0u;
    SET_GPR_U32(ctx, 31, 0x34BBE8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34BBE0u, 0x34BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBE8u;
label_34bbe8:
    // 0x34bbe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbf0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34bbf4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x34bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbf8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x34BBF8u;
    SET_GPR_U32(ctx, 31, 0x34BC00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x34BBF8u, 0x34BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC00u;
label_34bc00:
    // 0x34bc00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc04: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x34bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bc0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34bc10: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x34bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x34bc14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc18: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x34bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc1c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x34bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bc20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34bc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34bc24: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x34bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x34bc28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc2c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34BC2Cu;
    SET_GPR_U32(ctx, 31, 0x34BC34u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34BC2Cu, 0x34BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC34u;
label_34bc34:
    // 0x34bc34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34bc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34bc3c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x34BC3Cu;
    {
        const bool branch_taken_0x34bc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bc3c) {
            ctx->pc = 0x34BD88u;
            return;
        }
    }
    ctx->pc = 0x34BC44u;
    // 0x34bc44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bc50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc54: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34bc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bc5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34bc60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bc64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34bc68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bc6c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34bc74: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34bc78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34bc80: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34bc80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34bc84: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc88: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34bc8c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34bc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34bc90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34bc94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bc98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34bc9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34bca0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bca4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34bca8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34bcac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34bcb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34bcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34bcb4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34bcb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34BCB8u;
    SET_GPR_U32(ctx, 31, 0x34BCC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34BCB8u, 0x34BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCC0u;
label_34bcc0:
    // 0x34bcc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34bcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34bcc4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x34bcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x34bcc8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x34bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x34bccc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34bcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34bcd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34bcd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34bcd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bcd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bcdc: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x34bcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34bce0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bce4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bce8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34bcec: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x34bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34bcf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34bcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34bcf4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34bcf8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bcfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd00: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bd04: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34bd08: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BD08u;
    {
        const bool branch_taken_0x34bd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd08) {
            ctx->pc = 0x34BD44u;
            return;
        }
    }
    ctx->pc = 0x34BD10u;
    // 0x34bd10: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd18: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bd18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bd20: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd28: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34bd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bd2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bd30: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd38: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bd3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34BD3Cu;
    {
        const bool branch_taken_0x34bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd3c) {
            ctx->pc = 0x34BD6Cu;
            return;
        }
    }
    ctx->pc = 0x34BD44u;
}
