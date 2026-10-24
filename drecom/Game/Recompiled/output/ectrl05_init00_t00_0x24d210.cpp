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

// Function: ectrl05_init00_t00
// Address: 0x24d210 - 0x24db48
void ectrl05_init00_t00_0x24d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl05_init00_t00_0x24d210");
#endif

    switch (ctx->pc) {
        case 0x24d264u: goto label_24d264;
        case 0x24d270u: goto label_24d270;
        case 0x24d27cu: goto label_24d27c;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3ccu: goto label_24d3cc;
        case 0x24d440u: goto label_24d440;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d568u: goto label_24d568;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d634u: goto label_24d634;
        case 0x24d640u: goto label_24d640;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d858u: goto label_24d858;
        case 0x24d864u: goto label_24d864;
        case 0x24d998u: goto label_24d998;
        case 0x24d9a4u: goto label_24d9a4;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da18u: goto label_24da18;
        case 0x24da64u: goto label_24da64;
        case 0x24da70u: goto label_24da70;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac8u: goto label_24dac8;
        case 0x24db14u: goto label_24db14;
        case 0x24db20u: goto label_24db20;
        default: break;
    }

    ctx->pc = 0x24d210u;

    // 0x24d210: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24d214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24d218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d21c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x24d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x24d220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d224: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24d224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d228: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24d228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x24d22c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d230: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d234: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d238: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d23c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d240: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d244: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24d244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24d248: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d24c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24d24cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24d250: 0x24041e02  addiu       $a0, $zero, 0x1E02
    ctx->pc = 0x24d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x24d254: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d258: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24d258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24d25c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24D25Cu;
    SET_GPR_U32(ctx, 31, 0x24D264u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24D25Cu, 0x24D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D264u;
label_24d264:
    // 0x24d264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d268: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24D268u;
    SET_GPR_U32(ctx, 31, 0x24D270u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24D268u, 0x24D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D270u;
label_24d270:
    // 0x24d270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24d270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d274: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24D274u;
    SET_GPR_U32(ctx, 31, 0x24D27Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24D274u, 0x24D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D27Cu;
label_24d27c:
    // 0x24d27c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24d280: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24d280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d284: 0x0  nop
    ctx->pc = 0x24d284u;
    // NOP
    // 0x24d288: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24d288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d28c: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x24d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x24d290: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24d290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x24d294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d298: 0x0  nop
    ctx->pc = 0x24d298u;
    // NOP
    // 0x24d29c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d2a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d2a4: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x24d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x24d2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d2ac: 0x0  nop
    ctx->pc = 0x24d2acu;
    // NOP
    // 0x24d2b0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d2b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24d2b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d2bc: 0x0  nop
    ctx->pc = 0x24d2bcu;
    // NOP
    // 0x24d2c0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d2c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24d2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d2cc: 0x0  nop
    ctx->pc = 0x24d2ccu;
    // NOP
    // 0x24d2d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x24d2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24d2d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24d2d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d2d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x24D2D8u;
    {
        const bool branch_taken_0x24d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d2d8) {
            ctx->pc = 0x24D400u;
            goto label_24d400;
        }
    }
    ctx->pc = 0x24D2E0u;
label_24d2e0:
    // 0x24d2e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d2e4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24d2e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d2ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d2f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d2f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d2f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d2fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d300: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d304: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d308: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24d308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d30c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24d30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24d310: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d314: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d31c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x24d31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24d320: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x24d320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x24d324: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d328: 0x8d2300c4  lw          $v1, 0xC4($t1)
    ctx->pc = 0x24d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x24d32c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d330: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24d330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24d334: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d338: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d33c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d340: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24d340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24d344: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x24d344u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d348: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d34c: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24d350: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d354: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24d354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24d358: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d35c: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d364: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24d364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24d368: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x24d368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x24d36c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24d36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d370: 0x8ce400c0  lw          $a0, 0xC0($a3)
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x24d374: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24d378: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24d37c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d380: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d38c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24d38cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d394: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d398: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d39c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d3a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d3a4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24d3a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d3ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24d3b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24d3b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24d3b4: 0x2404080e  addiu       $a0, $zero, 0x80E
    ctx->pc = 0x24d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2062));
    // 0x24d3b8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D3B8u;
    SET_GPR_U32(ctx, 31, 0x24D3C0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D3B8u, 0x24D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3C0u;
label_24d3c0:
    // 0x24d3c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d3c4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D3C4u;
    SET_GPR_U32(ctx, 31, 0x24D3CCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D3C4u, 0x24D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3CCu;
label_24d3cc:
    // 0x24d3cc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d3d0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x24d3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d3d8: 0x0  nop
    ctx->pc = 0x24d3d8u;
    // NOP
    // 0x24d3dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d3e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d3e4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d3e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24d3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d3f0: 0x0  nop
    ctx->pc = 0x24d3f0u;
    // NOP
    // 0x24d3f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d3f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d3f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d3fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24d400:
    // 0x24d400: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24d400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d404: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24D404u;
    {
        const bool branch_taken_0x24d404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d404) {
            ctx->pc = 0x24D2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d2e0;
        }
    }
    ctx->pc = 0x24D40Cu;
    // 0x24d40c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d410: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24d414: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d418: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d41c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d420: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d424: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x24d424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
    // 0x24d428: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24d428u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d42c: 0x0  nop
    ctx->pc = 0x24d42cu;
    // NOP
    // 0x24d430: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d434: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d438: 0xc06765c  jal         func_19D970
    ctx->pc = 0x24D438u;
    SET_GPR_U32(ctx, 31, 0x24D440u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x24D438u, 0x24D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D440u;
label_24d440:
    // 0x24d440: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24d444: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24d444u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d448: 0x0  nop
    ctx->pc = 0x24d448u;
    // NOP
    // 0x24d44c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24d44cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d450: 0x3c0644af  lui         $a2, 0x44AF
    ctx->pc = 0x24d450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17583 << 16));
    // 0x24d454: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24d454u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d458: 0x0  nop
    ctx->pc = 0x24d458u;
    // NOP
    // 0x24d45c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d460: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d468: 0x0  nop
    ctx->pc = 0x24d468u;
    // NOP
    // 0x24d46c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d470: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x24d470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x24d474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d478: 0x0  nop
    ctx->pc = 0x24d478u;
    // NOP
    // 0x24d47c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d480: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d488: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d48c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d490: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d494: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24d494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d498: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x24d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24d49c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d4a0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d4a4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24d4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d4a8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24d4a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24d4ac: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d4b0: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24d4b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24d4b4: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24d4b8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24d4bc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x24d4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24d4c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d4c4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24d4c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d4cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d4d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d4d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d4d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d4dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d4e0: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x24d4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24d4e4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24d4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d4e8: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x24d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x24d4ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d4f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24d4f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d4f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d4fc: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x24d4fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d500: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x24d500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24d504: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x24d504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24d508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d50c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d510: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d514: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d518: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d51c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d520: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d524: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d528: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d52c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d530: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d534: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d538: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d53c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d540: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d54c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24d54cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d550: 0x2404080d  addiu       $a0, $zero, 0x80D
    ctx->pc = 0x24d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x24d554: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D554u;
    SET_GPR_U32(ctx, 31, 0x24D55Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D554u, 0x24D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D55Cu;
label_24d55c:
    // 0x24d55c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d55cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d560: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D560u;
    SET_GPR_U32(ctx, 31, 0x24D568u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D560u, 0x24D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D568u;
label_24d568:
    // 0x24d568: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d56c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24d570: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d574: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d578: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d578u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d57c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d580: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24d584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d588: 0x0  nop
    ctx->pc = 0x24d588u;
    // NOP
    // 0x24d58c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d58cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d590: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24d594: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d598: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d59c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d5a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d5a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d5a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d5ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d5b0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d5b4: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x24d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x24d5b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d5b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d5bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d5c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24D5C0u;
    SET_GPR_U32(ctx, 31, 0x24D5C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24D5C0u, 0x24D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5C8u;
label_24d5c8:
    // 0x24d5c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d5cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24D5CCu;
    SET_GPR_U32(ctx, 31, 0x24D5D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24D5CCu, 0x24D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5D4u;
label_24d5d4:
    // 0x24d5d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d5d8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24d5dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d5dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d5e0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d5e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d5e8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d5ec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d5f4: 0x0  nop
    ctx->pc = 0x24d5f4u;
    // NOP
    // 0x24d5f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d5fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24d5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24d600: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d604: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d608: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d60c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d614: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d61c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d620: 0x2404050e  addiu       $a0, $zero, 0x50E
    ctx->pc = 0x24d620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x24d624: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d628: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24d628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d62c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24D62Cu;
    SET_GPR_U32(ctx, 31, 0x24D634u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24D62Cu, 0x24D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D634u;
label_24d634:
    // 0x24d634: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d638: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24D638u;
    SET_GPR_U32(ctx, 31, 0x24D640u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24D638u, 0x24D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D640u;
label_24d640:
    // 0x24d640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d644: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24d648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d64c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d654: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d658: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24d658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24d65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d660: 0x0  nop
    ctx->pc = 0x24d660u;
    // NOP
    // 0x24d664: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d668: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24d66c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d670: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d674: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d678: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d67c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d680: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d684: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d688: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d68c: 0x2404050e  addiu       $a0, $zero, 0x50E
    ctx->pc = 0x24d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x24d690: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d694: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d698: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24D698u;
    SET_GPR_U32(ctx, 31, 0x24D6A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24D698u, 0x24D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6A0u;
label_24d6a0:
    // 0x24d6a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d6a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24D6A4u;
    SET_GPR_U32(ctx, 31, 0x24D6ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24D6A4u, 0x24D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6ACu;
label_24d6ac:
    // 0x24d6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d6b0: 0x0  nop
    ctx->pc = 0x24d6b0u;
    // NOP
    // 0x24d6b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24d6b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x24d6b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d6bc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24D6BCu;
    {
        const bool branch_taken_0x24d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d6bc) {
            ctx->pc = 0x24D878u;
            goto label_24d878;
        }
    }
    ctx->pc = 0x24D6C4u;
label_24d6c4:
    // 0x24d6c4: 0xc067654  jal         func_19D950
    ctx->pc = 0x24D6C4u;
    SET_GPR_U32(ctx, 31, 0x24D6CCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24D6C4u, 0x24D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6CCu;
label_24d6cc:
    // 0x24d6cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24d6d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d6d4: 0x0  nop
    ctx->pc = 0x24d6d4u;
    // NOP
    // 0x24d6d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d6dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24d6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24d6e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x24D6E0u;
    SET_GPR_U32(ctx, 31, 0x24D6E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24D6E0u, 0x24D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6E8u;
label_24d6e8:
    // 0x24d6e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24d6ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d6f0: 0x0  nop
    ctx->pc = 0x24d6f0u;
    // NOP
    // 0x24d6f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d6f8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24d6fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d700: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24d704: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d708: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d70c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d710: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d714: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d71c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24d720: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d724: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d72c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d730: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24d734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d738: 0x0  nop
    ctx->pc = 0x24d738u;
    // NOP
    // 0x24d73c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d740: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x24d744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d748: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d74c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24d74cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d750: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24d754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d758: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d75c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d760: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24d764: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d768: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24d76c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d770: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d774: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d778: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d77c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d798: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d79c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d7a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d7b8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24d7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d7bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d7c0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24d7c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d7dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d7e4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24d7e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d800: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24d800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d808: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d81c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d824: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d82c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d830: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d834: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d83c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d844: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d848: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24d848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d84c: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x24d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24d850: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D850u;
    SET_GPR_U32(ctx, 31, 0x24D858u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D850u, 0x24D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D858u;
label_24d858:
    // 0x24d858: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d85c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D85Cu;
    SET_GPR_U32(ctx, 31, 0x24D864u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D85Cu, 0x24D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D864u;
label_24d864:
    // 0x24d864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24d868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d86c: 0x0  nop
    ctx->pc = 0x24d86cu;
    // NOP
    // 0x24d870: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24d874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24d878:
    // 0x24d878: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x24d878u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d87c: 0x14c0ff91  bnez        $a2, . + 4 + (-0x6F << 2)
    ctx->pc = 0x24D87Cu;
    {
        const bool branch_taken_0x24d87c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d87c) {
            ctx->pc = 0x24D6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d6c4;
        }
    }
    ctx->pc = 0x24D884u;
    // 0x24d884: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24d888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d88c: 0x0  nop
    ctx->pc = 0x24d88cu;
    // NOP
    // 0x24d890: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d898: 0x0  nop
    ctx->pc = 0x24d898u;
    // NOP
    // 0x24d89c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d8a0: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24d8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d8a8: 0x0  nop
    ctx->pc = 0x24d8a8u;
    // NOP
    // 0x24d8ac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d8b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d8b4: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24d8b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d8bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d8c4: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x24d8c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x24d8c8: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x24d8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x24d8cc: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x24d8ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24d8d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d8d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d8d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d8dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d8e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d8e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d8e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d8ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d8f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d8f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d8f8: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24d8fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d900: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d904: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d908: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d90c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d914: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d918: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d91c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x24d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24d920: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24d924: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d928: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d92c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d930: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d934: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x24d934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d938: 0xc54825  or          $t1, $a2, $a1
    ctx->pc = 0x24d938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x24d93c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d940: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24d940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24d944: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24d944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d948: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d94c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d950: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d958: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d95c: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x24d95cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x24d960: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d964: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24d964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24d968: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24d968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d96c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d970: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d974: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d97c: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x24d97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d980: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x24d980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x24d984: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24d988: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24d988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d98c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24d98cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24d990: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D990u;
    SET_GPR_U32(ctx, 31, 0x24D998u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D990u, 0x24D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D998u;
label_24d998:
    // 0x24d998: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d99c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D99Cu;
    SET_GPR_U32(ctx, 31, 0x24D9A4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D99Cu, 0x24D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9A4u;
label_24d9a4:
    // 0x24d9a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24d9a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d9a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d9ac: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24d9b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24d9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d9b4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24d9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d9b8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x24d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x24d9bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d9c0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d9c8: 0x0  nop
    ctx->pc = 0x24d9c8u;
    // NOP
    // 0x24d9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d9d0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d9d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d9d8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d9dc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24d9e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d9e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d9e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d9f0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d9f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d9f4: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x24d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x24d9f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d9f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d9fc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24da00: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24da00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DA04u;
    SET_GPR_U32(ctx, 31, 0x24DA0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DA04u, 0x24DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA0Cu;
label_24da0c:
    // 0x24da0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24da0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DA10u;
    SET_GPR_U32(ctx, 31, 0x24DA18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DA10u, 0x24DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA18u;
label_24da18:
    // 0x24da18: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da1c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24da20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24da20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da24: 0x0  nop
    ctx->pc = 0x24da24u;
    // NOP
    // 0x24da28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24da28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24da2c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24da2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24da30: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24da34: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x24da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x24da38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24da38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24da3c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24da3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24da40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24da44: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24da48: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24da4c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24da4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24da50: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24da54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24da54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24da58: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24da5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DA5Cu;
    SET_GPR_U32(ctx, 31, 0x24DA64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DA5Cu, 0x24DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24da64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DA68u;
    SET_GPR_U32(ctx, 31, 0x24DA70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DA68u, 0x24DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA70u;
label_24da70:
    // 0x24da70: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da74: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24da74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24da78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24da78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da7c: 0x0  nop
    ctx->pc = 0x24da7cu;
    // NOP
    // 0x24da80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24da80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24da84: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24da84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24da88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24da8c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24da90: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24da90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24da94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24da94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24da98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24da9c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24daa0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24daa4: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24daa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24daa8: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24daac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24daacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24dab0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dab4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DAB4u;
    SET_GPR_U32(ctx, 31, 0x24DABCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DAB4u, 0x24DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DABCu;
label_24dabc:
    // 0x24dabc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dabcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dac0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DAC0u;
    SET_GPR_U32(ctx, 31, 0x24DAC8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DAC0u, 0x24DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAC8u;
label_24dac8:
    // 0x24dac8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dacc: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x24dad0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24dad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dad4: 0x0  nop
    ctx->pc = 0x24dad4u;
    // NOP
    // 0x24dad8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dadc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24dadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24dae0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dae4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dae8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24daec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24daecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24daf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24daf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24daf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dafc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24dafcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24db00: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x24db04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24db04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24db08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24db0c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DB0Cu;
    SET_GPR_U32(ctx, 31, 0x24DB14u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DB0Cu, 0x24DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB14u;
label_24db14:
    // 0x24db14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24db14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24db18: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DB18u;
    SET_GPR_U32(ctx, 31, 0x24DB20u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DB18u, 0x24DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB20u;
label_24db20:
    // 0x24db20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24db24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24db28: 0x38660010  xori        $a2, $v1, 0x10
    ctx->pc = 0x24db28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24db2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24db30: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x24db30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x24db34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24db34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24db38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24db38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db3c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24db3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24db40: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DB48u;
}
