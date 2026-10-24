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

// Function: entry_00345e7c
// Address: 0x345e7c - 0x345f00
void entry_00345e7c_0x345e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345e7c_0x345e7c");
#endif

    switch (ctx->pc) {
        case 0x345eccu: goto label_345ecc;
        case 0x345edcu: goto label_345edc;
        case 0x345ef0u: goto label_345ef0;
        default: break;
    }

    ctx->pc = 0x345e7cu;

    // 0x345e7c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x345e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345e84: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x345e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x345e88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345e8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345e94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345e98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345e9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345ea0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345ea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345ea8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345eac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345eb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345eb4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345eb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345ebc: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x345ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x345ec0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345ec0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345ec4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345EC4u;
    SET_GPR_U32(ctx, 31, 0x345ECCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345EC4u, 0x345ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ECCu;
label_345ecc:
    // 0x345ecc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345ed0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x345ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x345ed4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345ED4u;
    SET_GPR_U32(ctx, 31, 0x345EDCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345ED4u, 0x345EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EDCu;
label_345edc:
    // 0x345edc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345ee0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x345ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x345ee4: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x345ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x345ee8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345EE8u;
    SET_GPR_U32(ctx, 31, 0x345EF0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345EE8u, 0x345EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EF0u;
label_345ef0:
    // 0x345ef0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x345ef4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x345ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x345ef8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345EF8u;
    SET_GPR_U32(ctx, 31, 0x345F00u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345EF8u, 0x345F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F00u;
}
