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

// Function: entry_0023dd74
// Address: 0x23dd74 - 0x23ded0
void entry_0023dd74_0x23dd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023dd74_0x23dd74");
#endif

    switch (ctx->pc) {
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd90u: goto label_23dd90;
        case 0x23de28u: goto label_23de28;
        case 0x23deacu: goto label_23deac;
        case 0x23deb4u: goto label_23deb4;
        default: break;
    }

    ctx->pc = 0x23dd74u;

    // 0x23dd74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23dd7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23DD7Cu;
    SET_GPR_U32(ctx, 31, 0x23DD84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23DD7Cu, 0x23DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd88: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23DD88u;
    SET_GPR_U32(ctx, 31, 0x23DD90u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23DD88u, 0x23DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD90u;
label_23dd90:
    // 0x23dd90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd94: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23dd98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23dd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23dd9c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23dda0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23DF80u;
            return;
        }
    }
    ctx->pc = 0x23DDA8u;
    // 0x23dda8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ddac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23ddb0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ddb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ddb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23ddb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23ddbc: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23ddc0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x23ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x23ddc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ddc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddc8: 0x0  nop
    ctx->pc = 0x23ddc8u;
    // NOP
    // 0x23ddcc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23ddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23ddd0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x23ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x23ddd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ddd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddd8: 0x0  nop
    ctx->pc = 0x23ddd8u;
    // NOP
    // 0x23dddc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23dde0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dde4: 0x0  nop
    ctx->pc = 0x23dde4u;
    // NOP
    // 0x23dde8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x23dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23ddec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23ddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddf4: 0x0  nop
    ctx->pc = 0x23ddf4u;
    // NOP
    // 0x23ddf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23ddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23ddfc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23de00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de04: 0x0  nop
    ctx->pc = 0x23de04u;
    // NOP
    // 0x23de08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23de0c: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x23de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x23de10: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x23de10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x23de14: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x23de14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x23de18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23de20: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23DE20u;
    SET_GPR_U32(ctx, 31, 0x23DE28u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23DE20u, 0x23DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE28u;
label_23de28:
    // 0x23de28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DF80u;
            return;
        }
    }
    ctx->pc = 0x23DE30u;
    // 0x23de30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23de30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de34: 0x0  nop
    ctx->pc = 0x23de34u;
    // NOP
    // 0x23de38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23de3c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23de40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de44: 0x0  nop
    ctx->pc = 0x23de44u;
    // NOP
    // 0x23de48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23de48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23de4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23de4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de50: 0x0  nop
    ctx->pc = 0x23de50u;
    // NOP
    // 0x23de54: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23de58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23de5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de60: 0x0  nop
    ctx->pc = 0x23de60u;
    // NOP
    // 0x23de64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23de64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23de68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23de70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23de70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23de74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23de74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23de78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23de7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23de80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23de84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23de88: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23de88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23de8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23de94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23de98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23de98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23de9c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23de9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23dea0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23dea0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23dea4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23DEA4u;
    SET_GPR_U32(ctx, 31, 0x23DEACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23DEA4u, 0x23DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEACu;
label_23deac:
    // 0x23deac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DEACu;
    SET_GPR_U32(ctx, 31, 0x23DEB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DEACu, 0x23DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEB4u;
label_23deb4:
    // 0x23deb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEB4u;
    {
        const bool branch_taken_0x23deb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23deb4) {
            ctx->pc = 0x23DED0u;
            return;
        }
    }
    ctx->pc = 0x23DEBCu;
    // 0x23debc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23debcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dec0: 0x0  nop
    ctx->pc = 0x23dec0u;
    // NOP
    // 0x23dec4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23dec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23dec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23DEC8u;
    {
        const bool branch_taken_0x23dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dec8) {
            ctx->pc = 0x23DEECu;
            return;
        }
    }
    ctx->pc = 0x23DED0u;
}
