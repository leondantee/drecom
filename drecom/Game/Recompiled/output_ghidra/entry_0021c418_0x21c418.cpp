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

// Function: entry_0021c418
// Address: 0x21c418 - 0x21c4e0
void entry_0021c418_0x21c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c418_0x21c418");
#endif

    switch (ctx->pc) {
        case 0x21c420u: goto label_21c420;
        case 0x21c46cu: goto label_21c46c;
        case 0x21c478u: goto label_21c478;
        case 0x21c480u: goto label_21c480;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4d8u: goto label_21c4d8;
        default: break;
    }

    ctx->pc = 0x21c418u;

    // 0x21c418: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C418u;
    SET_GPR_U32(ctx, 31, 0x21C420u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C418u, 0x21C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C420u;
label_21c420:
    // 0x21c420: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c428: 0x0  nop
    ctx->pc = 0x21c428u;
    // NOP
    // 0x21c42c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c430: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c438: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c43c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c440: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c444: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c448: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c44c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c454: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c458: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x21c45c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c460: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c464: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C464u;
    SET_GPR_U32(ctx, 31, 0x21C46Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C464u, 0x21C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C46Cu;
label_21c46c:
    // 0x21c46c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c470: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C470u;
    SET_GPR_U32(ctx, 31, 0x21C478u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C470u, 0x21C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C478u;
label_21c478:
    // 0x21c478: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C478u;
    SET_GPR_U32(ctx, 31, 0x21C480u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C478u, 0x21C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C480u;
label_21c480:
    // 0x21c480: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c488: 0x0  nop
    ctx->pc = 0x21c488u;
    // NOP
    // 0x21c48c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c490: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c498: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c49c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c4a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c4a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c4a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c4ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c4b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c4b8: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x21c4bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c4bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c4c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c4c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C4C4u;
    SET_GPR_U32(ctx, 31, 0x21C4CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C4C4u, 0x21C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4CCu;
label_21c4cc:
    // 0x21c4cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c4ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c4d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C4D0u;
    SET_GPR_U32(ctx, 31, 0x21C4D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C4D0u, 0x21C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4D8u;
label_21c4d8:
    // 0x21c4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21c4dc: 0x0  nop
    ctx->pc = 0x21c4dcu;
    // NOP
    ctx->pc = 0x21c4e0u;
}
