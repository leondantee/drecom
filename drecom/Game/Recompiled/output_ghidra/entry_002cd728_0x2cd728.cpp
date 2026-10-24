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

// Function: entry_002cd728
// Address: 0x2cd728 - 0x2cd854
void entry_002cd728_0x2cd728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd728_0x2cd728");
#endif

    switch (ctx->pc) {
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd840u: goto label_2cd840;
        default: break;
    }

    ctx->pc = 0x2cd728u;

    // 0x2cd728: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cd72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd730: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd734: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cd734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cd738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd73c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd740: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cd740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cd744: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd74c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd750: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2cd750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2cd754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd758: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CD758u;
    SET_GPR_U32(ctx, 31, 0x2CD760u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CD758u, 0x2CD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD760u;
label_2cd760:
    // 0x2cd760: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cd764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd768: 0x0  nop
    ctx->pc = 0x2cd768u;
    // NOP
    // 0x2cd76c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cd76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cd770: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cd774: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cd774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cd778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd77c: 0x0  nop
    ctx->pc = 0x2cd77cu;
    // NOP
    // 0x2cd780: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cd780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cd784: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2cd784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2cd788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd78c: 0x0  nop
    ctx->pc = 0x2cd78cu;
    // NOP
    // 0x2cd790: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cd790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd79c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cd7a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd7a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd7ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd7b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd7b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cd7b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd7b8: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cd7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cd7bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd7bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd7c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cd7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd7c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CD7C4u;
    SET_GPR_U32(ctx, 31, 0x2CD7CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CD7C4u, 0x2CD7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7CCu;
label_2cd7cc:
    // 0x2cd7cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cd7ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cd7d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CD7D0u;
    SET_GPR_U32(ctx, 31, 0x2CD7D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CD7D0u, 0x2CD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7D8u;
label_2cd7d8:
    // 0x2cd7d8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2cd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2cd7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd7e0: 0x0  nop
    ctx->pc = 0x2cd7e0u;
    // NOP
    // 0x2cd7e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cd7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd7e8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cd7ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cd7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cd7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd7f4: 0x0  nop
    ctx->pc = 0x2cd7f4u;
    // NOP
    // 0x2cd7f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cd7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cd7fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd800: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd804: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cd804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cd808: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd80c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd810: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd814: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd81c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cd81cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd820: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cd820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cd824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd828: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cd828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cd82c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CD82Cu;
    SET_GPR_U32(ctx, 31, 0x2CD834u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CD82Cu, 0x2CD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD834u;
label_2cd834:
    // 0x2cd834: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cd834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cd838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CD838u;
    SET_GPR_U32(ctx, 31, 0x2CD840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CD838u, 0x2CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD840u;
label_2cd840:
    // 0x2cd840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd844: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd848: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2cd848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cd84c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cd84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2cd850: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cd850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2cd854u;
}
