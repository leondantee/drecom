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

// Function: entry_0024e834
// Address: 0x24e834 - 0x24e958
void entry_0024e834_0x24e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024e834_0x24e834");
#endif

    switch (ctx->pc) {
        case 0x24e914u: goto label_24e914;
        case 0x24e920u: goto label_24e920;
        default: break;
    }

    ctx->pc = 0x24e834u;

    // 0x24e834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e838: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e83c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e840: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e844: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e848: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e850: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e854: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x24e854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e858: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e85c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e860: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e864: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e868: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e870: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e874: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x24e874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x24e878: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24e878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e87c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24e880: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e884: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e888: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e88c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e894: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e898: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x24e898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e89c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8a0: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x24e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24e8a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24e8a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e8ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e8b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e8b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e8bc: 0x1023025  or          $a2, $t0, $v0
    ctx->pc = 0x24e8bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x24e8c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8c4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e8c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e8d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8d4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24e8d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e8dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e8e0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24e8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e8e8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24e8ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24e8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e8f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24e8f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e8f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e904: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24e904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24e908: 0x2404080b  addiu       $a0, $zero, 0x80B
    ctx->pc = 0x24e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x24e90c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E90Cu;
    SET_GPR_U32(ctx, 31, 0x24E914u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E90Cu, 0x24E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E914u;
label_24e914:
    // 0x24e914: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e918: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E918u;
    SET_GPR_U32(ctx, 31, 0x24E920u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E918u, 0x24E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E920u;
label_24e920:
    // 0x24e920: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24e920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e924: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x24e924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
    // 0x24e928: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24e928u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e92c: 0x0  nop
    ctx->pc = 0x24e92cu;
    // NOP
    // 0x24e930: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e934: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e938: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e93c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x24e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x24e940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24e940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e944: 0x0  nop
    ctx->pc = 0x24e944u;
    // NOP
    // 0x24e948: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e94c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e950: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24e954: 0x0  nop
    ctx->pc = 0x24e954u;
    // NOP
    ctx->pc = 0x24e958u;
}
