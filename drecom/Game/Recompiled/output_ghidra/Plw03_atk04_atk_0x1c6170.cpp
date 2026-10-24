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

// Function: Plw03_atk04_atk
// Address: 0x1c6170 - 0x1c630c
void Plw03_atk04_atk_0x1c6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk04_atk_0x1c6170");
#endif

    switch (ctx->pc) {
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62dcu: goto label_1c62dc;
        case 0x1c62f8u: goto label_1c62f8;
        default: break;
    }

    ctx->pc = 0x1c6170u;

    // 0x1c6170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6174: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c6174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c6178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c617c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c617cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c6180: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c6180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c6184: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c6184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c6188: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c6188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c618c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c618cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c6190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6194: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c6194u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c6198: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c619c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c619cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c61a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c61a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c61a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61a8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C61A8u;
    {
        const bool branch_taken_0x1c61a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c61a8) {
            ctx->pc = 0x1C6214u;
            goto label_1c6214;
        }
    }
    ctx->pc = 0x1C61B0u;
    // 0x1c61b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61B0u;
    {
        const bool branch_taken_0x1c61b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61b0) {
            ctx->pc = 0x1C61C0u;
            goto label_1c61c0;
        }
    }
    ctx->pc = 0x1C61B8u;
    // 0x1c61b8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C61B8u;
    {
        const bool branch_taken_0x1c61b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61b8) {
            ctx->pc = 0x1C62F8u;
            goto label_1c62f8;
        }
    }
    ctx->pc = 0x1C61C0u;
label_1c61c0:
    // 0x1c61c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61c8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c61c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c61cc: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c61d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c61d8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C61D8u;
    SET_GPR_U32(ctx, 31, 0x1C61E0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C61D8u, 0x1C61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61E0u;
label_1c61e0:
    // 0x1c61e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61e4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c61e8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c61ec: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c61f0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C61F0u;
    SET_GPR_U32(ctx, 31, 0x1C61F8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C61F0u, 0x1C61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61F8u;
label_1c61f8:
    // 0x1c61f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c61fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6200: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c6200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6204: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6208: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c620c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6210: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c6214:
    // 0x1c6214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6218: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c621c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6220: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6224: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6224u;
    {
        const bool branch_taken_0x1c6224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6224) {
            ctx->pc = 0x1C6244u;
            goto label_1c6244;
        }
    }
    ctx->pc = 0x1C622Cu;
    // 0x1c622c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6230: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6234: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c6234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c6238: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c623c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6240: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c6244:
    // 0x1c6244: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6248: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c624c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6250: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c6250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c6254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6254u;
    {
        const bool branch_taken_0x1c6254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6254) {
            ctx->pc = 0x1C6270u;
            goto label_1c6270;
        }
    }
    ctx->pc = 0x1C625Cu;
    // 0x1c625c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6260: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c6260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c6264: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c6264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c6268: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c626c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c626cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c6270:
    // 0x1c6270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6274: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c6278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c627c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c6280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6280u;
    {
        const bool branch_taken_0x1c6280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6280) {
            ctx->pc = 0x1C62A0u;
            goto label_1c62a0;
        }
    }
    ctx->pc = 0x1C6288u;
    // 0x1c6288: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c628c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c628cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c6290: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c6290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c6294: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6298: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c6298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c629c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c629cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c62a0:
    // 0x1c62a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c62a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c62a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C62A8u;
    SET_GPR_U32(ctx, 31, 0x1C62B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C62A8u, 0x1C62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62B0u;
label_1c62b0:
    // 0x1c62b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C62B4u;
    SET_GPR_U32(ctx, 31, 0x1C62BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C62B4u, 0x1C62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62BCu;
label_1c62bc:
    // 0x1c62bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c62bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c62c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c62c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c62c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C62C8u;
    SET_GPR_U32(ctx, 31, 0x1C62D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C62C8u, 0x1C62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62D0u;
label_1c62d0:
    // 0x1c62d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c62d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C62D4u;
    SET_GPR_U32(ctx, 31, 0x1C62DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C62D4u, 0x1C62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62DCu;
label_1c62dc:
    // 0x1c62dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62e0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c62e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c62e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C62E4u;
    {
        const bool branch_taken_0x1c62e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62e4) {
            ctx->pc = 0x1C62F8u;
            goto label_1c62f8;
        }
    }
    ctx->pc = 0x1C62ECu;
    // 0x1c62ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62f0: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C62F0u;
    SET_GPR_U32(ctx, 31, 0x1C62F8u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C62F0u, 0x1C62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62F8u;
label_1c62f8:
    // 0x1c62f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c62f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c62fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c62fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6300: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c6300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6304: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C630Cu;
}
