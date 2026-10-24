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

// Function: entry_001d52e8
// Address: 0x1d52e8 - 0x1d53b8
void entry_001d52e8_0x1d52e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d52e8_0x1d52e8");
#endif

    ctx->pc = 0x1d52e8u;

    // 0x1d52e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1d52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d52ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d52f0: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1d52f4: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1d52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x1d52f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d52fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5304: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1d5304u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1d5308: 0x3c0200e7  lui         $v0, 0xE7
    ctx->pc = 0x1d5308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)231 << 16));
    // 0x1d530c: 0x3442eeee  ori         $v0, $v0, 0xEEEE
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x1d5310: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x1d5310u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x1d5314: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d5314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d5318: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x1d5318u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x1d531c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1d531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d5320: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1d5320u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1d5324: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d5324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d5328: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d532c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1d532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d5330: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5334: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x1d5334u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x1d5338: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1d5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d533c: 0xfe220028  sd          $v0, 0x28($s1)
    ctx->pc = 0x1d533cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 2));
    // 0x1d5340: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1d5344: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1d5344u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1d5348: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1d5348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d534c: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x1d534cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x1d5350: 0x24020370  addiu       $v0, $zero, 0x370
    ctx->pc = 0x1d5350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x1d5354: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5358: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1d535c: 0x34421ff8  ori         $v0, $v0, 0x1FF8
    ctx->pc = 0x1d535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8184);
    // 0x1d5360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5364: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1d5364u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1d5368: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d536c: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x1d536cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x1d5370: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x1d5370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d5374: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x1d5374u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x1d5378: 0xfe200058  sd          $zero, 0x58($s1)
    ctx->pc = 0x1d5378u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 0));
    // 0x1d537c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d5380: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x1d5380u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x1d5384: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d5388: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x1d5388u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
    // 0x1d538c: 0x3c023106  lui         $v0, 0x3106
    ctx->pc = 0x1d538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12550 << 16));
    // 0x1d5390: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d5394: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5398: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x1d5398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1d539c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d53a0: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x1d53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x1d53a4: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d53a8: 0xfe220078  sd          $v0, 0x78($s1)
    ctx->pc = 0x1d53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 2));
    // 0x1d53ac: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x1d53acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d53b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d53b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d53b4: 0x0  nop
    ctx->pc = 0x1d53b4u;
    // NOP
    ctx->pc = 0x1d53b8u;
}
