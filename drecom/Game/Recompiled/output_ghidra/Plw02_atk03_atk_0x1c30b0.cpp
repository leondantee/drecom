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

// Function: Plw02_atk03_atk
// Address: 0x1c30b0 - 0x1c32d8
void Plw02_atk03_atk_0x1c30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk03_atk_0x1c30b0");
#endif

    switch (ctx->pc) {
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c31f0u: goto label_1c31f0;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3210u: goto label_1c3210;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c3268u: goto label_1c3268;
        default: break;
    }

    ctx->pc = 0x1c30b0u;

    // 0x1c30b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c30b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c30b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c30b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c30b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c30bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c30c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c30c4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c30c8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c30cc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c30ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c30d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c30d4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c30d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c30d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c30dc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c30dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c30e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c30e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c30e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30e8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C30E8u;
    {
        const bool branch_taken_0x1c30e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c30e8) {
            ctx->pc = 0x1C3154u;
            goto label_1c3154;
        }
    }
    ctx->pc = 0x1C30F0u;
    // 0x1c30f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C30F0u;
    {
        const bool branch_taken_0x1c30f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c30f0) {
            ctx->pc = 0x1C3100u;
            goto label_1c3100;
        }
    }
    ctx->pc = 0x1C30F8u;
    // 0x1c30f8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1C30F8u;
    {
        const bool branch_taken_0x1c30f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c30f8) {
            ctx->pc = 0x1C32C4u;
            goto label_1c32c4;
        }
    }
    ctx->pc = 0x1C3100u;
label_1c3100:
    // 0x1c3100: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3108: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c310c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3118: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3118u;
    SET_GPR_U32(ctx, 31, 0x1C3120u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3118u, 0x1C3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3120u;
label_1c3120:
    // 0x1c3120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3124: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3128: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c312c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c3130: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3130u, 0x1C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c313c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3140: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c3140u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c3144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3148: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c314c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3150: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3154:
    // 0x1c3154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3158: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c3158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c315c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c3160: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c3160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c3164: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3164u;
    {
        const bool branch_taken_0x1c3164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3164) {
            ctx->pc = 0x1C3184u;
            goto label_1c3184;
        }
    }
    ctx->pc = 0x1C316Cu;
    // 0x1c316c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3170: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c3174: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c3174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c3178: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c3178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c317c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3180: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c3180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c3184:
    // 0x1c3184: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3188: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c3188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c318c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c3190: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c3190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c3194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3194u;
    {
        const bool branch_taken_0x1c3194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3194) {
            ctx->pc = 0x1C31B0u;
            goto label_1c31b0;
        }
    }
    ctx->pc = 0x1C319Cu;
    // 0x1c319c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c31a0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c31a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c31a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c31a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c31ac: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c31acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c31b0:
    // 0x1c31b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c31b4: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c31b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c31b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c31b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c31bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c31bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c31c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C31C0u;
    {
        const bool branch_taken_0x1c31c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c31c0) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C31C8u;
    // 0x1c31c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c31cc: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c31d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c31d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c31d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c31d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c31d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c31dc: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c31dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c31e0:
    // 0x1c31e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c31e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c31e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c31e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C31E8u;
    SET_GPR_U32(ctx, 31, 0x1C31F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C31E8u, 0x1C31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31F0u;
label_1c31f0:
    // 0x1c31f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c31f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C31F4u;
    SET_GPR_U32(ctx, 31, 0x1C31FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C31F4u, 0x1C31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31FCu;
label_1c31fc:
    // 0x1c31fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c31fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3208: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3208u;
    SET_GPR_U32(ctx, 31, 0x1C3210u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3208u, 0x1C3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3210u;
label_1c3210:
    // 0x1c3210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3214: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3214u;
    SET_GPR_U32(ctx, 31, 0x1C321Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3214u, 0x1C321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C321Cu;
label_1c321c:
    // 0x1c321c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3220: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c3220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c3224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3228: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c3228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c322c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C322Cu;
    {
        const bool branch_taken_0x1c322c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c322c) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3234u;
    // 0x1c3234: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3238: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c323c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C323Cu;
    {
        const bool branch_taken_0x1c323c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c323c) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3244u;
    // 0x1c3244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3248: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c324c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c3250: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3254: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3254u;
    {
        const bool branch_taken_0x1c3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3254) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C325Cu;
    // 0x1c325c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3260: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C3260u;
    SET_GPR_U32(ctx, 31, 0x1C3268u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C3260u, 0x1C3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3268u;
label_1c3268:
    // 0x1c3268: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3268u;
    {
        const bool branch_taken_0x1c3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3268) {
            ctx->pc = 0x1C32C4u;
            goto label_1c32c4;
        }
    }
    ctx->pc = 0x1C3270u;
label_1c3270:
    // 0x1c3270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3274: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c3274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c3278: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3278u;
    {
        const bool branch_taken_0x1c3278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3278) {
            ctx->pc = 0x1C32C4u;
            goto label_1c32c4;
        }
    }
    ctx->pc = 0x1C3280u;
    // 0x1c3280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3288: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c328c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3290: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c3290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c3294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3298: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3298u;
    {
        const bool branch_taken_0x1c3298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3298) {
            ctx->pc = 0x1C32B0u;
            goto label_1c32b0;
        }
    }
    ctx->pc = 0x1C32A0u;
    // 0x1c32a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c32a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c32a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c32a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C32A8u;
    {
        const bool branch_taken_0x1c32a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32a8) {
            ctx->pc = 0x1C32BCu;
            goto label_1c32bc;
        }
    }
    ctx->pc = 0x1C32B0u;
label_1c32b0:
    // 0x1c32b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c32b8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c32b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c32bc:
    // 0x1c32bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C32BCu;
    {
        const bool branch_taken_0x1c32bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32bc) {
            ctx->pc = 0x1C32C4u;
            goto label_1c32c4;
        }
    }
    ctx->pc = 0x1C32C4u;
label_1c32c4:
    // 0x1c32c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c32c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c32c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c32c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c32cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c32ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c32d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32D8u;
}
