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

// Function: Technique_fadeout
// Address: 0x37b2e0 - 0x37b750
void Technique_fadeout_0x37b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_fadeout_0x37b2e0");
#endif

    switch (ctx->pc) {
        case 0x37b4a0u: goto label_37b4a0;
        case 0x37b660u: goto label_37b660;
        case 0x37b694u: goto label_37b694;
        case 0x37b6c0u: goto label_37b6c0;
        case 0x37b6f0u: goto label_37b6f0;
        case 0x37b718u: goto label_37b718;
        default: break;
    }

    ctx->pc = 0x37b2e0u;

    // 0x37b2e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37b2e4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x37b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x37b2e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37b2ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37b2f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37b2f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37b2f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37b2fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37b300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37b304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b30c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x37b310: 0x24716150  addiu       $s1, $v1, 0x6150
    ctx->pc = 0x37b310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x37b314: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37b314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37b318: 0x24720a80  addiu       $s2, $v1, 0xA80
    ctx->pc = 0x37b318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
    // 0x37b31c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37b320: 0x24700ab0  addiu       $s0, $v1, 0xAB0
    ctx->pc = 0x37b320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x37b324: 0x8e265dd0  lw          $a2, 0x5DD0($s1)
    ctx->pc = 0x37b324u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x62BF20u));
    // 0x37b328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b32c: 0x10c30025  beq         $a2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x37B32Cu;
    {
        const bool branch_taken_0x37b32c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x37b32c) {
            ctx->pc = 0x37B3C4u;
            goto label_37b3c4;
        }
    }
    ctx->pc = 0x37B334u;
    // 0x37b334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b338: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37B338u;
    {
        const bool branch_taken_0x37b338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x37b338) {
            ctx->pc = 0x37B36Cu;
            goto label_37b36c;
        }
    }
    ctx->pc = 0x37B340u;
    // 0x37b340: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B340u;
    {
        const bool branch_taken_0x37b340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b340) {
            ctx->pc = 0x37B350u;
            goto label_37b350;
        }
    }
    ctx->pc = 0x37B348u;
    // 0x37b348: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x37B348u;
    {
        const bool branch_taken_0x37b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b348) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B350u;
label_37b350:
    // 0x37b350: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b354: 0xac200a70  sw          $zero, 0xA70($at)
    ctx->pc = 0x37b354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0A70u, _value); } while (0);
    // 0x37b358: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b35c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b360: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b364: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x37B364u;
    {
        const bool branch_taken_0x37b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b364) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B36Cu;
label_37b36c:
    // 0x37b36c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b370: 0x8c230a70  lw          $v1, 0xA70($at)
    ctx->pc = 0x37b370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b378: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b37c: 0xac230a70  sw          $v1, 0xA70($at)
    ctx->pc = 0x37b37cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0A70u, _value); } while (0);
    // 0x37b380: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b384: 0x8c230a70  lw          $v1, 0xA70($at)
    ctx->pc = 0x37b384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b38c: 0x0  nop
    ctx->pc = 0x37b38cu;
    // NOP
    // 0x37b390: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b394: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x37b394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x37b398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b39c: 0x0  nop
    ctx->pc = 0x37b39cu;
    // NOP
    // 0x37b3a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37b3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b3a4: 0x0  nop
    ctx->pc = 0x37b3a4u;
    // NOP
    // 0x37b3a8: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x37B3A8u;
    {
        const bool branch_taken_0x37b3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b3a8) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B3B0u;
    // 0x37b3b0: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b3b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b3b8: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b3bc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x37B3BCu;
    {
        const bool branch_taken_0x37b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b3bc) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B3C4u;
label_37b3c4:
    // 0x37b3c4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3c8: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b3cc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37b3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37b3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37B3D0u;
    {
        const bool branch_taken_0x37b3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b3d0) {
            ctx->pc = 0x37B408u;
            goto label_37b408;
        }
    }
    ctx->pc = 0x37B3D8u;
    // 0x37b3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b3dc: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x37b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x37b3e0: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b3e4: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b3e8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3ec: 0x8c2605a0  lw          $a2, 0x5A0($at)
    ctx->pc = 0x37b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b3f0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x37b3f4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b3f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3fc: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37b400: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37B400u;
    {
        const bool branch_taken_0x37b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b400) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B408u;
label_37b408:
    // 0x37b408: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b40c: 0x8c260588  lw          $a2, 0x588($at)
    ctx->pc = 0x37b40cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b414: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x37B414u;
    {
        const bool branch_taken_0x37b414 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x37b414) {
            ctx->pc = 0x37B460u;
            goto label_37b460;
        }
    }
    ctx->pc = 0x37B41Cu;
    // 0x37b41c: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b420: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b424: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b428: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b42c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b430: 0xac230590  sw          $v1, 0x590($at)
    ctx->pc = 0x37b430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x37b434: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b438: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37b438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b43c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b440: 0xac230598  sw          $v1, 0x598($at)
    ctx->pc = 0x37b440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
    // 0x37b444: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b448: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b44c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x37b44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x37b450: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b454: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37b458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B458u;
    {
        const bool branch_taken_0x37b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b458) {
            ctx->pc = 0x37B46Cu;
            goto label_37b46c;
        }
    }
    ctx->pc = 0x37B460u;
label_37b460:
    // 0x37b460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b464: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37b464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    // 0x37b468: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
label_37b46c:
    // 0x37b46c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b470: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b474: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37b478: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x37B478u;
    {
        const bool branch_taken_0x37b478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b478) {
            ctx->pc = 0x37B71Cu;
            goto label_37b71c;
        }
    }
    ctx->pc = 0x37B480u;
    // 0x37b480: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b484: 0x8c220a70  lw          $v0, 0xA70($at)
    ctx->pc = 0x37b484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b488: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x37B488u;
    {
        const bool branch_taken_0x37b488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b488) {
            ctx->pc = 0x37B618u;
            goto label_37b618;
        }
    }
    ctx->pc = 0x37B490u;
    // 0x37b490: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x37b490u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b494: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b494u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B498u;
    {
        const bool branch_taken_0x37b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b498) {
            ctx->pc = 0x37B4C0u;
            goto label_37b4c0;
        }
    }
    ctx->pc = 0x37B4A0u;
label_37b4a0:
    // 0x37b4a0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37b4a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b4a8: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37b4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b4b4: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37b4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37b4b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37b4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37b4bc: 0x0  nop
    ctx->pc = 0x37b4bcu;
    // NOP
label_37b4c0:
    // 0x37b4c0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b4c4: 0x8c220590  lw          $v0, 0x590($at)
    ctx->pc = 0x37b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0590u));
    // 0x37b4c8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x37b4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b4cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B4CCu;
    {
        const bool branch_taken_0x37b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b4cc) {
            ctx->pc = 0x37B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b4a0;
        }
    }
    ctx->pc = 0x37B4D4u;
    // 0x37b4d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b4d8: 0x8c220598  lw          $v0, 0x598($at)
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0598u));
    // 0x37b4dc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37b4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37b4e0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x37b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x37b4e4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37b4e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b4ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b4f0: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37b4f4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x37b4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b4f8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x37b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37b4fc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37b500: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x37b500u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b504: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x37b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37b508: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37b50c: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x37b50cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b510: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b514: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x37b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x37b518: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37b51c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37b520: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b524: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x37b524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x37b528: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x37b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x37b52c: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37b530: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x37b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x37b534: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37b534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37b538: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b53c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37b540: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37b544: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37b548: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b54c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x37b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x37b550: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x37b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37b554: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37b558: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b55c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x37b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37b560: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b564: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37b568: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37b568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b56c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37b570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b574: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b578: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b580: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x37b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x37b584: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b588: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37b588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37b58c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x37b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x37b590: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b594: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37b598: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b59c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37b5a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37b5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b5a4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37b5a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b5ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b5b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b5b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b5b8: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x37b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x37b5bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5c0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37b5c4: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x37b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x37b5c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37b5d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5d4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37b5d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b5e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b5e4: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x37b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x37b5e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5ec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x37b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37b5f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5f4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37b5f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b604: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37b608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b60c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37b610: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37b614: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x37b614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_37b618:
    // 0x37b618: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37b61c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37b620: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b624: 0x8c220a70  lw          $v0, 0xA70($at)
    ctx->pc = 0x37b624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b62c: 0x0  nop
    ctx->pc = 0x37b62cu;
    // NOP
    // 0x37b630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37b630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37b634: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37b634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37b638: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37b63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b640: 0x0  nop
    ctx->pc = 0x37b640u;
    // NOP
    // 0x37b644: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37b644u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37b648: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37b64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b650: 0x0  nop
    ctx->pc = 0x37b650u;
    // NOP
    // 0x37b654: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x37b654u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37b658: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x37B658u;
    SET_GPR_U32(ctx, 31, 0x37B660u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x37B658u, 0x37B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B660u;
label_37b660:
    // 0x37b660: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x37b660u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b664: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37b664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37b668: 0x161200  sll         $v0, $s6, 8
    ctx->pc = 0x37b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x37b66c: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x37b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x37b670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b674: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b67c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b680: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b684: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b688: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b68c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B68Cu;
    SET_GPR_U32(ctx, 31, 0x37B694u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B68Cu, 0x37B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B694u;
label_37b694:
    // 0x37b694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b698: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b69c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b6a0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37b6a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b6a8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37b6ac: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37b6b0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b6b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b6b8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B6B8u;
    SET_GPR_U32(ctx, 31, 0x37B6C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B6B8u, 0x37B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6C0u;
label_37b6c0:
    // 0x37b6c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b6cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b6d0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37b6d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b6d8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37b6dc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37b6e0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b6e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b6e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b6e8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B6E8u;
    SET_GPR_U32(ctx, 31, 0x37B6F0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B6E8u, 0x37B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6F0u;
label_37b6f0:
    // 0x37b6f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b6f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b6f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b6fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b700: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37b704: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b708: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b70c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b70cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b710: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B710u;
    SET_GPR_U32(ctx, 31, 0x37B718u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B710u, 0x37B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B718u;
label_37b718:
    // 0x37b718: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_37b71c:
    // 0x37b71c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x37b71cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37b720: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37b720u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37b724: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37b724u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37b728: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37b728u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37b72c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37b72cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37b730: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37b730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b744: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x37b744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37b748: 0x3e00008  jr          $ra
    ctx->pc = 0x37B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B750u;
}
