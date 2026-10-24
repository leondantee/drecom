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

// Function: Plw02_atk04_atk
// Address: 0x1c3810 - 0x1c3a38
void Plw02_atk04_atk_0x1c3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk04_atk_0x1c3810");
#endif

    switch (ctx->pc) {
        case 0x1c3880u: goto label_1c3880;
        case 0x1c3898u: goto label_1c3898;
        case 0x1c3950u: goto label_1c3950;
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3970u: goto label_1c3970;
        case 0x1c397cu: goto label_1c397c;
        case 0x1c39c8u: goto label_1c39c8;
        default: break;
    }

    ctx->pc = 0x1c3810u;

    // 0x1c3810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3814: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c3814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c3818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c381c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c381cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c3820: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c3824: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c3824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c3828: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c3828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c382c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3830: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3834: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3834u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c383c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c383cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3840: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3848: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3848u;
    {
        const bool branch_taken_0x1c3848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3848) {
            ctx->pc = 0x1C38B4u;
            goto label_1c38b4;
        }
    }
    ctx->pc = 0x1C3850u;
    // 0x1c3850: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3850u;
    {
        const bool branch_taken_0x1c3850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3850) {
            ctx->pc = 0x1C3860u;
            goto label_1c3860;
        }
    }
    ctx->pc = 0x1C3858u;
    // 0x1c3858: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C3858u;
    {
        const bool branch_taken_0x1c3858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3858) {
            ctx->pc = 0x1C3A24u;
            goto label_1c3a24;
        }
    }
    ctx->pc = 0x1C3860u;
label_1c3860:
    // 0x1c3860: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3868: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c386c: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1c386cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c3870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3874: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3878: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3878u;
    SET_GPR_U32(ctx, 31, 0x1C3880u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3878u, 0x1C3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3880u;
label_1c3880:
    // 0x1c3880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3884: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3888: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1c3888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c388c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c388cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3890: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3890u;
    SET_GPR_U32(ctx, 31, 0x1C3898u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3890u, 0x1C3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3898u;
label_1c3898:
    // 0x1c3898: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c3898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c389c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c38a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c38a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c38a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c38a8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c38a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c38ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c38b0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c38b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c38b4:
    // 0x1c38b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c38b8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c38b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c38bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c38bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c38c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c38c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c38c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C38C4u;
    {
        const bool branch_taken_0x1c38c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c38c4) {
            ctx->pc = 0x1C38E4u;
            goto label_1c38e4;
        }
    }
    ctx->pc = 0x1C38CCu;
    // 0x1c38cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c38d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c38d4: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c38d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c38d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c38dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c38e0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c38e4:
    // 0x1c38e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c38e8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c38e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c38ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c38f0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c38f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c38f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C38F4u;
    {
        const bool branch_taken_0x1c38f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38f4) {
            ctx->pc = 0x1C3910u;
            goto label_1c3910;
        }
    }
    ctx->pc = 0x1C38FCu;
    // 0x1c38fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c3900: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c3900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c3904: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c3904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c3908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c390c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c390cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c3910:
    // 0x1c3910: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3914: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c3914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c3918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c391c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c3920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3920u;
    {
        const bool branch_taken_0x1c3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3920) {
            ctx->pc = 0x1C3940u;
            goto label_1c3940;
        }
    }
    ctx->pc = 0x1C3928u;
    // 0x1c3928: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c392c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c3930: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3934: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3938: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c393c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c393cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c3940:
    // 0x1c3940: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3944: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3944u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3948: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3948u;
    SET_GPR_U32(ctx, 31, 0x1C3950u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3948u, 0x1C3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3950u;
label_1c3950:
    // 0x1c3950: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3954: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3954u;
    SET_GPR_U32(ctx, 31, 0x1C395Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3954u, 0x1C395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C395Cu;
label_1c395c:
    // 0x1c395c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3960: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3968: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3968u;
    SET_GPR_U32(ctx, 31, 0x1C3970u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3968u, 0x1C3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3970u;
label_1c3970:
    // 0x1c3970: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3974: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3974u;
    SET_GPR_U32(ctx, 31, 0x1C397Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3974u, 0x1C397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C397Cu;
label_1c397c:
    // 0x1c397c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3980: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c3980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c3984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3988: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c3988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c398c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C398Cu;
    {
        const bool branch_taken_0x1c398c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c398c) {
            ctx->pc = 0x1C39D0u;
            goto label_1c39d0;
        }
    }
    ctx->pc = 0x1C3994u;
    // 0x1c3994: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3998: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c399c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C399Cu;
    {
        const bool branch_taken_0x1c399c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c399c) {
            ctx->pc = 0x1C39D0u;
            goto label_1c39d0;
        }
    }
    ctx->pc = 0x1C39A4u;
    // 0x1c39a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c39ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c39b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c39b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C39B4u;
    {
        const bool branch_taken_0x1c39b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39b4) {
            ctx->pc = 0x1C39D0u;
            goto label_1c39d0;
        }
    }
    ctx->pc = 0x1C39BCu;
    // 0x1c39bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39c0: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C39C0u;
    SET_GPR_U32(ctx, 31, 0x1C39C8u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C39C0u, 0x1C39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C8u;
label_1c39c8:
    // 0x1c39c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C39C8u;
    {
        const bool branch_taken_0x1c39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39c8) {
            ctx->pc = 0x1C3A24u;
            goto label_1c3a24;
        }
    }
    ctx->pc = 0x1C39D0u;
label_1c39d0:
    // 0x1c39d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39d4: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c39d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c39d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C39D8u;
    {
        const bool branch_taken_0x1c39d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39d8) {
            ctx->pc = 0x1C3A24u;
            goto label_1c3a24;
        }
    }
    ctx->pc = 0x1C39E0u;
    // 0x1c39e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c39e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39e8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c39e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c39ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39f0: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c39f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c39f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c39f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A10u;
            goto label_1c3a10;
        }
    }
    ctx->pc = 0x1C3A00u;
    // 0x1c3a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3a04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A08u;
    {
        const bool branch_taken_0x1c3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a08) {
            ctx->pc = 0x1C3A1Cu;
            goto label_1c3a1c;
        }
    }
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3a18: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c3a1c:
    // 0x1c3a1c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3A1Cu;
    {
        const bool branch_taken_0x1c3a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a1c) {
            ctx->pc = 0x1C3A24u;
            goto label_1c3a24;
        }
    }
    ctx->pc = 0x1C3A24u;
label_1c3a24:
    // 0x1c3a24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c3a24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3a2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c3a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3A38u;
}
