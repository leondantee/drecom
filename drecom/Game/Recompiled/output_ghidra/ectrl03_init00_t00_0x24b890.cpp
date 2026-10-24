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

// Function: ectrl03_init00_t00
// Address: 0x24b890 - 0x24ba38
void ectrl03_init00_t00_0x24b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_init00_t00_0x24b890");
#endif

    switch (ctx->pc) {
        case 0x24b90cu: goto label_24b90c;
        case 0x24b918u: goto label_24b918;
        case 0x24b95cu: goto label_24b95c;
        case 0x24b970u: goto label_24b970;
        case 0x24b97cu: goto label_24b97c;
        case 0x24b988u: goto label_24b988;
        case 0x24ba10u: goto label_24ba10;
        case 0x24ba1cu: goto label_24ba1c;
        default: break;
    }

    ctx->pc = 0x24b890u;

    // 0x24b890: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24b894: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24b898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24b89c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24b8a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b8a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b8a8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24b8ac: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x24b8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b8b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b8b4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24b8b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b8bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b8c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b8c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b8cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b8d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24b8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b8d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b8d8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b8dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b8e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b8e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b8e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b8ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b8f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b8f4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24b8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b8f8: 0x24047c00  addiu       $a0, $zero, 0x7C00
    ctx->pc = 0x24b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
    // 0x24b8fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24b8fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24b900: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24b904: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24B904u;
    SET_GPR_U32(ctx, 31, 0x24B90Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24B904u, 0x24B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B90Cu;
label_24b90c:
    // 0x24b90c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24b90cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b910: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24B910u;
    SET_GPR_U32(ctx, 31, 0x24B918u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24B910u, 0x24B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B918u;
label_24b918:
    // 0x24b918: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24b918u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b91c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b920: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x24b920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x24b924: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24b928: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24b928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24b92c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B92Cu;
    {
        const bool branch_taken_0x24b92c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24b92c) {
            ctx->pc = 0x24B950u;
            goto label_24b950;
        }
    }
    ctx->pc = 0x24B934u;
    // 0x24b934: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b93c: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24b93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24b940: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24b944: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24b944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24b948: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x24B948u;
    {
        const bool branch_taken_0x24b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b948) {
            ctx->pc = 0x24BA24u;
            goto label_24ba24;
        }
    }
    ctx->pc = 0x24B950u;
label_24b950:
    // 0x24b950: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b954: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B954u;
    SET_GPR_U32(ctx, 31, 0x24B95Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B95Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B95Cu) { return; }
    ctx->pc = 0x24B95Cu;
label_24b95c:
    // 0x24b95c: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24b960: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b964: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24b964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24b968: 0xc040c92  jal         func_103248
    ctx->pc = 0x24B968u;
    SET_GPR_U32(ctx, 31, 0x24B970u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24B970u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B970u) { return; }
    ctx->pc = 0x24B970u;
label_24b970:
    // 0x24b970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24b970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b974: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24B974u;
    SET_GPR_U32(ctx, 31, 0x24B97Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24B974u, 0x24B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B97Cu;
label_24b97c:
    // 0x24b97c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24b980: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24B980u;
    SET_GPR_U32(ctx, 31, 0x24B988u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24B980u, 0x24B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B988u;
label_24b988:
    // 0x24b988: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b98c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24b990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b994: 0x0  nop
    ctx->pc = 0x24b994u;
    // NOP
    // 0x24b998: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24b998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b99c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24b9a0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b9a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24b9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24b9c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9dc: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24b9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b9e0: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24b9e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9fc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24b9fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ba00: 0x24042300  addiu       $a0, $zero, 0x2300
    ctx->pc = 0x24ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8960));
    // 0x24ba04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24ba04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ba08: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24BA08u;
    SET_GPR_U32(ctx, 31, 0x24BA10u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24BA08u, 0x24BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA10u;
label_24ba10:
    // 0x24ba10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ba10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ba14: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24BA14u;
    SET_GPR_U32(ctx, 31, 0x24BA1Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24BA14u, 0x24BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA1Cu;
label_24ba1c:
    // 0x24ba1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24ba20: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_24ba24:
    // 0x24ba24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24ba24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ba28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ba28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba2c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x24ba2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA38u;
}
