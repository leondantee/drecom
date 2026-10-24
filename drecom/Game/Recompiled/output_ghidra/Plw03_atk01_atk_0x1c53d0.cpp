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

// Function: Plw03_atk01_atk
// Address: 0x1c53d0 - 0x1c556c
void Plw03_atk01_atk_0x1c53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk01_atk_0x1c53d0");
#endif

    switch (ctx->pc) {
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5458u: goto label_1c5458;
        case 0x1c5510u: goto label_1c5510;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5558u: goto label_1c5558;
        default: break;
    }

    ctx->pc = 0x1c53d0u;

    // 0x1c53d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c53d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c53d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c53dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c53e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c53e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c53e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c53e8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c53ec: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c53ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c53f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c53f4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c53f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c53f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c53fc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c53fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5400: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5408: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C5408u;
    {
        const bool branch_taken_0x1c5408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5408) {
            ctx->pc = 0x1C5474u;
            goto label_1c5474;
        }
    }
    ctx->pc = 0x1C5410u;
    // 0x1c5410: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5410u;
    {
        const bool branch_taken_0x1c5410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5410) {
            ctx->pc = 0x1C5420u;
            goto label_1c5420;
        }
    }
    ctx->pc = 0x1C5418u;
    // 0x1c5418: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C5418u;
    {
        const bool branch_taken_0x1c5418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5418) {
            ctx->pc = 0x1C5558u;
            goto label_1c5558;
        }
    }
    ctx->pc = 0x1C5420u;
label_1c5420:
    // 0x1c5420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5424: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5428: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c542c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c5430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5434: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5438: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5438u;
    SET_GPR_U32(ctx, 31, 0x1C5440u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5438u, 0x1C5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5440u;
label_1c5440:
    // 0x1c5440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5444: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5448: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c544c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1c544cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c5450: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5450u;
    SET_GPR_U32(ctx, 31, 0x1C5458u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5450u, 0x1C5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5458u;
label_1c5458:
    // 0x1c5458: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c545c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5460: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c5460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5468: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c546c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5470: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5474:
    // 0x1c5474: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5478: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c5478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c547c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c5480: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5484: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5484u;
    {
        const bool branch_taken_0x1c5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5484) {
            ctx->pc = 0x1C54A4u;
            goto label_1c54a4;
        }
    }
    ctx->pc = 0x1C548Cu;
    // 0x1c548c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c5494: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c5498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c549c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c54a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c54a4:
    // 0x1c54a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c54a8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c54a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c54ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c54acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c54b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c54b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c54b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C54B4u;
    {
        const bool branch_taken_0x1c54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54b4) {
            ctx->pc = 0x1C54D0u;
            goto label_1c54d0;
        }
    }
    ctx->pc = 0x1C54BCu;
    // 0x1c54bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c54c0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c54c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c54c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c54c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c54c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c54cc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c54ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c54d0:
    // 0x1c54d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c54d4: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c54d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c54d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c54d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c54dc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c54dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c54e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C54E0u;
    {
        const bool branch_taken_0x1c54e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54e0) {
            ctx->pc = 0x1C5500u;
            goto label_1c5500;
        }
    }
    ctx->pc = 0x1C54E8u;
    // 0x1c54e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c54ec: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c54f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c54f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c54f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c54f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c54f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c54fc: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c54fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c5500:
    // 0x1c5500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5508: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5508u;
    SET_GPR_U32(ctx, 31, 0x1C5510u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5508u, 0x1C5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5510u;
label_1c5510:
    // 0x1c5510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5514: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5514u;
    SET_GPR_U32(ctx, 31, 0x1C551Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5514u, 0x1C551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C551Cu;
label_1c551c:
    // 0x1c551c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c551cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5528: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5528u;
    SET_GPR_U32(ctx, 31, 0x1C5530u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5528u, 0x1C5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5530u;
label_1c5530:
    // 0x1c5530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5534: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5534u;
    SET_GPR_U32(ctx, 31, 0x1C553Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5534u, 0x1C553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C553Cu;
label_1c553c:
    // 0x1c553c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5540: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c5540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c5544: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5544u;
    {
        const bool branch_taken_0x1c5544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5544) {
            ctx->pc = 0x1C5558u;
            goto label_1c5558;
        }
    }
    ctx->pc = 0x1C554Cu;
    // 0x1c554c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5550: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C5550u;
    SET_GPR_U32(ctx, 31, 0x1C5558u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C5550u, 0x1C5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5558u;
label_1c5558:
    // 0x1c5558: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c5558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c555c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c5560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5564: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C556Cu;
}
