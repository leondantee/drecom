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

// Function: Plw02_atk05_atk
// Address: 0x1c3f70 - 0x1c4198
void Plw02_atk05_atk_0x1c3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk05_atk_0x1c3f70");
#endif

    switch (ctx->pc) {
        case 0x1c3fe0u: goto label_1c3fe0;
        case 0x1c3ff8u: goto label_1c3ff8;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40dcu: goto label_1c40dc;
        case 0x1c4128u: goto label_1c4128;
        default: break;
    }

    ctx->pc = 0x1c3f70u;

    // 0x1c3f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3f74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c3f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3f7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c3f80: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c3f84: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c3f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c3f88: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c3f8c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3f94: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3f94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3f98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3f9c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c3f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3fa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3fa8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3FA8u;
    {
        const bool branch_taken_0x1c3fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3fa8) {
            ctx->pc = 0x1C4014u;
            goto label_1c4014;
        }
    }
    ctx->pc = 0x1C3FB0u;
    // 0x1c3fb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C3FC0u;
            goto label_1c3fc0;
        }
    }
    ctx->pc = 0x1C3FB8u;
    // 0x1c3fb8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C3FB8u;
    {
        const bool branch_taken_0x1c3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3fb8) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C3FC0u;
label_1c3fc0:
    // 0x1c3fc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3fc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3fc8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3fcc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1c3fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c3fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3fd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3fd8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3FD8u;
    SET_GPR_U32(ctx, 31, 0x1C3FE0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3FD8u, 0x1C3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FE0u;
label_1c3fe0:
    // 0x1c3fe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3fe4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3fe8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c3fec: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1c3fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c3ff0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3FF0u;
    SET_GPR_U32(ctx, 31, 0x1C3FF8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3FF0u, 0x1C3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FF8u;
label_1c3ff8:
    // 0x1c3ff8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c3ffc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4000: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c4000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c4004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4008: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c400c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4010: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c4014:
    // 0x1c4014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4018: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c4018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c401c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4020: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c4024: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4024u;
    {
        const bool branch_taken_0x1c4024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4024) {
            ctx->pc = 0x1C4044u;
            goto label_1c4044;
        }
    }
    ctx->pc = 0x1C402Cu;
    // 0x1c402c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4030: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4034: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c4038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c4038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c403c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4040: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c4040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c4044:
    // 0x1c4044: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4048: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c4048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c404c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4050: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c4050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c4054: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4054u;
    {
        const bool branch_taken_0x1c4054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4054) {
            ctx->pc = 0x1C4070u;
            goto label_1c4070;
        }
    }
    ctx->pc = 0x1C405Cu;
    // 0x1c405c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c405cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c4060: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c4064: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c4064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c4068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c406c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c406cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c4070:
    // 0x1c4070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4074: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c4074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c4078: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c407c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c4080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4080u;
    {
        const bool branch_taken_0x1c4080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4080) {
            ctx->pc = 0x1C40A0u;
            goto label_1c40a0;
        }
    }
    ctx->pc = 0x1C4088u;
    // 0x1c4088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c408c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c4090: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4094: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c4094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4098: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c409c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c409cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c40a0:
    // 0x1c40a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c40a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c40a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C40A8u;
    SET_GPR_U32(ctx, 31, 0x1C40B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C40A8u, 0x1C40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40B0u;
label_1c40b0:
    // 0x1c40b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C40B4u;
    SET_GPR_U32(ctx, 31, 0x1C40BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C40B4u, 0x1C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40BCu;
label_1c40bc:
    // 0x1c40bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c40bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c40c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c40c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c40c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C40C8u;
    SET_GPR_U32(ctx, 31, 0x1C40D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C40C8u, 0x1C40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40D0u;
label_1c40d0:
    // 0x1c40d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c40d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C40D4u;
    SET_GPR_U32(ctx, 31, 0x1C40DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C40D4u, 0x1C40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40DCu;
label_1c40dc:
    // 0x1c40dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c40e0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c40e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c40e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c40e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c40e8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c40e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c40ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C40ECu;
    {
        const bool branch_taken_0x1c40ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c40ec) {
            ctx->pc = 0x1C4130u;
            goto label_1c4130;
        }
    }
    ctx->pc = 0x1C40F4u;
    // 0x1c40f4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c40f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c40fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C40FCu;
    {
        const bool branch_taken_0x1c40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c40fc) {
            ctx->pc = 0x1C4130u;
            goto label_1c4130;
        }
    }
    ctx->pc = 0x1C4104u;
    // 0x1c4104: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c410c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c4110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4114: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4114u;
    {
        const bool branch_taken_0x1c4114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4114) {
            ctx->pc = 0x1C4130u;
            goto label_1c4130;
        }
    }
    ctx->pc = 0x1C411Cu;
    // 0x1c411c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4120: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C4120u;
    SET_GPR_U32(ctx, 31, 0x1C4128u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C4120u, 0x1C4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4128u;
label_1c4128:
    // 0x1c4128: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4128u;
    {
        const bool branch_taken_0x1c4128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4128) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C4130u;
label_1c4130:
    // 0x1c4130: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4134: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c4134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c4138: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4138u;
    {
        const bool branch_taken_0x1c4138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4138) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C4140u;
    // 0x1c4140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4148: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c414c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4150: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c4150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c4154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4158: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4158u;
    {
        const bool branch_taken_0x1c4158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4158) {
            ctx->pc = 0x1C4170u;
            goto label_1c4170;
        }
    }
    ctx->pc = 0x1C4160u;
    // 0x1c4160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4168u;
    {
        const bool branch_taken_0x1c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4168) {
            ctx->pc = 0x1C417Cu;
            goto label_1c417c;
        }
    }
    ctx->pc = 0x1C4170u;
label_1c4170:
    // 0x1c4170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4174: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4178: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c4178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c417c:
    // 0x1c417c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C417Cu;
    {
        const bool branch_taken_0x1c417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c417c) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C4184u;
label_1c4184:
    // 0x1c4184: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c4184u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c418c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c418cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4190: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4198u;
}
