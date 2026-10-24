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

// Function: Plw03_atk05_atk
// Address: 0x1c6840 - 0x1c69dc
void Plw03_atk05_atk_0x1c6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk05_atk_0x1c6840");
#endif

    switch (ctx->pc) {
        case 0x1c68b0u: goto label_1c68b0;
        case 0x1c68c8u: goto label_1c68c8;
        case 0x1c6980u: goto label_1c6980;
        case 0x1c698cu: goto label_1c698c;
        case 0x1c69a0u: goto label_1c69a0;
        case 0x1c69acu: goto label_1c69ac;
        case 0x1c69c8u: goto label_1c69c8;
        default: break;
    }

    ctx->pc = 0x1c6840u;

    // 0x1c6840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6844: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c6848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c684c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c6850: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c6850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c6854: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c6854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c6858: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c6858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c685c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c685cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c6860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6864: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c6864u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c6868: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c686c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c686cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c6870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c6870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6878: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C6878u;
    {
        const bool branch_taken_0x1c6878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6878) {
            ctx->pc = 0x1C68E4u;
            goto label_1c68e4;
        }
    }
    ctx->pc = 0x1C6880u;
    // 0x1c6880: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6880u;
    {
        const bool branch_taken_0x1c6880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6880) {
            ctx->pc = 0x1C6890u;
            goto label_1c6890;
        }
    }
    ctx->pc = 0x1C6888u;
    // 0x1c6888: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C6888u;
    {
        const bool branch_taken_0x1c6888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6888) {
            ctx->pc = 0x1C69C8u;
            goto label_1c69c8;
        }
    }
    ctx->pc = 0x1C6890u;
label_1c6890:
    // 0x1c6890: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6898: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c6898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c689c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1c689cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c68a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c68a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c68a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c68a8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C68A8u;
    SET_GPR_U32(ctx, 31, 0x1C68B0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C68A8u, 0x1C68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B0u;
label_1c68b0:
    // 0x1c68b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68b4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c68b8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c68bc: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1c68bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c68c0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C68C0u;
    SET_GPR_U32(ctx, 31, 0x1C68C8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C68C0u, 0x1C68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68C8u;
label_1c68c8:
    // 0x1c68c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c68cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c68d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c68d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68d8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c68d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c68dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c68e0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c68e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c68e4:
    // 0x1c68e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68e8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c68e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c68ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c68ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c68f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c68f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c68f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C68F4u;
    {
        const bool branch_taken_0x1c68f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68f4) {
            ctx->pc = 0x1C6914u;
            goto label_1c6914;
        }
    }
    ctx->pc = 0x1C68FCu;
    // 0x1c68fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c68fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6900: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6904: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c6908: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c690c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6910: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c6914:
    // 0x1c6914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6918: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c691c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6920: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c6920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c6924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6924u;
    {
        const bool branch_taken_0x1c6924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6924) {
            ctx->pc = 0x1C6940u;
            goto label_1c6940;
        }
    }
    ctx->pc = 0x1C692Cu;
    // 0x1c692c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6930: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c6934: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c6934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c6938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c693c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c693cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c6940:
    // 0x1c6940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6944: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c6948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c694c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c6950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6950u;
    {
        const bool branch_taken_0x1c6950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6950) {
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C6958u;
    // 0x1c6958: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c695c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c695cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c6960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c6964: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c696c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c696cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c6970:
    // 0x1c6970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6974: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6978: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C6978u;
    SET_GPR_U32(ctx, 31, 0x1C6980u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6978u, 0x1C6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6980u;
label_1c6980:
    // 0x1c6980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6984: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6984u;
    SET_GPR_U32(ctx, 31, 0x1C698Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6984u, 0x1C698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C698Cu;
label_1c698c:
    // 0x1c698c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c698cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6990: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6998: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C6998u;
    SET_GPR_U32(ctx, 31, 0x1C69A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6998u, 0x1C69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69A0u;
label_1c69a0:
    // 0x1c69a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c69a4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C69A4u;
    SET_GPR_U32(ctx, 31, 0x1C69ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C69A4u, 0x1C69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69ACu;
label_1c69ac:
    // 0x1c69ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c69b0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c69b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c69b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C69B4u;
    {
        const bool branch_taken_0x1c69b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69b4) {
            ctx->pc = 0x1C69C8u;
            goto label_1c69c8;
        }
    }
    ctx->pc = 0x1C69BCu;
    // 0x1c69bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c69c0: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C69C0u;
    SET_GPR_U32(ctx, 31, 0x1C69C8u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C69C0u, 0x1C69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C8u;
label_1c69c8:
    // 0x1c69c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c69c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c69cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c69ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c69d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c69d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c69d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C69D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69DCu;
}
