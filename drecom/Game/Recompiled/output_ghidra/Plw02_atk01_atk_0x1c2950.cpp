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

// Function: Plw02_atk01_atk
// Address: 0x1c2950 - 0x1c2b78
void Plw02_atk01_atk_0x1c2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk01_atk_0x1c2950");
#endif

    switch (ctx->pc) {
        case 0x1c29c0u: goto label_1c29c0;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2b08u: goto label_1c2b08;
        default: break;
    }

    ctx->pc = 0x1c2950u;

    // 0x1c2950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2954: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c2954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c2958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c295c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c295cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c2960: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c2964: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c2964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c2968: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c296c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c296cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c2970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2974: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c2974u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c2978: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c297c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c297cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2980: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c2980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2988: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2988u;
    {
        const bool branch_taken_0x1c2988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2988) {
            ctx->pc = 0x1C29F4u;
            goto label_1c29f4;
        }
    }
    ctx->pc = 0x1C2990u;
    // 0x1c2990: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2990u;
    {
        const bool branch_taken_0x1c2990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2990) {
            ctx->pc = 0x1C29A0u;
            goto label_1c29a0;
        }
    }
    ctx->pc = 0x1C2998u;
    // 0x1c2998: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C2998u;
    {
        const bool branch_taken_0x1c2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2998) {
            ctx->pc = 0x1C2B64u;
            goto label_1c2b64;
        }
    }
    ctx->pc = 0x1C29A0u;
label_1c29a0:
    // 0x1c29a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c29a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29a8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c29ac: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c29b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c29b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c29b8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C29B8u;
    SET_GPR_U32(ctx, 31, 0x1C29C0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C29B8u, 0x1C29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29C0u;
label_1c29c0:
    // 0x1c29c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29c4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c29c8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c29cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c29d0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C29D0u;
    SET_GPR_U32(ctx, 31, 0x1C29D8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C29D0u, 0x1C29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c29dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29e0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c29e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c29e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29e8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c29e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c29ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c29f0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c29f4:
    // 0x1c29f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c29f8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c29f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c29fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c29fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2a00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2a04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2A04u;
    {
        const bool branch_taken_0x1c2a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a04) {
            ctx->pc = 0x1C2A24u;
            goto label_1c2a24;
        }
    }
    ctx->pc = 0x1C2A0Cu;
    // 0x1c2a0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2a14: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c2a18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c2a1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c2a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2a20: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c2a24:
    // 0x1c2a24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a28: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c2a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c2a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c2a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2a30: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c2a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2A34u;
    {
        const bool branch_taken_0x1c2a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a34) {
            ctx->pc = 0x1C2A50u;
            goto label_1c2a50;
        }
    }
    ctx->pc = 0x1C2A3Cu;
    // 0x1c2a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c2a40: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c2a44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c2a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c2a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c2a4c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c2a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c2a50:
    // 0x1c2a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a54: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c2a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c2a58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2a5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c2a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c2a60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2A60u;
    {
        const bool branch_taken_0x1c2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a60) {
            ctx->pc = 0x1C2A80u;
            goto label_1c2a80;
        }
    }
    ctx->pc = 0x1C2A68u;
    // 0x1c2a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c2a6c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c2a70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2a74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2a78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c2a7c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c2a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c2a80:
    // 0x1c2a80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2a88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2A88u;
    SET_GPR_U32(ctx, 31, 0x1C2A90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2A88u, 0x1C2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A90u;
label_1c2a90:
    // 0x1c2a90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a94: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2A94u;
    SET_GPR_U32(ctx, 31, 0x1C2A9Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2A94u, 0x1C2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A9Cu;
label_1c2a9c:
    // 0x1c2a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2aa0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2aa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2aa8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2AA8u;
    SET_GPR_U32(ctx, 31, 0x1C2AB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2AA8u, 0x1C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ab4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2AB4u;
    SET_GPR_U32(ctx, 31, 0x1C2ABCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2AB4u, 0x1C2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ABCu;
label_1c2abc:
    // 0x1c2abc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2ac0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c2ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c2ac4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2ac8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c2ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c2acc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2ACCu;
    {
        const bool branch_taken_0x1c2acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2acc) {
            ctx->pc = 0x1C2B10u;
            goto label_1c2b10;
        }
    }
    ctx->pc = 0x1C2AD4u;
    // 0x1c2ad4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2ad8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c2adc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2ADCu;
    {
        const bool branch_taken_0x1c2adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2adc) {
            ctx->pc = 0x1C2B10u;
            goto label_1c2b10;
        }
    }
    ctx->pc = 0x1C2AE4u;
    // 0x1c2ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2ae8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2aec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2af0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2af4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2AF4u;
    {
        const bool branch_taken_0x1c2af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2af4) {
            ctx->pc = 0x1C2B10u;
            goto label_1c2b10;
        }
    }
    ctx->pc = 0x1C2AFCu;
    // 0x1c2afc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b00: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C2B00u;
    SET_GPR_U32(ctx, 31, 0x1C2B08u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C2B00u, 0x1C2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B08u;
label_1c2b08:
    // 0x1c2b08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2B64u;
            goto label_1c2b64;
        }
    }
    ctx->pc = 0x1C2B10u;
label_1c2b10:
    // 0x1c2b10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b14: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c2b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c2b18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2B18u;
    {
        const bool branch_taken_0x1c2b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b18) {
            ctx->pc = 0x1C2B64u;
            goto label_1c2b64;
        }
    }
    ctx->pc = 0x1C2B20u;
    // 0x1c2b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b28: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2b2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b30: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c2b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c2b34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2b38: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B38u;
    {
        const bool branch_taken_0x1c2b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b38) {
            ctx->pc = 0x1C2B50u;
            goto label_1c2b50;
        }
    }
    ctx->pc = 0x1C2B40u;
    // 0x1c2b40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B48u;
    {
        const bool branch_taken_0x1c2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b48) {
            ctx->pc = 0x1C2B5Cu;
            goto label_1c2b5c;
        }
    }
    ctx->pc = 0x1C2B50u;
label_1c2b50:
    // 0x1c2b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2b54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b58: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c2b5c:
    // 0x1c2b5c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C2B5Cu;
    {
        const bool branch_taken_0x1c2b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b5c) {
            ctx->pc = 0x1C2B64u;
            goto label_1c2b64;
        }
    }
    ctx->pc = 0x1C2B64u;
label_1c2b64:
    // 0x1c2b64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c2b64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c2b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c2b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B78u;
}
