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

// Function: Strip_set
// Address: 0x18d320 - 0x18d4a8
void Strip_set_0x18d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_set_0x18d320");
#endif

    switch (ctx->pc) {
        case 0x18d468u: goto label_18d468;
        default: break;
    }

    ctx->pc = 0x18d320u;

    // 0x18d320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18d324: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x18d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x18d328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d330: 0xffa40050  sd          $a0, 0x50($sp)
    ctx->pc = 0x18d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 4));
    // 0x18d334: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x18d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x18d338: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x18d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x18d33c: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x18d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x18d340: 0xdfa20060  ld          $v0, 0x60($sp)
    ctx->pc = 0x18d340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d344: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d348: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d34c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d358: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d35c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d35cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d360: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18d360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18d364: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x18d364u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d368: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d36c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d37c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d37cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d380: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x18d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x18d384: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18d388: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x18d388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x18d38c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d394: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x18d394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d398: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18d39c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3a4: 0xa3a2004d  sb          $v0, 0x4D($sp)
    ctx->pc = 0x18d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d3a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18d3ac: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x18d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x18d3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x18d3b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3bc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18d3c0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18d3c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d3c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D3C8u;
    {
        const bool branch_taken_0x18d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3c8) {
            ctx->pc = 0x18D3ECu;
            goto label_18d3ec;
        }
    }
    ctx->pc = 0x18D3D0u;
    // 0x18d3d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d3d4: 0x93a2004c  lbu         $v0, 0x4C($sp)
    ctx->pc = 0x18d3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x18d3d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d3dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x18d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18d3e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x18d3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d3e8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x18d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_18d3ec:
    // 0x18d3ec: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d3f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D3F0u;
    {
        const bool branch_taken_0x18d3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3f0) {
            ctx->pc = 0x18D414u;
            goto label_18d414;
        }
    }
    ctx->pc = 0x18D3F8u;
    // 0x18d3f8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d3fc: 0x93a2004d  lbu         $v0, 0x4D($sp)
    ctx->pc = 0x18d3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 77)));
    // 0x18d400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d404: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18d408: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x18d40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d410: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x18d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_18d414:
    // 0x18d414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d418: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d41c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d420: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d42c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d430: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d434: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x18d438: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d43c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d440: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d444: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d44c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d450: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x18d450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18d454: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d458: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d45c: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18d460: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x18D460u, 0x18D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d468u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d46c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d470: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d474: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D474u;
    {
        const bool branch_taken_0x18d474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d474) {
            ctx->pc = 0x18D48Cu;
            goto label_18d48c;
        }
    }
    ctx->pc = 0x18D47Cu;
    // 0x18d47c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d480: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x18d480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    // 0x18d484: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d488: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x18d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_18d48c:
    // 0x18d48c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18d48cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d490: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18d490u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d49c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18d4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D4A8u;
}
