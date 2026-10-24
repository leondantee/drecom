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

// Function: entry_00301348
// Address: 0x301348 - 0x301480
void entry_00301348_0x301348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301348_0x301348");
#endif

    switch (ctx->pc) {
        case 0x3013d8u: goto label_3013d8;
        case 0x3013fcu: goto label_3013fc;
        case 0x301474u: goto label_301474;
        default: break;
    }

    ctx->pc = 0x301348u;

    // 0x301348: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30134c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301350: 0x2432004  sllv        $a0, $v1, $s2
    ctx->pc = 0x301350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x301354: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x301354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x301358: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x301358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30135c: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x30135Cu;
    {
        const bool branch_taken_0x30135c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30135c) {
            ctx->pc = 0x3018C0u;
            return;
        }
    }
    ctx->pc = 0x301364u;
    // 0x301364: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x301364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301368: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30136c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301378: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x301378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30137c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x301380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x301384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x301384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x301388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x301388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30138c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x30138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301390: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x301394: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x301394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301398: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x301398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30139c: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x30139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x3013a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3013a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3013a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3013a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3013a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3013ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3013b0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x3013b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3013b4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3013b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3013b8: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3013b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3013bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3013bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3013c0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x3013c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x3013c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3013c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3013c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3013c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3013cc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3013ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3013d0: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x3013D0u;
    SET_GPR_U32(ctx, 31, 0x3013D8u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x3013D0u, 0x3013D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013D8u;
label_3013d8:
    // 0x3013d8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x3013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3013dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013e0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3013e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3013e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3013e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3013e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013ec: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3013ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013f0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x3013f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3013f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3013F4u;
    SET_GPR_U32(ctx, 31, 0x3013FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3013F4u, 0x3013FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013FCu;
label_3013fc:
    // 0x3013fc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3013fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301400: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x301400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x301404: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x301404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x301408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30140c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x30140Cu;
    {
        const bool branch_taken_0x30140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30140c) {
            ctx->pc = 0x3015D0u;
            return;
        }
    }
    ctx->pc = 0x301414u;
    // 0x301414: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x301414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30141c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30141Cu;
    {
        const bool branch_taken_0x30141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30141c) {
            ctx->pc = 0x301480u;
            return;
        }
    }
    ctx->pc = 0x301424u;
    // 0x301424: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x301424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301428: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30142c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301438: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x301438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30143c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x30143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301440: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301448: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x301448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30144c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x301450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x301450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x301454: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x301454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x301458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30145c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30145cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301460: 0x24042501  addiu       $a0, $zero, 0x2501
    ctx->pc = 0x301460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9473));
    // 0x301464: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301468: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x301468u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30146c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30146Cu;
    SET_GPR_U32(ctx, 31, 0x301474u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30146Cu, 0x301474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301474u;
label_301474:
    // 0x301474: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x301474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x301478: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x301478u;
    SET_GPR_U32(ctx, 31, 0x301480u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x301478u, 0x301480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301480u;
}
