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

// Function: Gp_SQGT4_init_work
// Address: 0x1d5290 - 0x1d56cc
void Gp_SQGT4_init_work_0x1d5290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_SQGT4_init_work_0x1d5290");
#endif

    switch (ctx->pc) {
        case 0x1d52e8u: goto label_1d52e8;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5664u: goto label_1d5664;
        default: break;
    }

    ctx->pc = 0x1d5290u;

    // 0x1d5290: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d5294: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x1d5294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1d5298: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d5298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d529c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d52a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d52a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d52a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d52a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d52a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d52ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d52acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d52b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d52b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d52b4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1d52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1d52b8: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1d52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1d52bc: 0xffa600a8  sd          $a2, 0xA8($sp)
    ctx->pc = 0x1d52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 6));
    // 0x1d52c0: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x1d52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x1d52c4: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x1d52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x1d52c8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1d52c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52cc: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d52ccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d52d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d52d4: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1d52d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d52d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1d52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d52dc: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1d52dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1d52e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d52e4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1d52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1d52e8:
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
label_1d53b8:
    // 0x1d53b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d53bc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D53BCu;
    {
        const bool branch_taken_0x1d53bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53bc) {
            ctx->pc = 0x1D5498u;
            goto label_1d5498;
        }
    }
    ctx->pc = 0x1D53C4u;
    // 0x1d53c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d53c8: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d53cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d53d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d53d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d53d8: 0x3052007f  andi        $s2, $v0, 0x7F
    ctx->pc = 0x1d53d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d53dc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d53e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d53e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d53e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d53ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d53f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d53f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d53f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d53fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5400: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x1d5400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x1d5404: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5408: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d540c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5414: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1d5414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1d5418: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1d541c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5420: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5428: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d542c: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x1d542cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x1d5430: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5434: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d543c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5440: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5448: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1d5448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d544c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5450: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5458: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d545c: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x1d545cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x1d5460: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5464: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d546c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5470: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5474: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5478: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1d547c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5480: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5488: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d548c: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x1d548cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x1d5490: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D5490u;
    {
        const bool branch_taken_0x1d5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5490) {
            ctx->pc = 0x1D5530u;
            goto label_1d5530;
        }
    }
    ctx->pc = 0x1D5498u;
label_1d5498:
    // 0x1d5498: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d549c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d54a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d54b4: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x1d54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x1d54b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d54bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54c0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1d54c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1d54c4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1d54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1d54c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d54d8: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x1d54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x1d54dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d54e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54e4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d54e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d54ec: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d54f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5500: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x1d5500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x1d5504: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d550c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5510: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5514: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1d5514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1d5518: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d551c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5520: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5524: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5528: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x1d5528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x1d552c: 0x0  nop
    ctx->pc = 0x1d552cu;
    // NOP
label_1d5530:
    // 0x1d5530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5534: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5538: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d553c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5544: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d554c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d554cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5554: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5558: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d555c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1d555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1d5560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5568: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d556c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5574: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5578: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1d5578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x1d557c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d557cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5580: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d558c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5590: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x1d5590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x1d5594: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1d5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d5598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d559c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d55a0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d55a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d55a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d55a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d55ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d55b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d55b4: 0xfc4300a0  sd          $v1, 0xA0($v0)
    ctx->pc = 0x1d55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 3));
    // 0x1d55b8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d55bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d55c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d55c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d55c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d55c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d55cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d55d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d55d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d55d8: 0xfc4300a8  sd          $v1, 0xA8($v0)
    ctx->pc = 0x1d55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 3));
    // 0x1d55dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d55e4: 0x1660ff74  bnez        $s3, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1D55E4u;
    {
        const bool branch_taken_0x1d55e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55e4) {
            ctx->pc = 0x1D53B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53b8;
        }
    }
    ctx->pc = 0x1D55ECu;
    // 0x1d55ec: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d55f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d55f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d55f4: 0x0  nop
    ctx->pc = 0x1d55f4u;
    // NOP
label_1d55f8:
    // 0x1d55f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d55f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d55fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5600: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5604: 0xe4400800  swc1        $f0, 0x800($v0)
    ctx->pc = 0x1d5604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2048), bits); }
    // 0x1d5608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d560c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5610: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5614: 0xe4400804  swc1        $f0, 0x804($v0)
    ctx->pc = 0x1d5614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2052), bits); }
    // 0x1d5618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d561c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5620: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5624: 0xe4400808  swc1        $f0, 0x808($v0)
    ctx->pc = 0x1d5624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2056), bits); }
    // 0x1d5628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5630: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5634: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5638: 0xe440080c  swc1        $f0, 0x80C($v0)
    ctx->pc = 0x1d5638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2060), bits); }
    // 0x1d563c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5640: 0xa0400990  sb          $zero, 0x990($v0)
    ctx->pc = 0x1d5640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5644: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1D5644u;
    SET_GPR_U32(ctx, 31, 0x1D564Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1D5644u, 0x1D564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D564Cu;
label_1d564c:
    // 0x1d564c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5650: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5654: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5658: 0xa44309aa  sh          $v1, 0x9AA($v0)
    ctx->pc = 0x1d5658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2474), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d565c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1D565Cu;
    SET_GPR_U32(ctx, 31, 0x1D5664u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1D565Cu, 0x1D5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5664u;
label_1d5664:
    // 0x1d5664: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1d5668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d566c: 0x0  nop
    ctx->pc = 0x1d566cu;
    // NOP
    // 0x1d5670: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5674: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5678: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d567c: 0xe46009dc  swc1        $f0, 0x9DC($v1)
    ctx->pc = 0x1d567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2524), bits); }
    // 0x1d5680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5684: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d5688: 0x1660ffdb  bnez        $s3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1D5688u;
    {
        const bool branch_taken_0x1d5688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5688) {
            ctx->pc = 0x1D55F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55f8;
        }
    }
    ctx->pc = 0x1D5690u;
    // 0x1d5690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d5694: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d5698: 0x16a0ff13  bnez        $s5, . + 4 + (-0xED << 2)
    ctx->pc = 0x1D5698u;
    {
        const bool branch_taken_0x1d5698 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5698) {
            ctx->pc = 0x1D52E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52e8;
        }
    }
    ctx->pc = 0x1D56A0u;
    // 0x1d56a0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1d56a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d56a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d56a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d56a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d56a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d56ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d56acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d56b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d56b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d56b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d56b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d56b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d56b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d56bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d56bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d56c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d56c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56CCu;
}
