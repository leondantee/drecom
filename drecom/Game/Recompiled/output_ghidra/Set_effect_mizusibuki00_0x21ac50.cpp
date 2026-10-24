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

// Function: Set_effect_mizusibuki00
// Address: 0x21ac50 - 0x21bf4c
void Set_effect_mizusibuki00_0x21ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_mizusibuki00_0x21ac50");
#endif

    switch (ctx->pc) {
        case 0x21acdcu: goto label_21acdc;
        case 0x21ad10u: goto label_21ad10;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad7cu: goto label_21ad7c;
        case 0x21ada0u: goto label_21ada0;
        case 0x21adc4u: goto label_21adc4;
        case 0x21ade8u: goto label_21ade8;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae7cu: goto label_21ae7c;
        case 0x21af5cu: goto label_21af5c;
        case 0x21af90u: goto label_21af90;
        case 0x21b02cu: goto label_21b02c;
        case 0x21b0e0u: goto label_21b0e0;
        case 0x21b104u: goto label_21b104;
        case 0x21b128u: goto label_21b128;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b188u: goto label_21b188;
        case 0x21b1b8u: goto label_21b1b8;
        case 0x21b27cu: goto label_21b27c;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b31cu: goto label_21b31c;
        case 0x21b340u: goto label_21b340;
        case 0x21b34cu: goto label_21b34c;
        case 0x21b398u: goto label_21b398;
        case 0x21b3a4u: goto label_21b3a4;
        case 0x21b404u: goto label_21b404;
        case 0x21b428u: goto label_21b428;
        case 0x21b44cu: goto label_21b44c;
        case 0x21b470u: goto label_21b470;
        case 0x21b4e8u: goto label_21b4e8;
        case 0x21b518u: goto label_21b518;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b620u: goto label_21b620;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b678u: goto label_21b678;
        case 0x21b684u: goto label_21b684;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b708u: goto label_21b708;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b750u: goto label_21b750;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b880u: goto label_21b880;
        case 0x21b8a0u: goto label_21b8a0;
        case 0x21b91cu: goto label_21b91c;
        case 0x21b948u: goto label_21b948;
        case 0x21b954u: goto label_21b954;
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9b0u: goto label_21b9b0;
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bc1cu: goto label_21bc1c;
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc4cu: goto label_21bc4c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bdb4u: goto label_21bdb4;
        case 0x21bde8u: goto label_21bde8;
        case 0x21beb0u: goto label_21beb0;
        case 0x21bed4u: goto label_21bed4;
        default: break;
    }

    ctx->pc = 0x21ac50u;

    // 0x21ac50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21ac54: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x21ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x21ac58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21ac5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21ac60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ac64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ac68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ac6c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x21ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x21ac70: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x21ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x21ac74: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x21ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x21ac78: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x21ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x21ac7c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21ac80: 0x1460019c  bnez        $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x21AC80u;
    {
        const bool branch_taken_0x21ac80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac80) {
            ctx->pc = 0x21B2F4u;
            goto label_21b2f4;
        }
    }
    ctx->pc = 0x21AC88u;
    // 0x21ac88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ac88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ac8c: 0x0  nop
    ctx->pc = 0x21ac8cu;
    // NOP
    // 0x21ac90: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x21ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21ac94: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x21ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x21ac98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ac98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ac9c: 0x0  nop
    ctx->pc = 0x21ac9cu;
    // NOP
    // 0x21aca0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x21aca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21aca4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21aca8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21aca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21acac: 0x0  nop
    ctx->pc = 0x21acacu;
    // NOP
    // 0x21acb0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x21acb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x21acb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21acb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21acb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21acbc: 0x0  nop
    ctx->pc = 0x21acbcu;
    // NOP
    // 0x21acc0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x21acc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x21acc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21acc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21acc8: 0x0  nop
    ctx->pc = 0x21acc8u;
    // NOP
    // 0x21accc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21acccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21acd0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21acd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21acd4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x21ACD4u;
    {
        const bool branch_taken_0x21acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21acd4) {
            ctx->pc = 0x21AF38u;
            goto label_21af38;
        }
    }
    ctx->pc = 0x21ACDCu;
label_21acdc:
    // 0x21acdc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ace0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x21ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x21ace4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21ace8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21ace8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x21acec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21acf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21acf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21acf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21acf8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x21acf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21acfc: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21ad00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ad00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ad04: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21ad08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AD08u;
    SET_GPR_U32(ctx, 31, 0x21AD10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AD08u, 0x21AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD10u;
label_21ad10:
    // 0x21ad10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ad10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ad14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21AD14u;
    SET_GPR_U32(ctx, 31, 0x21AD1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21AD14u, 0x21AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD1Cu;
label_21ad1c:
    // 0x21ad1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21ad1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ad20: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ad24: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x21ad24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ad28: 0x12040079  beq         $s0, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x21AD28u;
    {
        const bool branch_taken_0x21ad28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x21ad28) {
            ctx->pc = 0x21AF10u;
            goto label_21af10;
        }
    }
    ctx->pc = 0x21AD30u;
    // 0x21ad30: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21ad34: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x21ad34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21ad38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21ad38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad3c: 0x0  nop
    ctx->pc = 0x21ad3cu;
    // NOP
    // 0x21ad40: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ad44: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21ad48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ad48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad4c: 0x0  nop
    ctx->pc = 0x21ad4cu;
    // NOP
    // 0x21ad50: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ad54: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x21ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x21ad58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad5c: 0x0  nop
    ctx->pc = 0x21ad5cu;
    // NOP
    // 0x21ad60: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ad64: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x21ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x21ad68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ad68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad6c: 0x0  nop
    ctx->pc = 0x21ad6cu;
    // NOP
    // 0x21ad70: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ad74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21AD74u;
    SET_GPR_U32(ctx, 31, 0x21AD7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21AD74u, 0x21AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD7Cu;
label_21ad7c:
    // 0x21ad7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ad80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x21ad80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21ad84: 0x0  nop
    ctx->pc = 0x21ad84u;
    // NOP
    // 0x21ad88: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21ad88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21ad8c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ad90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ad90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ad94: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ad98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21AD98u;
    SET_GPR_U32(ctx, 31, 0x21ADA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21AD98u, 0x21ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADA0u;
label_21ada0:
    // 0x21ada0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21ada4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21ada4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21ada8: 0x0  nop
    ctx->pc = 0x21ada8u;
    // NOP
    // 0x21adac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21adacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21adb0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21adb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21adb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21adb8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21adb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21adbc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21ADBCu, 0x21ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21adc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21adcc: 0x0  nop
    ctx->pc = 0x21adccu;
    // NOP
    // 0x21add0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21add0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21add4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21add8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21add8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21addc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21addcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ade0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21ADE0u;
    SET_GPR_U32(ctx, 31, 0x21ADE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21ADE0u, 0x21ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADE8u;
label_21ade8:
    // 0x21ade8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21adec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21adf0: 0x0  nop
    ctx->pc = 0x21adf0u;
    // NOP
    // 0x21adf4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21adf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21adf8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21adfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21adfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ae00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ae04: 0x3c043f79  lui         $a0, 0x3F79
    ctx->pc = 0x21ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16249 << 16));
    // 0x21ae08: 0x3487999a  ori         $a3, $a0, 0x999A
    ctx->pc = 0x21ae08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x21ae0c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21ae0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae10: 0x0  nop
    ctx->pc = 0x21ae10u;
    // NOP
    // 0x21ae14: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21ae18: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21ae1c: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x21ae1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21ae20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x21ae20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae24: 0x0  nop
    ctx->pc = 0x21ae24u;
    // NOP
    // 0x21ae28: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21ae2c: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21ae30: 0x34620a3d  ori         $v0, $v1, 0xA3D
    ctx->pc = 0x21ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21ae34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ae34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae38: 0x0  nop
    ctx->pc = 0x21ae38u;
    // NOP
    // 0x21ae3c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21ae40: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ae44: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21AE44u, 0x21AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE4Cu;
label_21ae4c:
    // 0x21ae4c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21ae50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ae50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ae54: 0x0  nop
    ctx->pc = 0x21ae54u;
    // NOP
    // 0x21ae58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ae58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ae5c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x21ae5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21ae60: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x21ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x21ae64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ae64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae68: 0x0  nop
    ctx->pc = 0x21ae68u;
    // NOP
    // 0x21ae6c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21ae70: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ae74: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21AE74u;
    SET_GPR_U32(ctx, 31, 0x21AE7Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21AE74u, 0x21AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE7Cu;
label_21ae7c:
    // 0x21ae7c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21ae80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ae80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ae84: 0x0  nop
    ctx->pc = 0x21ae84u;
    // NOP
    // 0x21ae88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ae88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ae8c: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x21ae8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21ae90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ae94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ae94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae98: 0x0  nop
    ctx->pc = 0x21ae98u;
    // NOP
    // 0x21ae9c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21aea0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21aea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aea8: 0x0  nop
    ctx->pc = 0x21aea8u;
    // NOP
    // 0x21aeac: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21aeb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21aeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aeb8: 0x0  nop
    ctx->pc = 0x21aeb8u;
    // NOP
    // 0x21aebc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21aec0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21aec4: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21aec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21aec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21aecc: 0x0  nop
    ctx->pc = 0x21aeccu;
    // NOP
    // 0x21aed0: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x21aed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21aed4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21aed8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21aedc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21aee0: 0x0  nop
    ctx->pc = 0x21aee0u;
    // NOP
    // 0x21aee4: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x21aee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21aee8: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x21aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x21aeec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aef0: 0x0  nop
    ctx->pc = 0x21aef0u;
    // NOP
    // 0x21aef4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21aef8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x21aefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21af00: 0x0  nop
    ctx->pc = 0x21af00u;
    // NOP
    // 0x21af04: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21af08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21af0c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_21af10:
    // 0x21af10: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21af14: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21af14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21af18: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21af1c: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x21af20: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x21af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21af24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21af24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21af28: 0x0  nop
    ctx->pc = 0x21af28u;
    // NOP
    // 0x21af2c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x21af2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21af30: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x21af30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21af34: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x21af34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_21af38:
    // 0x21af38: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x21af38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21af3c: 0x1460ff67  bnez        $v1, . + 4 + (-0x99 << 2)
    ctx->pc = 0x21AF3Cu;
    {
        const bool branch_taken_0x21af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af3c) {
            ctx->pc = 0x21ACDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21acdc;
        }
    }
    ctx->pc = 0x21AF44u;
    // 0x21af44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21af44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21af48: 0x0  nop
    ctx->pc = 0x21af48u;
    // NOP
    // 0x21af4c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21af4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21af50: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21af50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21af54: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x21AF54u;
    {
        const bool branch_taken_0x21af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af54) {
            ctx->pc = 0x21B2E0u;
            goto label_21b2e0;
        }
    }
    ctx->pc = 0x21AF5Cu;
label_21af5c:
    // 0x21af5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21af60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x21af64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21af64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21af68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21af6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21af70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21af70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21af74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21af74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21af78: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x21af78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21af7c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21af80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21af80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21af84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21af84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21af88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AF88u;
    SET_GPR_U32(ctx, 31, 0x21AF90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AF88u, 0x21AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF90u;
label_21af90:
    // 0x21af90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21af90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21af94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21af98: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x21af98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21af9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afa0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afa4: 0xa060013a  sb          $zero, 0x13A($v1)
    ctx->pc = 0x21afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afa8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21afac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afb0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afb4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x21afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x21afb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afbc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afc0: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x21afc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21afc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afcc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afd0: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x21afd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x21afd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afd8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afdc: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x21afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afe4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afe8: 0xa060013b  sb          $zero, 0x13B($v1)
    ctx->pc = 0x21afe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aff0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aff4: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x21aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21affc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21affcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b000: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21b000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b004: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b008: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b00c: 0xa080013e  sb          $zero, 0x13E($a0)
    ctx->pc = 0x21b00cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b010: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b014: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x21b014u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b018: 0xa0c0013f  sb          $zero, 0x13F($a2)
    ctx->pc = 0x21b018u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b01c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b020: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b024: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B024u;
    SET_GPR_U32(ctx, 31, 0x21B02Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B024u, 0x21B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B02Cu;
label_21b02c:
    // 0x21b02c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b030: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21b030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21b034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b038: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x21b038u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b03c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x21b040: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x21b040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x21b044: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B044u;
    {
        const bool branch_taken_0x21b044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x21b044) {
            ctx->pc = 0x21B058u;
            goto label_21b058;
        }
    }
    ctx->pc = 0x21B04Cu;
    // 0x21b04c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21b04cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b050: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21B050u;
    {
        const bool branch_taken_0x21b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b050) {
            ctx->pc = 0x21B078u;
            goto label_21b078;
        }
    }
    ctx->pc = 0x21B058u;
label_21b058:
    // 0x21b058: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b05c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b064: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b068: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21b06c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x21b06cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21b070: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21b070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x21b074: 0x0  nop
    ctx->pc = 0x21b074u;
    // NOP
label_21b078:
    // 0x21b078: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21b07c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21b080: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b084: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x21b088: 0x34860011  ori         $a2, $a0, 0x11
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x21b08c: 0x1206008a  beq         $s0, $a2, . + 4 + (0x8A << 2)
    ctx->pc = 0x21B08Cu;
    {
        const bool branch_taken_0x21b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x21b08c) {
            ctx->pc = 0x21B2B8u;
            goto label_21b2b8;
        }
    }
    ctx->pc = 0x21B094u;
    // 0x21b094: 0x3c0342f1  lui         $v1, 0x42F1
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17137 << 16));
    // 0x21b098: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x21b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b0a0: 0x0  nop
    ctx->pc = 0x21b0a0u;
    // NOP
    // 0x21b0a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b0a8: 0x3c0342f1  lui         $v1, 0x42F1
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17137 << 16));
    // 0x21b0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b0b0: 0x0  nop
    ctx->pc = 0x21b0b0u;
    // NOP
    // 0x21b0b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b0b8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21b0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21b0c0: 0x0  nop
    ctx->pc = 0x21b0c0u;
    // NOP
    // 0x21b0c4: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x21b0c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b0c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x21b0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b0d0: 0x0  nop
    ctx->pc = 0x21b0d0u;
    // NOP
    // 0x21b0d4: 0xe601009c  swc1        $f1, 0x9C($s0)
    ctx->pc = 0x21b0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b0d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B0D8u;
    SET_GPR_U32(ctx, 31, 0x21B0E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B0D8u, 0x21B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0E0u;
label_21b0e0:
    // 0x21b0e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b0e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b0e8: 0x0  nop
    ctx->pc = 0x21b0e8u;
    // NOP
    // 0x21b0ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b0f0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x21b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b0f4: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x21b0f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x21b0f8: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x21b0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b0fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B0FCu;
    SET_GPR_U32(ctx, 31, 0x21B104u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B0FCu, 0x21B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B104u;
label_21b104:
    // 0x21b104: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b10c: 0x0  nop
    ctx->pc = 0x21b10cu;
    // NOP
    // 0x21b110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b114: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b11c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b120: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B120u;
    SET_GPR_U32(ctx, 31, 0x21B128u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B120u, 0x21B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B128u;
label_21b128:
    // 0x21b128: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b12c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b130: 0x0  nop
    ctx->pc = 0x21b130u;
    // NOP
    // 0x21b134: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b138: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b13c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b140: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b144: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B144u;
    SET_GPR_U32(ctx, 31, 0x21B14Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B144u, 0x21B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21b150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21b154: 0x0  nop
    ctx->pc = 0x21b154u;
    // NOP
    // 0x21b158: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21b158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21b15c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b160: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b164: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b168: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21b16c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21b170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b174: 0x0  nop
    ctx->pc = 0x21b174u;
    // NOP
    // 0x21b178: 0xe60100ac  swc1        $f1, 0xAC($s0)
    ctx->pc = 0x21b178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b17c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b180: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B180u;
    SET_GPR_U32(ctx, 31, 0x21B188u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B180u, 0x21B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B188u;
label_21b188:
    // 0x21b188: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b190: 0x0  nop
    ctx->pc = 0x21b190u;
    // NOP
    // 0x21b194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b198: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b19c: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x21b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x21b1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1a4: 0x0  nop
    ctx->pc = 0x21b1a4u;
    // NOP
    // 0x21b1a8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b1ac: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b1b0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B1B0u;
    SET_GPR_U32(ctx, 31, 0x21B1B8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B1B0u, 0x21B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1B8u;
label_21b1b8:
    // 0x21b1b8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b1bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b1c0: 0x0  nop
    ctx->pc = 0x21b1c0u;
    // NOP
    // 0x21b1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b1c8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b1cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1d4: 0x0  nop
    ctx->pc = 0x21b1d4u;
    // NOP
    // 0x21b1d8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b1dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1e4: 0x0  nop
    ctx->pc = 0x21b1e4u;
    // NOP
    // 0x21b1e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b1ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1f4: 0x0  nop
    ctx->pc = 0x21b1f4u;
    // NOP
    // 0x21b1f8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b1fc: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b200: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b208: 0x0  nop
    ctx->pc = 0x21b208u;
    // NOP
    // 0x21b20c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b210: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b214: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b21c: 0x0  nop
    ctx->pc = 0x21b21cu;
    // NOP
    // 0x21b220: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b224: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21b228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b22c: 0x0  nop
    ctx->pc = 0x21b22cu;
    // NOP
    // 0x21b230: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21b238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b23c: 0x0  nop
    ctx->pc = 0x21b23cu;
    // NOP
    // 0x21b240: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b244: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b248: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21b248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21b24c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b250: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b258: 0x0  nop
    ctx->pc = 0x21b258u;
    // NOP
    // 0x21b25c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21b260: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21b264: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21b264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21b268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b26c: 0x0  nop
    ctx->pc = 0x21b26cu;
    // NOP
    // 0x21b270: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21b270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21b274: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B274u;
    SET_GPR_U32(ctx, 31, 0x21B27Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B274u, 0x21B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B27Cu;
label_21b27c:
    // 0x21b27c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b280: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b288: 0x0  nop
    ctx->pc = 0x21b288u;
    // NOP
    // 0x21b28c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b290: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21b294: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B294u;
    SET_GPR_U32(ctx, 31, 0x21B29Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B294u, 0x21B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B29Cu;
label_21b29c:
    // 0x21b29c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21b2a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b2a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b2a8: 0x0  nop
    ctx->pc = 0x21b2a8u;
    // NOP
    // 0x21b2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b2b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x21b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x21b2b4: 0x0  nop
    ctx->pc = 0x21b2b4u;
    // NOP
label_21b2b8:
    // 0x21b2b8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b2bc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21b2bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21b2c0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b2c4: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x21b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x21b2c8: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x21b2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x21b2cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b2d0: 0x0  nop
    ctx->pc = 0x21b2d0u;
    // NOP
    // 0x21b2d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b2d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b2dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x21b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_21b2e0:
    // 0x21b2e0: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x21b2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x21b2e4: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x21B2E4u;
    {
        const bool branch_taken_0x21b2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b2e4) {
            ctx->pc = 0x21AF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af5c;
        }
    }
    ctx->pc = 0x21B2ECu;
    // 0x21b2ec: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x21B2ECu;
    {
        const bool branch_taken_0x21b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b2ec) {
            ctx->pc = 0x21BF28u;
            goto label_21bf28;
        }
    }
    ctx->pc = 0x21B2F4u;
label_21b2f4:
    // 0x21b2f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x21b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21b2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b2fc: 0x1483017d  bne         $a0, $v1, . + 4 + (0x17D << 2)
    ctx->pc = 0x21B2FCu;
    {
        const bool branch_taken_0x21b2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21b2fc) {
            ctx->pc = 0x21B8F4u;
            goto label_21b8f4;
        }
    }
    ctx->pc = 0x21B304u;
    // 0x21b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b308: 0x0  nop
    ctx->pc = 0x21b308u;
    // NOP
    // 0x21b30c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b310: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b310u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b314: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x21B314u;
    {
        const bool branch_taken_0x21b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b314) {
            ctx->pc = 0x21B5D8u;
            goto label_21b5d8;
        }
    }
    ctx->pc = 0x21B31Cu;
label_21b31c:
    // 0x21b31c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b320: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21B320u;
    {
        const bool branch_taken_0x21b320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b320) {
            ctx->pc = 0x21B358u;
            goto label_21b358;
        }
    }
    ctx->pc = 0x21B328u;
    // 0x21b328: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b32c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b32cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b330: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b334: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b338: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B338u;
    SET_GPR_U32(ctx, 31, 0x21B340u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B338u, 0x21B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B340u;
label_21b340:
    // 0x21b340: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b344: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B344u;
    SET_GPR_U32(ctx, 31, 0x21B34Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B344u, 0x21B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B34Cu;
label_21b34c:
    // 0x21b34c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b34cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b350: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21B350u;
    {
        const bool branch_taken_0x21b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b350) {
            ctx->pc = 0x21B3A8u;
            goto label_21b3a8;
        }
    }
    ctx->pc = 0x21B358u;
label_21b358:
    // 0x21b358: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b35c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b360: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b364: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b36c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b370: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b374: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b378: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b37c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b380: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b384: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b38c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b390: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B390u;
    SET_GPR_U32(ctx, 31, 0x21B398u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B390u, 0x21B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B398u;
label_21b398:
    // 0x21b398: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b39c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B39Cu;
    SET_GPR_U32(ctx, 31, 0x21B3A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B39Cu, 0x21B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3A4u;
label_21b3a4:
    // 0x21b3a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21b3a8:
    // 0x21b3a8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b3ac: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b3b0: 0x1203007f  beq         $s0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x21B3B0u;
    {
        const bool branch_taken_0x21b3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b3b0) {
            ctx->pc = 0x21B5B0u;
            goto label_21b5b0;
        }
    }
    ctx->pc = 0x21B3B8u;
    // 0x21b3b8: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21b3bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3c4: 0x0  nop
    ctx->pc = 0x21b3c4u;
    // NOP
    // 0x21b3c8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b3cc: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21b3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3d4: 0x0  nop
    ctx->pc = 0x21b3d4u;
    // NOP
    // 0x21b3d8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b3dc: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x21b3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3e4: 0x0  nop
    ctx->pc = 0x21b3e4u;
    // NOP
    // 0x21b3e8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b3ec: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x21b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x21b3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b3f4: 0x0  nop
    ctx->pc = 0x21b3f4u;
    // NOP
    // 0x21b3f8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b3fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B3FCu;
    SET_GPR_U32(ctx, 31, 0x21B404u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B3FCu, 0x21B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B404u;
label_21b404:
    // 0x21b404: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b40c: 0x0  nop
    ctx->pc = 0x21b40cu;
    // NOP
    // 0x21b410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b414: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b41c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b420: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B420u;
    SET_GPR_U32(ctx, 31, 0x21B428u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B420u, 0x21B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B428u;
label_21b428:
    // 0x21b428: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b430: 0x0  nop
    ctx->pc = 0x21b430u;
    // NOP
    // 0x21b434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b438: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b43c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b440: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b444: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B444u;
    SET_GPR_U32(ctx, 31, 0x21B44Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B444u, 0x21B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B44Cu;
label_21b44c:
    // 0x21b44c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b454: 0x0  nop
    ctx->pc = 0x21b454u;
    // NOP
    // 0x21b458: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b45c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b464: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b468: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B468u;
    SET_GPR_U32(ctx, 31, 0x21B470u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B468u, 0x21B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B470u;
label_21b470:
    // 0x21b470: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b478: 0x0  nop
    ctx->pc = 0x21b478u;
    // NOP
    // 0x21b47c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b480: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b488: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b48c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21b490: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x21b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21b494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b498: 0x0  nop
    ctx->pc = 0x21b498u;
    // NOP
    // 0x21b49c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21b4a0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21b4a4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x21b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21b4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4ac: 0x0  nop
    ctx->pc = 0x21b4acu;
    // NOP
    // 0x21b4b0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21b4b4: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x21b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x21b4b8: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x21b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x21b4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4c0: 0x0  nop
    ctx->pc = 0x21b4c0u;
    // NOP
    // 0x21b4c4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21b4c8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21b4cc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21b4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b4d4: 0x0  nop
    ctx->pc = 0x21b4d4u;
    // NOP
    // 0x21b4d8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21b4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b4dc: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b4e0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B4E0u;
    SET_GPR_U32(ctx, 31, 0x21B4E8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B4E0u, 0x21B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4E8u;
label_21b4e8:
    // 0x21b4e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21b4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b4f0: 0x0  nop
    ctx->pc = 0x21b4f0u;
    // NOP
    // 0x21b4f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b4f8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b4fc: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x21b500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b504: 0x0  nop
    ctx->pc = 0x21b504u;
    // NOP
    // 0x21b508: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b50c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b510: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B510u;
    SET_GPR_U32(ctx, 31, 0x21B518u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B510u, 0x21B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B518u;
label_21b518:
    // 0x21b518: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x21b51c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b520: 0x0  nop
    ctx->pc = 0x21b520u;
    // NOP
    // 0x21b524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b528: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b52c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21b530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b534: 0x0  nop
    ctx->pc = 0x21b534u;
    // NOP
    // 0x21b538: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b53c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21b540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b544: 0x0  nop
    ctx->pc = 0x21b544u;
    // NOP
    // 0x21b548: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b54c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21b550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b554: 0x0  nop
    ctx->pc = 0x21b554u;
    // NOP
    // 0x21b558: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b55c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21b560: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21b560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21b564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b568: 0x0  nop
    ctx->pc = 0x21b568u;
    // NOP
    // 0x21b56c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b570: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21b574: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21b578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b57c: 0x0  nop
    ctx->pc = 0x21b57cu;
    // NOP
    // 0x21b580: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b584: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x21b584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x21b588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b58c: 0x0  nop
    ctx->pc = 0x21b58cu;
    // NOP
    // 0x21b590: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b594: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x21b594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x21b598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b59c: 0x0  nop
    ctx->pc = 0x21b59cu;
    // NOP
    // 0x21b5a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b5a4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b5a8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x21b5ac: 0x0  nop
    ctx->pc = 0x21b5acu;
    // NOP
label_21b5b0:
    // 0x21b5b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b5b4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b5b8: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x21b5bc: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x21b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x21b5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b5c4: 0x0  nop
    ctx->pc = 0x21b5c4u;
    // NOP
    // 0x21b5c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b5cc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b5d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21b5d4: 0x0  nop
    ctx->pc = 0x21b5d4u;
    // NOP
label_21b5d8:
    // 0x21b5d8: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21b5dc: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x21B5DCu;
    {
        const bool branch_taken_0x21b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b5dc) {
            ctx->pc = 0x21B31Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b31c;
        }
    }
    ctx->pc = 0x21B5E4u;
    // 0x21b5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b5e8: 0x0  nop
    ctx->pc = 0x21b5e8u;
    // NOP
    // 0x21b5ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b5f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b5f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b5f4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x21B5F4u;
    {
        const bool branch_taken_0x21b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5f4) {
            ctx->pc = 0x21B8E0u;
            goto label_21b8e0;
        }
    }
    ctx->pc = 0x21B5FCu;
label_21b5fc:
    // 0x21b5fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b600: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21B600u;
    {
        const bool branch_taken_0x21b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b600) {
            ctx->pc = 0x21B638u;
            goto label_21b638;
        }
    }
    ctx->pc = 0x21B608u;
    // 0x21b608: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21b60c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b60cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b610: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b614: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b614u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b618: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B618u;
    SET_GPR_U32(ctx, 31, 0x21B620u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B618u, 0x21B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B620u;
label_21b620:
    // 0x21b620: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b624: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B624u;
    SET_GPR_U32(ctx, 31, 0x21B62Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B624u, 0x21B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B62Cu;
label_21b62c:
    // 0x21b62c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b62cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b630: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21B630u;
    {
        const bool branch_taken_0x21b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b630) {
            ctx->pc = 0x21B688u;
            goto label_21b688;
        }
    }
    ctx->pc = 0x21B638u;
label_21b638:
    // 0x21b638: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b63c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b640: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b644: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b64c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b650: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b654: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b65c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b660: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b664: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21b668: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b66c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b670: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B670u;
    SET_GPR_U32(ctx, 31, 0x21B678u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B670u, 0x21B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B678u;
label_21b678:
    // 0x21b678: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b67c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B67Cu;
    SET_GPR_U32(ctx, 31, 0x21B684u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B67Cu, 0x21B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B684u;
label_21b684:
    // 0x21b684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21b688:
    // 0x21b688: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b68c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b690: 0x12030089  beq         $s0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x21B690u;
    {
        const bool branch_taken_0x21b690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b690) {
            ctx->pc = 0x21B8B8u;
            goto label_21b8b8;
        }
    }
    ctx->pc = 0x21B698u;
    // 0x21b698: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21b69c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6a4: 0x0  nop
    ctx->pc = 0x21b6a4u;
    // NOP
    // 0x21b6a8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b6ac: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21b6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6b4: 0x0  nop
    ctx->pc = 0x21b6b4u;
    // NOP
    // 0x21b6b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b6bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6c4: 0x0  nop
    ctx->pc = 0x21b6c4u;
    // NOP
    // 0x21b6c8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b6cc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21b6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6d4: 0x0  nop
    ctx->pc = 0x21b6d4u;
    // NOP
    // 0x21b6d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b6dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B6DCu;
    SET_GPR_U32(ctx, 31, 0x21B6E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B6DCu, 0x21B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6E4u;
label_21b6e4:
    // 0x21b6e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b6ec: 0x0  nop
    ctx->pc = 0x21b6ecu;
    // NOP
    // 0x21b6f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b6f4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b6f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b6fc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b700: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B700u;
    SET_GPR_U32(ctx, 31, 0x21B708u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B700u, 0x21B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B708u;
label_21b708:
    // 0x21b708: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b70c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b710: 0x0  nop
    ctx->pc = 0x21b710u;
    // NOP
    // 0x21b714: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b718: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b71c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b720: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b724: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B724u;
    SET_GPR_U32(ctx, 31, 0x21B72Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B724u, 0x21B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B72Cu;
label_21b72c:
    // 0x21b72c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b734: 0x0  nop
    ctx->pc = 0x21b734u;
    // NOP
    // 0x21b738: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b73c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b744: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b748: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B748u;
    SET_GPR_U32(ctx, 31, 0x21B750u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B748u, 0x21B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B750u;
label_21b750:
    // 0x21b750: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b758: 0x0  nop
    ctx->pc = 0x21b758u;
    // NOP
    // 0x21b75c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b760: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b768: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b76c: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21b770: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21b774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b778: 0x0  nop
    ctx->pc = 0x21b778u;
    // NOP
    // 0x21b77c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21b77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b780: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b784: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B784u;
    SET_GPR_U32(ctx, 31, 0x21B78Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B784u, 0x21B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B78Cu;
label_21b78c:
    // 0x21b78c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x21b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x21b790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b794: 0x0  nop
    ctx->pc = 0x21b794u;
    // NOP
    // 0x21b798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b79c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b7a0: 0x3c02421c  lui         $v0, 0x421C
    ctx->pc = 0x21b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16924 << 16));
    // 0x21b7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7a8: 0x0  nop
    ctx->pc = 0x21b7a8u;
    // NOP
    // 0x21b7ac: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b7b0: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b7b4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B7B4u;
    SET_GPR_U32(ctx, 31, 0x21B7BCu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B7B4u, 0x21B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7BCu;
label_21b7bc:
    // 0x21b7bc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x21b7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b7c4: 0x0  nop
    ctx->pc = 0x21b7c4u;
    // NOP
    // 0x21b7c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b7cc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b7d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7d8: 0x0  nop
    ctx->pc = 0x21b7d8u;
    // NOP
    // 0x21b7dc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b7e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7e8: 0x0  nop
    ctx->pc = 0x21b7e8u;
    // NOP
    // 0x21b7ec: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b7f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7f8: 0x0  nop
    ctx->pc = 0x21b7f8u;
    // NOP
    // 0x21b7fc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b800: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b804: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b80c: 0x0  nop
    ctx->pc = 0x21b80cu;
    // NOP
    // 0x21b810: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b814: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b818: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b820: 0x0  nop
    ctx->pc = 0x21b820u;
    // NOP
    // 0x21b824: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b828: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21b82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b830: 0x0  nop
    ctx->pc = 0x21b830u;
    // NOP
    // 0x21b834: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b838: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b840: 0x0  nop
    ctx->pc = 0x21b840u;
    // NOP
    // 0x21b844: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b848: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21b84c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21b850: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b854: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b85c: 0x0  nop
    ctx->pc = 0x21b85cu;
    // NOP
    // 0x21b860: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21b860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21b864: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21b868: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21b868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21b86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b870: 0x0  nop
    ctx->pc = 0x21b870u;
    // NOP
    // 0x21b874: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21b878: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B878u;
    SET_GPR_U32(ctx, 31, 0x21B880u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B878u, 0x21B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B880u;
label_21b880:
    // 0x21b880: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21b884: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b888: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b88c: 0x0  nop
    ctx->pc = 0x21b88cu;
    // NOP
    // 0x21b890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b894: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21b894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21b898: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B898u;
    SET_GPR_U32(ctx, 31, 0x21B8A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B898u, 0x21B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8A0u;
label_21b8a0:
    // 0x21b8a0: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21b8a4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b8a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b8ac: 0x0  nop
    ctx->pc = 0x21b8acu;
    // NOP
    // 0x21b8b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b8b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x21b8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_21b8b8:
    // 0x21b8b8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b8bc: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x21b8bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21b8c0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b8c4: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x21b8c8: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x21b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21b8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b8d0: 0x0  nop
    ctx->pc = 0x21b8d0u;
    // NOP
    // 0x21b8d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b8d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b8dc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_21b8e0:
    // 0x21b8e0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x21b8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21b8e4: 0x1460ff45  bnez        $v1, . + 4 + (-0xBB << 2)
    ctx->pc = 0x21B8E4u;
    {
        const bool branch_taken_0x21b8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b8e4) {
            ctx->pc = 0x21B5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b5fc;
        }
    }
    ctx->pc = 0x21B8ECu;
    // 0x21b8ec: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x21B8ECu;
    {
        const bool branch_taken_0x21b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8ec) {
            ctx->pc = 0x21BF28u;
            goto label_21bf28;
        }
    }
    ctx->pc = 0x21B8F4u;
label_21b8f4:
    // 0x21b8f4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x21b8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21b8f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b8fc: 0x14e4018a  bne         $a3, $a0, . + 4 + (0x18A << 2)
    ctx->pc = 0x21B8FCu;
    {
        const bool branch_taken_0x21b8fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x21b8fc) {
            ctx->pc = 0x21BF28u;
            goto label_21bf28;
        }
    }
    ctx->pc = 0x21B904u;
    // 0x21b904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b908: 0x0  nop
    ctx->pc = 0x21b908u;
    // NOP
    // 0x21b90c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b910: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b910u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b914: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x21B914u;
    {
        const bool branch_taken_0x21b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b914) {
            ctx->pc = 0x21BBF8u;
            goto label_21bbf8;
        }
    }
    ctx->pc = 0x21B91Cu;
label_21b91c:
    // 0x21b91c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x21b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b920: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21B920u;
    {
        const bool branch_taken_0x21b920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b920) {
            ctx->pc = 0x21B964u;
            goto label_21b964;
        }
    }
    ctx->pc = 0x21B928u;
    // 0x21b928: 0x24021409  addiu       $v0, $zero, 0x1409
    ctx->pc = 0x21b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b92c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b934: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b938: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21b938u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b93c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b93cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b940: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B940u;
    SET_GPR_U32(ctx, 31, 0x21B948u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B940u, 0x21B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B948u;
label_21b948:
    // 0x21b948: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b94c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B94Cu;
    SET_GPR_U32(ctx, 31, 0x21B954u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B94Cu, 0x21B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B954u;
label_21b954:
    // 0x21b954: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21b954u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b958: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x21b958u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21b95c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21B95Cu;
    {
        const bool branch_taken_0x21b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b95c) {
            ctx->pc = 0x21B9B8u;
            goto label_21b9b8;
        }
    }
    ctx->pc = 0x21B964u;
label_21b964:
    // 0x21b964: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b968: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b96c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b970: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b97c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b98c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b98cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b990: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b998: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b99c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B99Cu;
    SET_GPR_U32(ctx, 31, 0x21B9A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B99Cu, 0x21B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9A4u;
label_21b9a4:
    // 0x21b9a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b9a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B9A8u;
    SET_GPR_U32(ctx, 31, 0x21B9B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B9A8u, 0x21B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9B0u;
label_21b9b0:
    // 0x21b9b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b9b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b9b4: 0x0  nop
    ctx->pc = 0x21b9b4u;
    // NOP
label_21b9b8:
    // 0x21b9b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b9bc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b9c0: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x21B9C0u;
    {
        const bool branch_taken_0x21b9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b9c0) {
            ctx->pc = 0x21BBD0u;
            goto label_21bbd0;
        }
    }
    ctx->pc = 0x21B9C8u;
    // 0x21b9c8: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21b9cc: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x21b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9d4: 0x0  nop
    ctx->pc = 0x21b9d4u;
    // NOP
    // 0x21b9d8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b9dc: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21b9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9e4: 0x0  nop
    ctx->pc = 0x21b9e4u;
    // NOP
    // 0x21b9e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b9ec: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x21b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x21b9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9f4: 0x0  nop
    ctx->pc = 0x21b9f4u;
    // NOP
    // 0x21b9f8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b9fc: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x21b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
    // 0x21ba00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ba00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ba04: 0x0  nop
    ctx->pc = 0x21ba04u;
    // NOP
    // 0x21ba08: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ba0c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA0Cu;
    SET_GPR_U32(ctx, 31, 0x21BA14u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA0Cu, 0x21BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA14u;
label_21ba14:
    // 0x21ba14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba1c: 0x0  nop
    ctx->pc = 0x21ba1cu;
    // NOP
    // 0x21ba20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba24: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ba30: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA30u;
    SET_GPR_U32(ctx, 31, 0x21BA38u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA30u, 0x21BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA38u;
label_21ba38:
    // 0x21ba38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba40: 0x0  nop
    ctx->pc = 0x21ba40u;
    // NOP
    // 0x21ba44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba48: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba50: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ba54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA54u;
    SET_GPR_U32(ctx, 31, 0x21BA5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA54u, 0x21BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA5Cu;
label_21ba5c:
    // 0x21ba5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba64: 0x0  nop
    ctx->pc = 0x21ba64u;
    // NOP
    // 0x21ba68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba6c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba74: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ba78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA78u;
    SET_GPR_U32(ctx, 31, 0x21BA80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA78u, 0x21BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA80u;
label_21ba80:
    // 0x21ba80: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x21ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x21ba84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba88: 0x0  nop
    ctx->pc = 0x21ba88u;
    // NOP
    // 0x21ba8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba90: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba98: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ba9c: 0x3c033f79  lui         $v1, 0x3F79
    ctx->pc = 0x21ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16249 << 16));
    // 0x21baa0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21baa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21baa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21baa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21baa8: 0x0  nop
    ctx->pc = 0x21baa8u;
    // NOP
    // 0x21baac: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21baacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21bab0: 0x3c033f79  lui         $v1, 0x3F79
    ctx->pc = 0x21bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16249 << 16));
    // 0x21bab4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21bab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21babc: 0x0  nop
    ctx->pc = 0x21babcu;
    // NOP
    // 0x21bac0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21bac4: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21bac8: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x21bac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21bacc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21baccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bad0: 0x0  nop
    ctx->pc = 0x21bad0u;
    // NOP
    // 0x21bad4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21bad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21bad8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21badc: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x21badcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21bae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bae4: 0x0  nop
    ctx->pc = 0x21bae4u;
    // NOP
    // 0x21bae8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21baec: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21baf0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21baf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21baf4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21BAF4u;
    SET_GPR_U32(ctx, 31, 0x21BAFCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21BAF4u, 0x21BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAFCu;
label_21bafc:
    // 0x21bafc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21bafcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb00: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x21bb04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb08: 0x0  nop
    ctx->pc = 0x21bb08u;
    // NOP
    // 0x21bb0c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bb10: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21bb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21bb14: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x21bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x21bb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb1c: 0x0  nop
    ctx->pc = 0x21bb1cu;
    // NOP
    // 0x21bb20: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21bb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21bb24: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bb28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21bb28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb2c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21BB2Cu;
    SET_GPR_U32(ctx, 31, 0x21BB34u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21BB2Cu, 0x21BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB34u;
label_21bb34:
    // 0x21bb34: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21bb34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb38: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x21bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x21bb3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb40: 0x0  nop
    ctx->pc = 0x21bb40u;
    // NOP
    // 0x21bb44: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bb44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bb48: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21bb4c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21bb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb54: 0x0  nop
    ctx->pc = 0x21bb54u;
    // NOP
    // 0x21bb58: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21bb5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21bb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb64: 0x0  nop
    ctx->pc = 0x21bb64u;
    // NOP
    // 0x21bb68: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21bb6c: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x21bb70: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x21bb70u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb74: 0x0  nop
    ctx->pc = 0x21bb74u;
    // NOP
    // 0x21bb78: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x21bb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21bb7c: 0x3c063f78  lui         $a2, 0x3F78
    ctx->pc = 0x21bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16248 << 16));
    // 0x21bb80: 0x34c451ec  ori         $a0, $a2, 0x51EC
    ctx->pc = 0x21bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20972);
    // 0x21bb84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21bb84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb88: 0x0  nop
    ctx->pc = 0x21bb88u;
    // NOP
    // 0x21bb8c: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x21bb8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21bb90: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21bb94: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21bb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb9c: 0x0  nop
    ctx->pc = 0x21bb9cu;
    // NOP
    // 0x21bba0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21bba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21bba4: 0x3c03bf99  lui         $v1, 0xBF99
    ctx->pc = 0x21bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49049 << 16));
    // 0x21bba8: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x21bba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21bbac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21bbacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bbb0: 0x0  nop
    ctx->pc = 0x21bbb0u;
    // NOP
    // 0x21bbb4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21bbb8: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x21bbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bbc0: 0x0  nop
    ctx->pc = 0x21bbc0u;
    // NOP
    // 0x21bbc4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21bbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21bbc8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21bbcc: 0xae040100  sw          $a0, 0x100($s0)
    ctx->pc = 0x21bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
label_21bbd0:
    // 0x21bbd0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21bbd4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21bbd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21bbd8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x21bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21bbdc: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x21bbe0: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x21bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x21bbe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bbe8: 0x0  nop
    ctx->pc = 0x21bbe8u;
    // NOP
    // 0x21bbec: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x21bbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21bbf0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21bbf4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21bbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_21bbf8:
    // 0x21bbf8: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x21bbf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21bbfc: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x21BBFCu;
    {
        const bool branch_taken_0x21bbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bbfc) {
            ctx->pc = 0x21B91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b91c;
        }
    }
    ctx->pc = 0x21BC04u;
    // 0x21bc04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21bc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bc08: 0x0  nop
    ctx->pc = 0x21bc08u;
    // NOP
    // 0x21bc0c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21bc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21bc10: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21bc10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc14: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x21BC14u;
    {
        const bool branch_taken_0x21bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc14) {
            ctx->pc = 0x21BF18u;
            goto label_21bf18;
        }
    }
    ctx->pc = 0x21BC1Cu;
label_21bc1c:
    // 0x21bc1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21bc20: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21BC20u;
    {
        const bool branch_taken_0x21bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc20) {
            ctx->pc = 0x21BC58u;
            goto label_21bc58;
        }
    }
    ctx->pc = 0x21BC28u;
    // 0x21bc28: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21bc2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21bc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc30: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21bc34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21bc34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21BC38u;
    SET_GPR_U32(ctx, 31, 0x21BC40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21BC38u, 0x21BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC40u;
label_21bc40:
    // 0x21bc40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21bc40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bc44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21BC44u;
    SET_GPR_U32(ctx, 31, 0x21BC4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21BC44u, 0x21BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC4Cu;
label_21bc4c:
    // 0x21bc4c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21bc4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bc50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21BC50u;
    {
        const bool branch_taken_0x21bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc50) {
            ctx->pc = 0x21BCB0u;
            goto label_21bcb0;
        }
    }
    ctx->pc = 0x21BC58u;
label_21bc58:
    // 0x21bc58: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21bc5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21bc60: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x21bc64: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21bc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21bc6c: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21bc70: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x21bc70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x21bc74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21bc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21bc78: 0x39438  dsll        $s2, $v1, 16
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << 16);
    // 0x21bc7c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x21bc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x21bc80: 0x263a024  and         $s4, $s3, $v1
    ctx->pc = 0x21bc80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x21bc84: 0x24100409  addiu       $s0, $zero, 0x409
    ctx->pc = 0x21bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21bc88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x21bc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21bc8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21bc8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc90: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21bc94: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x21bc94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21bc98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21BC98u;
    SET_GPR_U32(ctx, 31, 0x21BCA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21BC98u, 0x21BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCA0u;
label_21bca0:
    // 0x21bca0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21bca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bca4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21BCA4u;
    SET_GPR_U32(ctx, 31, 0x21BCACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21BCA4u, 0x21BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCACu;
label_21bcac:
    // 0x21bcac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21bcacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21bcb0:
    // 0x21bcb0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21bcb4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21bcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21bcb8: 0x1203008d  beq         $s0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x21BCB8u;
    {
        const bool branch_taken_0x21bcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21bcb8) {
            ctx->pc = 0x21BEF0u;
            goto label_21bef0;
        }
    }
    ctx->pc = 0x21BCC0u;
    // 0x21bcc0: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21bcc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21bcc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bccc: 0x0  nop
    ctx->pc = 0x21bcccu;
    // NOP
    // 0x21bcd0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21bcd4: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21bcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bcdc: 0x0  nop
    ctx->pc = 0x21bcdcu;
    // NOP
    // 0x21bce0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21bce4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21bce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bcec: 0x0  nop
    ctx->pc = 0x21bcecu;
    // NOP
    // 0x21bcf0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21bcf4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21bcf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21bcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21bcfc: 0x0  nop
    ctx->pc = 0x21bcfcu;
    // NOP
    // 0x21bd00: 0xe60c009c  swc1        $f12, 0x9C($s0)
    ctx->pc = 0x21bd00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21bd04: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD04u;
    SET_GPR_U32(ctx, 31, 0x21BD0Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD04u, 0x21BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD0Cu;
label_21bd0c:
    // 0x21bd0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd14: 0x0  nop
    ctx->pc = 0x21bd14u;
    // NOP
    // 0x21bd18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd1c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd20: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x21bd20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd24: 0xe60c0090  swc1        $f12, 0x90($s0)
    ctx->pc = 0x21bd24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21bd28: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD28u;
    SET_GPR_U32(ctx, 31, 0x21BD30u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD28u, 0x21BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD30u;
label_21bd30:
    // 0x21bd30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd38: 0x0  nop
    ctx->pc = 0x21bd38u;
    // NOP
    // 0x21bd3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd40: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd48: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21bd4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD4Cu;
    SET_GPR_U32(ctx, 31, 0x21BD54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD4Cu, 0x21BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD54u;
label_21bd54:
    // 0x21bd54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd5c: 0x0  nop
    ctx->pc = 0x21bd5cu;
    // NOP
    // 0x21bd60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd64: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd6c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21bd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21bd70: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD70u;
    SET_GPR_U32(ctx, 31, 0x21BD78u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD70u, 0x21BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD78u;
label_21bd78:
    // 0x21bd78: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21bd7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd80: 0x0  nop
    ctx->pc = 0x21bd80u;
    // NOP
    // 0x21bd84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd88: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd90: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21bd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21bd94: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21bd98: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21bd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bda0: 0x0  nop
    ctx->pc = 0x21bda0u;
    // NOP
    // 0x21bda4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21bda8: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21bdac: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21BDACu;
    SET_GPR_U32(ctx, 31, 0x21BDB4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21BDACu, 0x21BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDB4u;
label_21bdb4:
    // 0x21bdb4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21bdb4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21bdb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21bdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdc0: 0x0  nop
    ctx->pc = 0x21bdc0u;
    // NOP
    // 0x21bdc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21bdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21bdc8: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x21bdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21bdcc: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21bdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdd4: 0x0  nop
    ctx->pc = 0x21bdd4u;
    // NOP
    // 0x21bdd8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21bddc: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21bde0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21BDE0u;
    SET_GPR_U32(ctx, 31, 0x21BDE8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21BDE0u, 0x21BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDE8u;
label_21bde8:
    // 0x21bde8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21bde8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21bdec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21bdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdf4: 0x0  nop
    ctx->pc = 0x21bdf4u;
    // NOP
    // 0x21bdf8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21bdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21bdfc: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x21bdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21be00: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21be04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be08: 0x0  nop
    ctx->pc = 0x21be08u;
    // NOP
    // 0x21be0c: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x21be0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21be10: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x21be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x21be14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be18: 0x0  nop
    ctx->pc = 0x21be18u;
    // NOP
    // 0x21be1c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21be20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be28: 0x0  nop
    ctx->pc = 0x21be28u;
    // NOP
    // 0x21be2c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21be30: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21be34: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21be38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be3c: 0x0  nop
    ctx->pc = 0x21be3cu;
    // NOP
    // 0x21be40: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21be40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21be44: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21be44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21be48: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21be4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be50: 0x0  nop
    ctx->pc = 0x21be50u;
    // NOP
    // 0x21be54: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x21be54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21be58: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21be5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be60: 0x0  nop
    ctx->pc = 0x21be60u;
    // NOP
    // 0x21be64: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x21be64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21be68: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x21be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x21be6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be70: 0x0  nop
    ctx->pc = 0x21be70u;
    // NOP
    // 0x21be74: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21be78: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21be7c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21be80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21be84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21be84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21be88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be8c: 0x0  nop
    ctx->pc = 0x21be8cu;
    // NOP
    // 0x21be90: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21be90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21be94: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21be98: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x21be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21be9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bea0: 0x0  nop
    ctx->pc = 0x21bea0u;
    // NOP
    // 0x21bea4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21bea8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BEA8u;
    SET_GPR_U32(ctx, 31, 0x21BEB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BEA8u, 0x21BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEB0u;
label_21beb0:
    // 0x21beb0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21beb0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21beb4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21beb8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21bebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bec0: 0x0  nop
    ctx->pc = 0x21bec0u;
    // NOP
    // 0x21bec4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bec8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21bec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21becc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BECCu;
    SET_GPR_U32(ctx, 31, 0x21BED4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BECCu, 0x21BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BED4u;
label_21bed4:
    // 0x21bed4: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21bed8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21bedc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bee0: 0x0  nop
    ctx->pc = 0x21bee0u;
    // NOP
    // 0x21bee4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x21bee4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bee8: 0xe60c0038  swc1        $f12, 0x38($s0)
    ctx->pc = 0x21bee8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x21beec: 0x0  nop
    ctx->pc = 0x21beecu;
    // NOP
label_21bef0:
    // 0x21bef0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21bef4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21bef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21bef8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21befc: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x21befcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x21bf00: 0x3464d845  ori         $a0, $v1, 0xD845
    ctx->pc = 0x21bf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21bf04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21bf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bf08: 0x0  nop
    ctx->pc = 0x21bf08u;
    // NOP
    // 0x21bf0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bf0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bf10: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21bf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21bf14: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21bf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_21bf18:
    // 0x21bf18: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x21bf18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21bf1c: 0x1460ff3f  bnez        $v1, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x21BF1Cu;
    {
        const bool branch_taken_0x21bf1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf1c) {
            ctx->pc = 0x21BC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bc1c;
        }
    }
    ctx->pc = 0x21BF24u;
    // 0x21bf24: 0x0  nop
    ctx->pc = 0x21bf24u;
    // NOP
label_21bf28:
    // 0x21bf28: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x21bf28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21bf2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21bf2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21bf30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21bf30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21bf34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21bf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bf38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21bf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bf3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21bf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bf40: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21bf44: 0x3e00008  jr          $ra
    ctx->pc = 0x21BF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BF4Cu;
}
