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

// Function: Em0b_R1_br_mv01
// Address: 0x1ec870 - 0x1ed55c
void Em0b_R1_br_mv01_0x1ec870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_br_mv01_0x1ec870");
#endif

    switch (ctx->pc) {
        case 0x1ec918u: goto label_1ec918;
        case 0x1ec964u: goto label_1ec964;
        case 0x1ec9e0u: goto label_1ec9e0;
        case 0x1eca98u: goto label_1eca98;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecb08u: goto label_1ecb08;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1ecd14u: goto label_1ecd14;
        case 0x1ecda4u: goto label_1ecda4;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdf8u: goto label_1ecdf8;
        case 0x1ece5cu: goto label_1ece5c;
        case 0x1ecfe0u: goto label_1ecfe0;
        case 0x1ed024u: goto label_1ed024;
        case 0x1ed0b4u: goto label_1ed0b4;
        case 0x1ed0dcu: goto label_1ed0dc;
        case 0x1ed108u: goto label_1ed108;
        case 0x1ed16cu: goto label_1ed16c;
        case 0x1ed330u: goto label_1ed330;
        default: break;
    }

    ctx->pc = 0x1ec870u;

    // 0x1ec870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ec870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ec874: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1ec874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ec878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec87c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec884: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1ec884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1ec888: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ec888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ec88c: 0x2483dbc0  addiu       $v1, $a0, -0x2440
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x1ec890: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1ec890u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1ec894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec898: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1ec89c: 0x1480005d  bnez        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1EC89Cu;
    {
        const bool branch_taken_0x1ec89c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec89c) {
            ctx->pc = 0x1ECA14u;
            goto label_1eca14;
        }
    }
    ctx->pc = 0x1EC8A4u;
    // 0x1ec8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec8a8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1ec8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec8ac: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1ec8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1ec8b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1ec8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ec8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec8b8: 0x0  nop
    ctx->pc = 0x1ec8b8u;
    // NOP
    // 0x1ec8bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec8c0: 0x0  nop
    ctx->pc = 0x1ec8c0u;
    // NOP
    // 0x1ec8c4: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1EC8C4u;
    {
        const bool branch_taken_0x1ec8c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec8c4) {
            ctx->pc = 0x1EC980u;
            goto label_1ec980;
        }
    }
    ctx->pc = 0x1EC8CCu;
    // 0x1ec8cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec8d0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ec8d4: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1ec8d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1ec8d8: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EC8D8u;
    {
        const bool branch_taken_0x1ec8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec8d8) {
            ctx->pc = 0x1EC980u;
            goto label_1ec980;
        }
    }
    ctx->pc = 0x1EC8E0u;
    // 0x1ec8e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec8e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec8e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ec8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ec8ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec8f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec8f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ec8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ec8f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec8fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ec8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec900: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec904: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ec904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ec908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec90c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ec90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ec910: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC910u;
    SET_GPR_U32(ctx, 31, 0x1EC918u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC910u, 0x1EC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC918u;
label_1ec918:
    // 0x1ec918: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec91c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1ec91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ec920: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC920u;
    {
        const bool branch_taken_0x1ec920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec920) {
            ctx->pc = 0x1EC95Cu;
            goto label_1ec95c;
        }
    }
    ctx->pc = 0x1EC928u;
    // 0x1ec928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec92c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ec92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec930: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1ec930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ec934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ec934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec938: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec93c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1ec93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec940: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ec940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec944: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec948: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ec948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ec94c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ec950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec954: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec958: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ec958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1ec95c:
    // 0x1ec95c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC95Cu;
    SET_GPR_U32(ctx, 31, 0x1EC964u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC95Cu, 0x1EC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC964u;
label_1ec964:
    // 0x1ec964: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec968: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ec968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ec96c: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ec970: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ec970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec974: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ec974u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ec978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec97c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec97cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1ec980:
    // 0x1ec980: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec984: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ec984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec988: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1ec988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1ec98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec990: 0x0  nop
    ctx->pc = 0x1ec990u;
    // NOP
    // 0x1ec994: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec998: 0x0  nop
    ctx->pc = 0x1ec998u;
    // NOP
    // 0x1ec99c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x1EC99Cu;
    {
        const bool branch_taken_0x1ec99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec99c) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1EC9A4u;
    // 0x1ec9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ec9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec9b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ec9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9b8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1ec9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec9bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ec9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec9c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9c4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ec9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9cc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ec9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ec9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ec9d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC9D8u;
    SET_GPR_U32(ctx, 31, 0x1EC9E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC9D8u, 0x1EC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9E0u;
label_1ec9e0:
    // 0x1ec9e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec9e4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ec9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ec9e8: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ec9ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ec9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec9f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ec9f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9f8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ec9fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eca00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eca08: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1eca08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eca0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1ECA0Cu;
    {
        const bool branch_taken_0x1eca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca0c) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECA14u;
label_1eca14:
    // 0x1eca14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1eca1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eca20: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1eca20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eca24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca28: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1eca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eca2c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x1eca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x1eca30: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1eca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1eca34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eca34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca38: 0x0  nop
    ctx->pc = 0x1eca38u;
    // NOP
    // 0x1eca3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eca3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eca40: 0x0  nop
    ctx->pc = 0x1eca40u;
    // NOP
    // 0x1eca44: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1ECA44u;
    {
        const bool branch_taken_0x1eca44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eca44) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECA4Cu;
    // 0x1eca4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eca54: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eca54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eca58: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1ECA58u;
    {
        const bool branch_taken_0x1eca58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca58) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECA60u;
    // 0x1eca60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eca64: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1eca64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca68: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1eca68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eca6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eca70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1eca74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eca78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eca84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eca90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECA90u;
    SET_GPR_U32(ctx, 31, 0x1ECA98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECA90u, 0x1ECA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA98u;
label_1eca98:
    // 0x1eca98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eca9c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1ecaa0: 0x244300b4  addiu       $v1, $v0, 0xB4
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1ecaa4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ecaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecaa8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecaac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecab0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1ecab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ecab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECAB4u;
    SET_GPR_U32(ctx, 31, 0x1ECABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECAB4u, 0x1ECABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECABCu;
label_1ecabc:
    // 0x1ecabc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecabcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecac0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecac4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ecac8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ECAC8u;
    {
        const bool branch_taken_0x1ecac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecac8) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECAD0u;
    // 0x1ecad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecad8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecae0: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecae4: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x1ecae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecae8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecaec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ecaecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecaf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecaf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecaf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecafc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ecafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ecb00: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECB00u;
    SET_GPR_U32(ctx, 31, 0x1ECB08u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECB00u, 0x1ECB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB08u;
label_1ecb08:
    // 0x1ecb08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecb08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecb0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecb10: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ecb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ecb14: 0x24a3003c  addiu       $v1, $a1, 0x3C
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1ecb18: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ecb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecb1c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecb1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb24: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ecb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1ecb28:
    // 0x1ecb28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecb2c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecb30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ecb34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ecb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ecb38: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1ECB38u;
    {
        const bool branch_taken_0x1ecb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb38) {
            ctx->pc = 0x1ECC5Cu;
            goto label_1ecc5c;
        }
    }
    ctx->pc = 0x1ECB40u;
    // 0x1ecb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecb48: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1ecb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1ecb4c: 0x146001da  bnez        $v1, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1ECB4Cu;
    {
        const bool branch_taken_0x1ecb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb4c) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECB54u;
    // 0x1ecb54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb58: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1ecb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb5c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ecb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ecb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecb64: 0x0  nop
    ctx->pc = 0x1ecb64u;
    // NOP
    // 0x1ecb68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecb6c: 0x0  nop
    ctx->pc = 0x1ecb6cu;
    // NOP
    // 0x1ecb70: 0x450001d1  bc1f        . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1ECB70u;
    {
        const bool branch_taken_0x1ecb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecb70) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECB78u;
    // 0x1ecb78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb80: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1ecb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x1ecb84: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1ecb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecb88: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ecb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecb8c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ecb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ecb90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ecb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecb94: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1ecb98: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECB98u;
    SET_GPR_U32(ctx, 31, 0x1ECBA0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECB98u, 0x1ECBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBA0u;
label_1ecba0:
    // 0x1ecba0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ecba0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecba4: 0x120001c4  beqz        $s0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1ECBA4u;
    {
        const bool branch_taken_0x1ecba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecba4) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECBACu;
    // 0x1ecbac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbb0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ecbb4: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1ecbb8: 0x146001bf  bnez        $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x1ECBB8u;
    {
        const bool branch_taken_0x1ecbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb8) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECBC0u;
    // 0x1ecbc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecbc4: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecbc8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ecbcc: 0x146001ba  bnez        $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x1ECBCCu;
    {
        const bool branch_taken_0x1ecbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbcc) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECBD4u;
    // 0x1ecbd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecbd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecbe0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ecbe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbe8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ecbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecbec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecbf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecc04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECC04u;
    SET_GPR_U32(ctx, 31, 0x1ECC0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECC04u, 0x1ECC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC0Cu;
label_1ecc0c:
    // 0x1ecc0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecc0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecc10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecc14: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x1ecc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ecc18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecc1c: 0x148301a6  bne         $a0, $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1ECC1Cu;
    {
        const bool branch_taken_0x1ecc1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ecc1c) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECC24u;
    // 0x1ecc24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecc30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ecc34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc38: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ecc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecc3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecc44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecc4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ecc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ecc54: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1ECC54u;
    {
        const bool branch_taken_0x1ecc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc54) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ECC5Cu;
label_1ecc5c:
    // 0x1ecc5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecc60: 0x8c230aa8  lw          $v1, 0xAA8($at)
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA8u));
    // 0x1ecc64: 0x286100f1  slti        $at, $v1, 0xF1
    ctx->pc = 0x1ecc64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1ecc68: 0x142000c2  bnez        $at, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1ECC68u;
    {
        const bool branch_taken_0x1ecc68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc68) {
            ctx->pc = 0x1ECF74u;
            goto label_1ecf74;
        }
    }
    ctx->pc = 0x1ECC70u;
    // 0x1ecc70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc74: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ecc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecc78: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x1ecc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x1ecc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc80: 0x0  nop
    ctx->pc = 0x1ecc80u;
    // NOP
    // 0x1ecc84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecc88: 0x0  nop
    ctx->pc = 0x1ecc88u;
    // NOP
    // 0x1ecc8c: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
    ctx->pc = 0x1ECC8Cu;
    {
        const bool branch_taken_0x1ecc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecc8c) {
            ctx->pc = 0x1ECF74u;
            goto label_1ecf74;
        }
    }
    ctx->pc = 0x1ECC94u;
    // 0x1ecc94: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ecc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc98: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc9c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1ecc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x1ecca0: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecca4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1ecca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecca8: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1eccac: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1eccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eccb0: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1eccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1eccb4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECCB4u;
    SET_GPR_U32(ctx, 31, 0x1ECCBCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECCB4u, 0x1ECCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCBCu;
label_1eccbc:
    // 0x1eccbc: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1ECCBCu;
    {
        const bool branch_taken_0x1eccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccbc) {
            ctx->pc = 0x1ECF74u;
            goto label_1ecf74;
        }
    }
    ctx->pc = 0x1ECCC4u;
    // 0x1eccc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eccc8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecccc: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1eccd0: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1ECCD0u;
    {
        const bool branch_taken_0x1eccd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eccd0) {
            ctx->pc = 0x1ECF74u;
            goto label_1ecf74;
        }
    }
    ctx->pc = 0x1ECCD8u;
    // 0x1eccd8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1eccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1eccdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecce0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecce4: 0xa4850078  sh          $a1, 0x78($a0)
    ctx->pc = 0x1ecce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ecce8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECCE8u;
    SET_GPR_U32(ctx, 31, 0x1ECCF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECCE8u, 0x1ECCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCF0u;
label_1eccf0:
    // 0x1eccf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eccf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eccf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eccf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1eccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eccfc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd00: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ECD04u;
    {
        const bool branch_taken_0x1ecd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd04) {
            ctx->pc = 0x1ECD34u;
            goto label_1ecd34;
        }
    }
    ctx->pc = 0x1ECD0Cu;
    // 0x1ecd0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECD0Cu, 0x1ECD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD14u;
label_1ecd14:
    // 0x1ecd14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecd14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecd18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecd1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ecd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ecd20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecd24: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd28: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ecd2c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ECD2Cu;
    {
        const bool branch_taken_0x1ecd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd2c) {
            ctx->pc = 0x1ECE3Cu;
            goto label_1ece3c;
        }
    }
    ctx->pc = 0x1ECD34u;
label_1ecd34:
    // 0x1ecd34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd38: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ecd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ecd40: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd44: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ecd48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd4c: 0x8c240aa0  lw          $a0, 0xAA0($at)
    ctx->pc = 0x1ecd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd50: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ECD50u;
    {
        const bool branch_taken_0x1ecd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd50) {
            ctx->pc = 0x1ECE3Cu;
            goto label_1ece3c;
        }
    }
    ctx->pc = 0x1ECD58u;
    // 0x1ecd58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecd5c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecd60: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1ecd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1ecd64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecd68: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecd68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecd6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecd70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecd78: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1ecd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ecd7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ecd80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecd84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd88: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ecd88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecd8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecd94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecd9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECD9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECDA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECD9Cu, 0x1ECDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDA4u;
label_1ecda4:
    // 0x1ecda4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ecda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecda8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ecda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ecdac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1ecdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1ecdb0: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x1ecdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x1ecdb4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ecdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecdb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecdbc: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecdc0: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x1ecdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ecdc4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECDC4u;
    SET_GPR_U32(ctx, 31, 0x1ECDCCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECDC4u, 0x1ECDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDCCu;
label_1ecdcc:
    // 0x1ecdcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ecdccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecdd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ecdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ecdd4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ecdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ecdd8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ecddc: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1ecddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecde0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1ecde0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1ecde4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecde8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecdec: 0xa470005c  sh          $s0, 0x5C($v1)
    ctx->pc = 0x1ecdecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ecdf0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECDF0u;
    SET_GPR_U32(ctx, 31, 0x1ECDF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECDF0u, 0x1ECDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDF8u;
label_1ecdf8:
    // 0x1ecdf8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecdf8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecdfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ece00: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ece00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ece04: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1ece08: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1ece08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece0c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ece0cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ece10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ece14: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ece18: 0xa4650076  sh          $a1, 0x76($v1)
    ctx->pc = 0x1ece18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ece1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece20: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece24: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1ece24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1ece28: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1ece28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1ece2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece30: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece34: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1ECE34u;
    {
        const bool branch_taken_0x1ece34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece34) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ECE3Cu;
label_1ece3c:
    // 0x1ece3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece40: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece44: 0x2403cfff  addiu       $v1, $zero, -0x3001
    ctx->pc = 0x1ece44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x1ece48: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ece48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ece4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece50: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECE54u;
    SET_GPR_U32(ctx, 31, 0x1ECE5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECE54u, 0x1ECE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE5Cu;
label_1ece5c:
    // 0x1ece5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ece5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ece60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ece64: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1ece64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ece68: 0x41b00  sll         $v1, $a0, 12
    ctx->pc = 0x1ece68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x1ece6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece70: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ece74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ece78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece7c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece84: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece88: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x1ece88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1ece8c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1ece8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1ece90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ece90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ece94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ece98: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1ece98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece9c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1ece9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1ecea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecea4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eceac: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1eceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1eceb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eceb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eceb4: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x1eceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1eceb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1eceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ecebc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ecebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecec0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ecec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ecec4: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1ecec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ecec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ececc: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1ececcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1eced0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eced4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eced8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1eced8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecedc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecee0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecee8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eceec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecef0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecef4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecef8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecefc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ecefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ecf00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ecf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ecf04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf08: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecf0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf10: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ecf10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecf14: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ecf18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ecf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ecf1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf20: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecf24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecf2c: 0x8c700068  lw          $s0, 0x68($v1)
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1ecf30: 0x120000d1  beqz        $s0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1ECF30u;
    {
        const bool branch_taken_0x1ecf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf30) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECF38u;
    // 0x1ecf38: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ecf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ecf3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecf3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecf40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ecf44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ecf48: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecf4c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ecf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ecf50: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1ecf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ecf54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ecf58: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ecf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecf5c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ecf5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecf60: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecf60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecf64: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ecf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ecf68: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ecf68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ecf6c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1ECF6Cu;
    {
        const bool branch_taken_0x1ecf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf6c) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECF74u;
label_1ecf74:
    // 0x1ecf74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf78: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ecf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ecf7c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1ecf80: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1ecf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ecf84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecf84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecf88: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x1ecf88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1ecf8c: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECF94u;
    // 0x1ecf94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf98: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ecf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecf9c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1ecfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfa4: 0x0  nop
    ctx->pc = 0x1ecfa4u;
    // NOP
    // 0x1ecfa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecfac: 0x0  nop
    ctx->pc = 0x1ecfacu;
    // NOP
    // 0x1ecfb0: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x1ECFB0u;
    {
        const bool branch_taken_0x1ecfb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecfb0) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECFB8u;
    // 0x1ecfb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ecfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfc0: 0x3c034006  lui         $v1, 0x4006
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
    // 0x1ecfc4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1ecfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecfc8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ecfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecfcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ecfd0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ecfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecfd4: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1ecfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1ecfd8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECFD8u;
    SET_GPR_U32(ctx, 31, 0x1ECFE0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECFD8u, 0x1ECFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFE0u;
label_1ecfe0:
    // 0x1ecfe0: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1ECFE0u;
    {
        const bool branch_taken_0x1ecfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfe0) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECFE8u;
    // 0x1ecfe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecfec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ecfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecff0: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1ecff4: 0x146000a0  bnez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1ECFF4u;
    {
        const bool branch_taken_0x1ecff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecff4) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ECFFCu;
    // 0x1ecffc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1ecffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1ed000: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed008: 0xa4430078  sh          $v1, 0x78($v0)
    ctx->pc = 0x1ed008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed00c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed010: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed014: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED014u;
    {
        const bool branch_taken_0x1ed014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed014) {
            ctx->pc = 0x1ED044u;
            goto label_1ed044;
        }
    }
    ctx->pc = 0x1ED01Cu;
    // 0x1ed01c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED01Cu;
    SET_GPR_U32(ctx, 31, 0x1ED024u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED01Cu, 0x1ED024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED024u;
label_1ed024:
    // 0x1ed024: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed024u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed028: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed02c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1ed02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed030: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ed034: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed038: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ed03c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ED03Cu;
    {
        const bool branch_taken_0x1ed03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed03c) {
            ctx->pc = 0x1ED14Cu;
            goto label_1ed14c;
        }
    }
    ctx->pc = 0x1ED044u;
label_1ed044:
    // 0x1ed044: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed048: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed04c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ed04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ed050: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed054: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ed058: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed05c: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed060: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ED060u;
    {
        const bool branch_taken_0x1ed060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed060) {
            ctx->pc = 0x1ED14Cu;
            goto label_1ed14c;
        }
    }
    ctx->pc = 0x1ED068u;
    // 0x1ed068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed06c: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed070: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ed070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ed074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed078: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed084: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ed084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed088: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ed08c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed090: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ed090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed094: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed098: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ed098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed09c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ed0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed0ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED0ACu;
    SET_GPR_U32(ctx, 31, 0x1ED0B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED0ACu, 0x1ED0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0B4u;
label_1ed0b4:
    // 0x1ed0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed0b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed0bc: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x1ed0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1ed0c0: 0x2483008c  addiu       $v1, $a0, 0x8C
    ctx->pc = 0x1ed0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x1ed0c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed0c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed0c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed0cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0d0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ed0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed0d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED0D4u;
    SET_GPR_U32(ctx, 31, 0x1ED0DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED0D4u, 0x1ED0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0DCu;
label_1ed0dc:
    // 0x1ed0dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed0dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed0e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ed0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed0e4: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1ed0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1ed0e8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ed0ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed0f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed0f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed0fc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1ed0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed100: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED100u;
    SET_GPR_U32(ctx, 31, 0x1ED108u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED100u, 0x1ED108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED108u;
label_1ed108:
    // 0x1ed108: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed108u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed10c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed110: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ed110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ed114: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1ed118: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed11c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ed11cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ed120: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed124: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ed128: 0xa4650076  sh          $a1, 0x76($v1)
    ctx->pc = 0x1ed128u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ed12c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed130: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed134: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1ed134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1ed138: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1ed13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed140: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed144: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1ED144u;
    {
        const bool branch_taken_0x1ed144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed144) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ED14Cu;
label_1ed14c:
    // 0x1ed14c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed150: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed154: 0x2402cfff  addiu       $v0, $zero, -0x3001
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x1ed158: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ed158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ed15c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed160: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed164: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED164u;
    SET_GPR_U32(ctx, 31, 0x1ED16Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED164u, 0x1ED16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED16Cu;
label_1ed16c:
    // 0x1ed16c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ed16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed170: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1ed170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ed174: 0x32300  sll         $a0, $v1, 12
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x1ed178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed17c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed180: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ed180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ed184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed188: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed18c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed190: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed194: 0x30643000  andi        $a0, $v1, 0x3000
    ctx->pc = 0x1ed194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1ed198: 0x41b02  srl         $v1, $a0, 12
    ctx->pc = 0x1ed198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x1ed19c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed1a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed1a4: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1ed1a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed1a8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1ed1ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed1b8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ed1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ed1bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed1bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed1c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ed1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed1c8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed1cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed1d0: 0x24649d00  addiu       $a0, $v1, -0x6300
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ed1d4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ed1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ed1d8: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1ed1d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ed1dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ed1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed1e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed1e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed1f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed200: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed204: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed204u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed208: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed20c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed214: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed21c: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1ed21cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed220: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed224: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ed224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ed228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed22c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed22cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed234: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1ed234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ed238: 0x8cb00068  lw          $s0, 0x68($a1)
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1ed23c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED23Cu;
    {
        const bool branch_taken_0x1ed23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed23c) {
            ctx->pc = 0x1ED278u;
            goto label_1ed278;
        }
    }
    ctx->pc = 0x1ED244u;
    // 0x1ed244: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ed244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ed248: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed248u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed24c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ed24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed254: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed258: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed25c: 0x24649d00  addiu       $a0, $v1, -0x6300
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ed260: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ed264: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ed264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed268: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed26c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed26cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed270: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ed274: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ed274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
label_1ed278:
    // 0x1ed278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed27c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed280: 0x84630078  lh          $v1, 0x78($v1)
    ctx->pc = 0x1ed280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1ed284: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed288: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed28c: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1ed28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1ed290: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed294: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed298: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED298u;
    {
        const bool branch_taken_0x1ed298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed298) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ED2A0u;
    // 0x1ed2a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed2a4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed2a8: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed2ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed2b4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed2b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1ed2b8:
    // 0x1ed2b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed2bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ed2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2c4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1ED2C4u;
    {
        const bool branch_taken_0x1ed2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2c4) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED2CCu;
    // 0x1ed2cc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ed2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed2d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ed2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ed2d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2d8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1ED2D8u;
    {
        const bool branch_taken_0x1ed2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2d8) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED2E0u;
    // 0x1ed2e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed2e4: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed2e8: 0x84c50094  lh          $a1, 0x94($a2)
    ctx->pc = 0x1ed2e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1ed2ec: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ED2ECu;
    {
        const bool branch_taken_0x1ed2ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2ec) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED2F4u;
    // 0x1ed2f4: 0x8e2413e8  lw          $a0, 0x13E8($s1)
    ctx->pc = 0x1ed2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5096)));
    // 0x1ed2f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed2fc: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ED2FCu;
    {
        const bool branch_taken_0x1ed2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed2fc) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED304u;
    // 0x1ed304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed308: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1ed308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed30c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x1ed310: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ed310u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed314: 0x0  nop
    ctx->pc = 0x1ed314u;
    // NOP
    // 0x1ed318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed31c: 0x0  nop
    ctx->pc = 0x1ed31cu;
    // NOP
    // 0x1ed320: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1ED320u;
    {
        const bool branch_taken_0x1ed320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed320) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED328u;
    // 0x1ed328: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED328u;
    SET_GPR_U32(ctx, 31, 0x1ED330u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED328u, 0x1ED330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ed330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed334: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1ed334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ed338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed33c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED33Cu;
    {
        const bool branch_taken_0x1ed33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ed33c) {
            ctx->pc = 0x1ED374u;
            goto label_1ed374;
        }
    }
    ctx->pc = 0x1ED344u;
    // 0x1ed344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed34c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1ed34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ed350: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1ed350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ed354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed358: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed35c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed360: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed368: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed36c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ed374:
    // 0x1ed374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed378: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed37c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed380: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1ED380u;
    {
        const bool branch_taken_0x1ed380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed380) {
            ctx->pc = 0x1ED470u;
            goto label_1ed470;
        }
    }
    ctx->pc = 0x1ED388u;
    // 0x1ed388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed38c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed390: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1ed390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1ed394: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1ED394u;
    {
        const bool branch_taken_0x1ed394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed394) {
            ctx->pc = 0x1ED470u;
            goto label_1ed470;
        }
    }
    ctx->pc = 0x1ED39Cu;
    // 0x1ed39c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed3a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed3a8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1ed3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ed3ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3b0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ed3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed3b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed3bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3c0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1ed3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed3c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed3c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed3cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3d0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed3d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ed3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed3d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ed3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed3dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3e0: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3e8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed3ec: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed3f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed3f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed3f8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed3fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed400: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed404: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed408: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1ed40c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ed40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ed410: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ed410u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed418: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed41c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed420: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed424: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ed428: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed42c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed42cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed430: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ed430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ed434: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED434u;
    {
        const bool branch_taken_0x1ed434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed434) {
            ctx->pc = 0x1ED470u;
            goto label_1ed470;
        }
    }
    ctx->pc = 0x1ED43Cu;
    // 0x1ed43c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed440: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed444: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed444u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed448: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ed448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ed44c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED44Cu;
    {
        const bool branch_taken_0x1ed44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed44c) {
            ctx->pc = 0x1ED470u;
            goto label_1ed470;
        }
    }
    ctx->pc = 0x1ED454u;
    // 0x1ed454: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed458: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1ed458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ed45c: 0xa60510a6  sh          $a1, 0x10A6($s0)
    ctx->pc = 0x1ed45cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ed460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed464: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ed468: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ed46c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed46cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ed470:
    // 0x1ed470: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed474: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed478: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x1ed478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1ed47c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1ED47Cu;
    {
        const bool branch_taken_0x1ed47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed47c) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ED484u;
    // 0x1ed484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed488: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed488u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed48c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed494: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ED494u;
    {
        const bool branch_taken_0x1ed494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed494) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ED49Cu;
    // 0x1ed49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed4a8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ed4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ed4ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed4c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed4cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed4d0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed4d4: 0x2412bfff  addiu       $s2, $zero, -0x4001
    ctx->pc = 0x1ed4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed4d8: 0x722024  and         $a0, $v1, $s2
    ctx->pc = 0x1ed4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x1ed4dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed4e0: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed4e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed4e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed4ec: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed4f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4f4: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1ed4f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ed4f8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1ed4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ed4fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed4fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed500: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ed500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ed504: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED504u;
    {
        const bool branch_taken_0x1ed504 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed504) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ED50Cu;
    // 0x1ed50c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed510: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed514: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed518: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ed518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ed51c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED51Cu;
    {
        const bool branch_taken_0x1ed51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed51c) {
            ctx->pc = 0x1ED540u;
            goto label_1ed540;
        }
    }
    ctx->pc = 0x1ED524u;
    // 0x1ed524: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed528: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ed528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ed52c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed530: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed534: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ed538: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ed538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ed53c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed53cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ed540:
    // 0x1ed540: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1ed540u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed550: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ed554: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED55Cu;
}
