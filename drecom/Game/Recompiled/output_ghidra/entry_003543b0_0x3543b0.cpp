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

// Function: entry_003543b0
// Address: 0x3543b0 - 0x354420
void entry_003543b0_0x3543b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003543b0_0x3543b0");
#endif

    switch (ctx->pc) {
        case 0x3543f4u: goto label_3543f4;
        case 0x354404u: goto label_354404;
        case 0x354418u: goto label_354418;
        default: break;
    }

    ctx->pc = 0x3543b0u;

    // 0x3543b0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3543b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3543b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3543b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3543b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3543b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3543bc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x3543bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3543c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3543c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3543c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3543c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3543c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3543c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3543cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3543ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3543d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3543d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3543d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3543d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3543d8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3543d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3543dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3543e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3543e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3543e4: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x3543e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x3543e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3543e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3543ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3543ECu;
    SET_GPR_U32(ctx, 31, 0x3543F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3543ECu, 0x3543F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543F4u;
label_3543f4:
    // 0x3543f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3543f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x3543fc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3543FCu;
    SET_GPR_U32(ctx, 31, 0x354404u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3543FCu, 0x354404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354404u;
label_354404:
    // 0x354404: 0x3c0202fa  lui         $v0, 0x2FA
    ctx->pc = 0x354404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)762 << 16));
    // 0x354408: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35440c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x35440cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x354410: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x354410u;
    SET_GPR_U32(ctx, 31, 0x354418u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354410u, 0x354418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354418u;
label_354418:
    // 0x354418: 0x100002fd  b           . + 4 + (0x2FD << 2)
    ctx->pc = 0x354418u;
    {
        const bool branch_taken_0x354418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354418) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354420u;
}
