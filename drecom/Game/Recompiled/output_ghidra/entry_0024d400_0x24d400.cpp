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

// Function: entry_0024d400
// Address: 0x24d400 - 0x24d6c4
void entry_0024d400_0x24d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d400_0x24d400");
#endif

    switch (ctx->pc) {
        case 0x24d440u: goto label_24d440;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d568u: goto label_24d568;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d634u: goto label_24d634;
        case 0x24d640u: goto label_24d640;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6acu: goto label_24d6ac;
        default: break;
    }

    ctx->pc = 0x24d400u;

    // 0x24d400: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24d400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d404: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24D404u;
    {
        const bool branch_taken_0x24d404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d404) {
            ctx->pc = 0x24D2E0u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x24D6C4u;
}
