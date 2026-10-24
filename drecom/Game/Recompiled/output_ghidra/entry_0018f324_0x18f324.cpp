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

// Function: entry_0018f324
// Address: 0x18f324 - 0x18f4f8
void entry_0018f324_0x18f324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f324_0x18f324");
#endif

    switch (ctx->pc) {
        case 0x18f4f0u: goto label_18f4f0;
        default: break;
    }

    ctx->pc = 0x18f324u;

    // 0x18f324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18f328: 0x3443000f  ori         $v1, $v0, 0xF
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x18f32c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f32cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f330: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f334: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f338: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x18f338u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f33c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f33cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f340: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f344: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x18f344u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x18f348: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18f34c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f354: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f358: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f358u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f35c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f360: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f360u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f364: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x18f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x18f368: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x18f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x18f36c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f36cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f370: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f374: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f374u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f378: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f37c: 0xdc4301d0  ld          $v1, 0x1D0($v0)
    ctx->pc = 0x18f37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x18f380: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f380u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f384: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f388: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f388u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f38c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18f390: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f390u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f394: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f398: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f398u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f3a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f3a4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x18f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x18f3a8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x18f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x18f3ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f3b0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3b4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3bc: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18f3c0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3c4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18f3d0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3d4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f3e0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3e4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3ec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f3f0: 0xdc4301e8  ld          $v1, 0x1E8($v0)
    ctx->pc = 0x18f3f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x18f3f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f400: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18f404: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f408: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f40c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f410: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f414: 0xdc4301e0  ld          $v1, 0x1E0($v0)
    ctx->pc = 0x18f414u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x18f418: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f418u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f41c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f420: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f420u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f424: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18f428: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f428u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f42c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f430: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f430u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f434: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f438: 0xdc4301d8  ld          $v1, 0x1D8($v0)
    ctx->pc = 0x18f438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x18f43c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f43cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f440: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f444: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f444u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f448: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18f44c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f44cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f450: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f454: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f454u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f458: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f45c: 0xdc4301f0  ld          $v1, 0x1F0($v0)
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x18f460: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f460u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f464: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f468: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f468u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f46c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18f470: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f470u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f474: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f478: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f478u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f47c: 0x3c02602b  lui         $v0, 0x602B
    ctx->pc = 0x18f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24619 << 16));
    // 0x18f480: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18f484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f488: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x18f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x18f48c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f490: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f490u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f494: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f498: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f49c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18f4a0: 0x34432412  ori         $v1, $v0, 0x2412
    ctx->pc = 0x18f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x18f4a4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f4a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f4a8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f4ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f4b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4b4: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f4b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f4bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f4c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18F4C0u;
    {
        const bool branch_taken_0x18f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4c0) {
            ctx->pc = 0x18F4F8u;
            return;
        }
    }
    ctx->pc = 0x18F4C8u;
    // 0x18f4c8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4cc: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x18f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f4d0: 0xc6c001b4  lwc1        $f0, 0x1B4($s6)
    ctx->pc = 0x18f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f4d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f4d8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18f4dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f4e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f4e4: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x18f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f4e8: 0xc040c60  jal         func_103180
    ctx->pc = 0x18F4E8u;
    SET_GPR_U32(ctx, 31, 0x18F4F0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x18F4F0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F4F0u) { return; }
    ctx->pc = 0x18F4F0u;
label_18f4f0:
    // 0x18f4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F4F0u;
    {
        const bool branch_taken_0x18f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f4f0) {
            ctx->pc = 0x18F504u;
            return;
        }
    }
    ctx->pc = 0x18F4F8u;
}
