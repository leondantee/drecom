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

// Function: entry_001db2c0
// Address: 0x1db2c0 - 0x1db628
void entry_001db2c0_0x1db2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db2c0_0x1db2c0");
#endif

    ctx->pc = 0x1db2c0u;

    // 0x1db2c0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x1db2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1db2c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1db2c8: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x1db2cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1db2ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db2d0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1db2d4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db2d8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db2dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db2e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2e8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db2ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1db2f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1db2f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db2fc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db300: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db304: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1db304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db308: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x1db308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x1db30c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1db310: 0x34420106  ori         $v0, $v0, 0x106
    ctx->pc = 0x1db310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x1db314: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1db314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1db318: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db31c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db320: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x1db320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x1db324: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x1db328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db32c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1db32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1db330: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x1db330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x1db334: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db338: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db33c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db340: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db344: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1db34c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1db350: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1db350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db354: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1db354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1db358: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db360: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1db360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1db364: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x1db364u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x1db368: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1db368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1db36c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db374: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x1db374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x1db378: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x1db37c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db380: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1db380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1db384: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x1db384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1db388: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db38c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db390: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db394: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db398: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db3a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db3a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db3a4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db3a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db3ac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1db3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db3b0: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x1db3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x1db3b4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x1db3b8: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1db3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1db3bc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1db3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1db3c0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db3c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1db3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1db3c8: 0x34648006  ori         $a0, $v1, 0x8006
    ctx->pc = 0x1db3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32774);
    // 0x1db3cc: 0x3c036500  lui         $v1, 0x6500
    ctx->pc = 0x1db3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25856 << 16));
    // 0x1db3d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1db3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db3d4: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1db3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1db3d8: 0x1e193c  dsll32      $v1, $fp, 4
    ctx->pc = 0x1db3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 4));
    // 0x1db3dc: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1db3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1db3e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db3e8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1db3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3ec: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db3f0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1db3f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1db3f8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db3fc: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1db3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db400: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1db400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1db404: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1db404u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1db408: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1db408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1db40c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1db40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1db410: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db418: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x1db418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x1db41c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1db420: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db424: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1db424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1db428: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1db428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1db42c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1db430: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db434: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db438: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db43c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db440: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db444: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1db444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1db448: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1db448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1db44c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db454: 0x44a825  or          $s5, $v0, $a0
    ctx->pc = 0x1db454u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db458: 0xfe150080  sd          $s5, 0x80($s0)
    ctx->pc = 0x1db458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 21));
    // 0x1db45c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1db460: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db468: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x1db468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x1db46c: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x1db470: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db474: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1db474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x1db478: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db47c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1db47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db480: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1db480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1db484: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1db484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db488: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db48c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db490: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db494: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db498: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db49c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db4a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4a4: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1db4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db4a8: 0xfe030090  sd          $v1, 0x90($s0)
    ctx->pc = 0x1db4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
    // 0x1db4ac: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1db4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1db4b0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db4b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db4b8: 0x34438009  ori         $v1, $v0, 0x8009
    ctx->pc = 0x1db4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32777);
    // 0x1db4bc: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1db4c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1db4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1db4c8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1db4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1db4cc: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1db4d0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db4d4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db4dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db4e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db4e4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1db4e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4ec: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1db4f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db4f4: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x1db4f8: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1db4fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1db500: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1db500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1db504: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1db504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1db508: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1db508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1db50c: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x1db50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1db510: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1db510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1db514: 0x26c20240  addiu       $v0, $s6, 0x240
    ctx->pc = 0x1db514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x1db518: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1db518u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db51c: 0x26e200c0  addiu       $v0, $s7, 0xC0
    ctx->pc = 0x1db51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1db520: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1db520u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db524: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x1db528: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1db52c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db530: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1db530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1db534: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db538: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1db53c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1db53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1db540: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x1db540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x1db544: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1db544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1db548: 0x1e40fedb  bgtz        $s2, . + 4 + (-0x125 << 2)
    ctx->pc = 0x1DB548u;
    {
        const bool branch_taken_0x1db548 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1db548) {
            ctx->pc = 0x1DB0B8u;
            return;
        }
    }
    ctx->pc = 0x1DB550u;
    // 0x1db550: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1db554: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1db554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db558: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1db558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1db55c: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x1db55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1db560: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1db560u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db564: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x1db564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x1db568: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db56c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db570: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1db570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1db574: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1db578: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1db57c: 0xafb200c0  sw          $s2, 0xC0($sp)
    ctx->pc = 0x1db57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 18));
    // 0x1db580: 0x1e40fe73  bgtz        $s2, . + 4 + (-0x18D << 2)
    ctx->pc = 0x1DB580u;
    {
        const bool branch_taken_0x1db580 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1db580) {
            ctx->pc = 0x1DAF50u;
            return;
        }
    }
    ctx->pc = 0x1DB588u;
    // 0x1db588: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1db58c: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x1db58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1db590: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db594: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db59c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1db59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db5a4: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1db5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1db5a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5ac: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1db5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x1db5b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5b4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1db5b8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1db5bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1db5c0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db5c4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1db5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1db5c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db5cc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1db5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db5d0: 0x1440fdbf  bnez        $v0, . + 4 + (-0x241 << 2)
    ctx->pc = 0x1DB5D0u;
    {
        const bool branch_taken_0x1db5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d0) {
            ctx->pc = 0x1DACD0u;
            return;
        }
    }
    ctx->pc = 0x1DB5D8u;
    // 0x1db5d8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db5dc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1db5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db5e0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db5e4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db5e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db5ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db5f4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1db5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1db5f8: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x1db5f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db5fc: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1db600: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1db608: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1db608u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1db60c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1db610: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x1db610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x1db614: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1db614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1db618: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1db61c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db620: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1db620u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db624: 0x0  nop
    ctx->pc = 0x1db624u;
    // NOP
    ctx->pc = 0x1db628u;
}
