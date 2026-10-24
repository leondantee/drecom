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

// Function: entry_0022f6cc
// Address: 0x22f6cc - 0x22f764
void entry_0022f6cc_0x22f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f6cc_0x22f6cc");
#endif

    switch (ctx->pc) {
        case 0x22f720u: goto label_22f720;
        case 0x22f730u: goto label_22f730;
        case 0x22f740u: goto label_22f740;
        default: break;
    }

    ctx->pc = 0x22f6ccu;

    // 0x22f6cc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f6d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f6d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f6dc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f6e0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22f6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22f6e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f6e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f6ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f6f0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22f6f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22f6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f6f8: 0x34850006  ori         $a1, $a0, 0x6
    ctx->pc = 0x22f6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x22f6fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f700: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f704: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22f708: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f70c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f710: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f714: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f714u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f718: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F718u;
    SET_GPR_U32(ctx, 31, 0x22F720u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F718u, 0x22F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22f724: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22f728: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F728u;
    SET_GPR_U32(ctx, 31, 0x22F730u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F728u, 0x22F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F730u;
label_22f730:
    // 0x22f730: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22f734: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22f738: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F738u;
    SET_GPR_U32(ctx, 31, 0x22F740u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F738u, 0x22F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f744: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f748: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f74c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f750: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22f754: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f758: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f758u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f75c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F75Cu;
    SET_GPR_U32(ctx, 31, 0x22F764u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F75Cu, 0x22F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F764u;
}
