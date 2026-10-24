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

// Function: ectrl12_init00_t03
// Address: 0x2517e0 - 0x251978
void ectrl12_init00_t03_0x2517e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl12_init00_t03_0x2517e0");
#endif

    switch (ctx->pc) {
        case 0x25185cu: goto label_25185c;
        case 0x251868u: goto label_251868;
        case 0x25189cu: goto label_25189c;
        case 0x2518a8u: goto label_2518a8;
        case 0x251908u: goto label_251908;
        case 0x251914u: goto label_251914;
        case 0x251948u: goto label_251948;
        case 0x251954u: goto label_251954;
        default: break;
    }

    ctx->pc = 0x2517e0u;

    // 0x2517e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2517e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2517e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2517e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2517e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2517e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2517ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2517ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2517f0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2517f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2517f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2517f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2517f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2517f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2517fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2517fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x251800: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x251800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251804: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x251804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x251808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25180c: 0x0  nop
    ctx->pc = 0x25180cu;
    // NOP
    // 0x251810: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251814: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x251814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x251818: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x251818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x25181c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25181cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251820: 0x0  nop
    ctx->pc = 0x251820u;
    // NOP
    // 0x251824: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x251824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x251828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25182c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251830: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251834: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25183c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251844: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251848: 0x24046106  addiu       $a0, $zero, 0x6106
    ctx->pc = 0x251848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24838));
    // 0x25184c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x25184cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251850: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251854: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251854u;
    SET_GPR_U32(ctx, 31, 0x25185Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251854u, 0x25185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25185Cu;
label_25185c:
    // 0x25185c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25185cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251860: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251860u;
    SET_GPR_U32(ctx, 31, 0x251868u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251860u, 0x251868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251868u;
label_251868:
    // 0x251868: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25186c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251870: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251874: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25187c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251884: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251888: 0x24046206  addiu       $a0, $zero, 0x6206
    ctx->pc = 0x251888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25094));
    // 0x25188c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x25188cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251890: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251894: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251894u;
    SET_GPR_U32(ctx, 31, 0x25189Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251894u, 0x25189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25189Cu;
label_25189c:
    // 0x25189c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25189cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2518a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2518A0u;
    SET_GPR_U32(ctx, 31, 0x2518A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2518A0u, 0x2518A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518A8u;
label_2518a8:
    // 0x2518a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2518a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2518ac: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2518acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2518b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2518b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2518b4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2518b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2518b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2518b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2518bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2518bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2518c0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2518c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2518c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2518c8: 0x0  nop
    ctx->pc = 0x2518c8u;
    // NOP
    // 0x2518cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2518ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2518d0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2518d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2518d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2518d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2518d8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2518d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2518dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2518dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2518e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2518e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2518e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2518e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2518e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2518e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2518ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2518f0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2518f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2518f4: 0x24046106  addiu       $a0, $zero, 0x6106
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24838));
    // 0x2518f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2518f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2518fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2518fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251900: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251900u;
    SET_GPR_U32(ctx, 31, 0x251908u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251900u, 0x251908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251908u;
label_251908:
    // 0x251908: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25190c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25190Cu;
    SET_GPR_U32(ctx, 31, 0x251914u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25190Cu, 0x251914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251914u;
label_251914:
    // 0x251914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251918: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25191c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251920: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251924: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251928: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25192c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251930: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251934: 0x24046206  addiu       $a0, $zero, 0x6206
    ctx->pc = 0x251934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25094));
    // 0x251938: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25193c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x25193cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251940: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251940u;
    SET_GPR_U32(ctx, 31, 0x251948u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251940u, 0x251948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251948u;
label_251948:
    // 0x251948: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25194c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25194Cu;
    SET_GPR_U32(ctx, 31, 0x251954u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25194Cu, 0x251954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251954u;
label_251954:
    // 0x251954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251958: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25195c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x25195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x251960: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x251960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251964: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x251964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x251968: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25196c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25196cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x251970: 0x3e00008  jr          $ra
    ctx->pc = 0x251970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251978u;
}
