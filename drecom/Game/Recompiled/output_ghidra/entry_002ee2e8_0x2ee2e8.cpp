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

// Function: entry_002ee2e8
// Address: 0x2ee2e8 - 0x2ee50c
void entry_002ee2e8_0x2ee2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee2e8_0x2ee2e8");
#endif

    switch (ctx->pc) {
        case 0x2ee40cu: goto label_2ee40c;
        case 0x2ee4f8u: goto label_2ee4f8;
        default: break;
    }

    ctx->pc = 0x2ee2e8u;

label_2ee2e8:
    // 0x2ee2e8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2ee2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ee2ec:
    // 0x2ee2ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee2f0:
    // 0x2ee2f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2ee2f4:
    // 0x2ee2f4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2ee2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2ee2f8:
    // 0x2ee2f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee2fc:
    // 0x2ee2fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee2fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee300:
    // 0x2ee300: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ee300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2ee304:
    // 0x2ee304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee308:
    // 0x2ee308: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2ee30c:
    // 0x2ee30c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2ee30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2ee310:
    // 0x2ee310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee314:
    // 0x2ee314: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee318:
    // 0x2ee318: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2ee318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2ee31c:
    // 0x2ee31c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2ee31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee320:
    // 0x2ee320: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ee320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2ee324:
    // 0x2ee324: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2ee324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2ee328:
    // 0x2ee328: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee32c:
    // 0x2ee32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee330:
    // 0x2ee330: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee334:
    // 0x2ee334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee338:
    // 0x2ee338: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ee338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee33c:
    // 0x2ee33c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ee340:
    // 0x2ee340: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee344:
    // 0x2ee344: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee348:
    // 0x2ee348: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee34c:
    // 0x2ee34c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee350:
    // 0x2ee350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee354:
    // 0x2ee354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee358:
    // 0x2ee358: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ee358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ee35c:
    // 0x2ee35c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ee35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ee360:
    // 0x2ee360: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee364:
    // 0x2ee364: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee368:
    // 0x2ee368: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee36c:
    // 0x2ee36c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee370:
    // 0x2ee370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee374:
    // 0x2ee374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee378:
    // 0x2ee378: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ee378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ee37c:
    // 0x2ee37c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ee37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ee380:
    // 0x2ee380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee384:
    // 0x2ee384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee388:
    // 0x2ee388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee38c:
    // 0x2ee38c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee390:
    // 0x2ee390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee394:
    // 0x2ee394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee398:
    // 0x2ee398: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ee398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ee39c:
    // 0x2ee39c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee3a0:
    // 0x2ee3a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3a4:
    // 0x2ee3a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee3a8:
    // 0x2ee3a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee3ac:
    // 0x2ee3ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee3b0:
    // 0x2ee3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee3b4:
    // 0x2ee3b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee3b8:
    // 0x2ee3b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ee3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ee3bc:
    // 0x2ee3bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2ee3c0:
    // 0x2ee3c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3c4:
    // 0x2ee3c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3c8:
    // 0x2ee3c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee3cc:
    // 0x2ee3cc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ee3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2ee3d0:
    // 0x2ee3d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ee3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee3d4:
    // 0x2ee3d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3d8:
    // 0x2ee3d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3dc:
    // 0x2ee3dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee3dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee3e0:
    // 0x2ee3e0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ee3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2ee3e4:
    // 0x2ee3e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee3e8:
    // 0x2ee3e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ee3ec:
    // 0x2ee3ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3f0:
    // 0x2ee3f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3f4:
    // 0x2ee3f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee3f8:
    // 0x2ee3f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee3fc:
    // 0x2ee3fc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ee400:
    // 0x2ee400: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ee400u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ee404:
    // 0x2ee404: 0xc0634c8  jal         func_18D320
label_2ee408:
    if (ctx->pc == 0x2EE408u) {
        ctx->pc = 0x2EE40Cu;
        goto label_2ee40c;
    }
    ctx->pc = 0x2EE404u;
    SET_GPR_U32(ctx, 31, 0x2EE40Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EE404u, 0x2EE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE40Cu;
label_2ee40c:
    // 0x2ee40c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ee40cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ee410:
    // 0x2ee410: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ee414:
    // 0x2ee414: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ee414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ee418:
    // 0x2ee418: 0x1203003c  beq         $s0, $v1, . + 4 + (0x3C << 2)
label_2ee41c:
    if (ctx->pc == 0x2EE41Cu) {
        ctx->pc = 0x2EE420u;
        goto label_2ee420;
    }
    ctx->pc = 0x2EE418u;
    {
        const bool branch_taken_0x2ee418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee418) {
            ctx->pc = 0x2EE50Cu;
            return;
        }
    }
    ctx->pc = 0x2EE420u;
label_2ee420:
    // 0x2ee420: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2ee420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2ee424:
    // 0x2ee424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee428:
    // 0x2ee428: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ee428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ee42c:
    // 0x2ee42c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee430:
    // 0x2ee430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee434:
    // 0x2ee434: 0x0  nop
    ctx->pc = 0x2ee434u;
    // NOP
label_2ee438:
    // 0x2ee438: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ee438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ee43c:
    // 0x2ee43c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee440:
    // 0x2ee440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee444:
    // 0x2ee444: 0x0  nop
    ctx->pc = 0x2ee444u;
    // NOP
label_2ee448:
    // 0x2ee448: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ee448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ee44c:
    // 0x2ee44c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee450:
    // 0x2ee450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee454:
    // 0x2ee454: 0x0  nop
    ctx->pc = 0x2ee454u;
    // NOP
label_2ee458:
    // 0x2ee458: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ee458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ee45c:
    // 0x2ee45c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ee45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ee460:
    // 0x2ee460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee464:
    // 0x2ee464: 0x0  nop
    ctx->pc = 0x2ee464u;
    // NOP
label_2ee468:
    // 0x2ee468: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ee468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ee46c:
    // 0x2ee46c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ee46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ee470:
    // 0x2ee470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee474:
    // 0x2ee474: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee478:
    // 0x2ee478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ee478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ee47c:
    // 0x2ee47c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ee47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ee480:
    // 0x2ee480: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee484:
    // 0x2ee484: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ee484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ee488:
    // 0x2ee488: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee48c:
    // 0x2ee48c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ee48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ee490:
    // 0x2ee490: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee494:
    // 0x2ee494: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ee494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ee498:
    // 0x2ee498: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee49c:
    // 0x2ee49c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ee49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4a0:
    // 0x2ee4a0: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ee4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ee4a4:
    // 0x2ee4a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee4a8:
    // 0x2ee4a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ee4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4ac:
    // 0x2ee4ac: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ee4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ee4b0:
    // 0x2ee4b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee4b4:
    // 0x2ee4b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ee4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4b8:
    // 0x2ee4b8: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ee4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ee4bc:
    // 0x2ee4bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ee4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4c0:
    // 0x2ee4c0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ee4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ee4c4:
    // 0x2ee4c4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ee4c8:
    // 0x2ee4c8: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ee4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ee4cc:
    // 0x2ee4cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ee4d0:
    // 0x2ee4d0: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ee4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ee4d4:
    // 0x2ee4d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ee4d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ee4d8:
    // 0x2ee4d8: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ee4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ee4dc:
    // 0x2ee4dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ee4e0:
    // 0x2ee4e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ee4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ee4e4:
    // 0x2ee4e4: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ee4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ee4e8:
    // 0x2ee4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ee4ec:
    // 0x2ee4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee4f0:
    // 0x2ee4f0: 0x40f809  jalr        $v0
label_2ee4f4:
    if (ctx->pc == 0x2EE4F4u) {
        ctx->pc = 0x2EE4F8u;
        goto label_2ee4f8;
    }
    ctx->pc = 0x2EE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4F0u, 0x2EE4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE4F8u;
label_2ee4f8:
    // 0x2ee4f8: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ee4fc:
    // 0x2ee4fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ee500:
    // 0x2ee500: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ee504:
    // 0x2ee504: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ee508:
    if (ctx->pc == 0x2EE508u) {
        ctx->pc = 0x2EE50Cu;
        goto label_fallthrough_0x2ee504;
    }
    ctx->pc = 0x2EE504u;
    {
        const bool branch_taken_0x2ee504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee504) {
            ctx->pc = 0x2EE514u;
            return;
        }
    }
label_fallthrough_0x2ee504:
    ctx->pc = 0x2EE50Cu;
}
