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

// Function: entry_0022f540
// Address: 0x22f540 - 0x22f5e4
void entry_0022f540_0x22f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f540_0x22f540");
#endif

    switch (ctx->pc) {
        case 0x22f594u: goto label_22f594;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5c0u: goto label_22f5c0;
        default: break;
    }

    ctx->pc = 0x22f540u;

    // 0x22f540: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f548: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f54c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f550: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f554: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f558: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f55c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x22f55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x22f560: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x22f560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x22f564: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22f568: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x22f568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x22f56c: 0x34e80006  ori         $t0, $a3, 0x6
    ctx->pc = 0x22f56cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x22f570: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f574: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f578: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x22f578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x22f57c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f580: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f580u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f584: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f588: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f588u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f58c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F58Cu;
    SET_GPR_U32(ctx, 31, 0x22F594u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F58Cu, 0x22F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F594u;
label_22f594:
    // 0x22f594: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x22f594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f598: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x22f59c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x22f59cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22f5a0: 0x3c080014  lui         $t0, 0x14
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20 << 16));
    // 0x22f5a4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x22f5a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x22f5a8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F5A8u;
    SET_GPR_U32(ctx, 31, 0x22F5B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F5A8u, 0x22F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5B0u;
label_22f5b0:
    // 0x22f5b0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22f5b4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22f5b8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F5B8u;
    SET_GPR_U32(ctx, 31, 0x22F5C0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F5B8u, 0x22F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5C0u;
label_22f5c0:
    // 0x22f5c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f5c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f5c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f5cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f5d0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22f5d4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f5d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f5d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f5dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F5DCu;
    SET_GPR_U32(ctx, 31, 0x22F5E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F5DCu, 0x22F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5E4u;
}
