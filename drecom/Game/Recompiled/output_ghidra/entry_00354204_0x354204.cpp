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

// Function: entry_00354204
// Address: 0x354204 - 0x354268
void entry_00354204_0x354204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354204_0x354204");
#endif

    switch (ctx->pc) {
        case 0x354248u: goto label_354248;
        case 0x354258u: goto label_354258;
        default: break;
    }

    ctx->pc = 0x354204u;

    // 0x354204: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x354204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354208: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35420c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x35420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x354210: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x354210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x354214: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x354214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x354218: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x354218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35421c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x354220: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x354220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x354224: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x354224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x354228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x354228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35422c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x35422cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x354230: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x354230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x354234: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354234u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354238: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x35423c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x35423cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354240: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354240u;
    SET_GPR_U32(ctx, 31, 0x354248u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354240u, 0x354248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354248u;
label_354248:
    // 0x354248: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x35424c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x35424cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x354250: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354250u;
    SET_GPR_U32(ctx, 31, 0x354258u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354250u, 0x354258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354258u;
label_354258:
    // 0x354258: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x35425c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x35425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x354260: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354260u;
    SET_GPR_U32(ctx, 31, 0x354268u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354260u, 0x354268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354268u;
}
