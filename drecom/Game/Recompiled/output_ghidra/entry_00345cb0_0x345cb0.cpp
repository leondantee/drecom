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

// Function: entry_00345cb0
// Address: 0x345cb0 - 0x345d34
void entry_00345cb0_0x345cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345cb0_0x345cb0");
#endif

    switch (ctx->pc) {
        case 0x345d00u: goto label_345d00;
        case 0x345d10u: goto label_345d10;
        case 0x345d24u: goto label_345d24;
        default: break;
    }

    ctx->pc = 0x345cb0u;

    // 0x345cb0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x345cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345cb8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x345cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x345cbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345cc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345cc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345cc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345ccc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345cd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345cdc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345ce0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ce4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345ce8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x345ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345cec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345cf0: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x345cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345cf4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345cf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345cf8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345CF8u;
    SET_GPR_U32(ctx, 31, 0x345D00u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345CF8u, 0x345D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D00u;
label_345d00:
    // 0x345d00: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345d04: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x345d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x345d08: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D08u;
    SET_GPR_U32(ctx, 31, 0x345D10u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D08u, 0x345D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D10u;
label_345d10:
    // 0x345d10: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x345d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x345d14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x345d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x345d18: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x345d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x345d1c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D1Cu;
    SET_GPR_U32(ctx, 31, 0x345D24u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D1Cu, 0x345D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D24u;
label_345d24:
    // 0x345d24: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x345d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x345d28: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x345d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x345d2c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x345D2Cu;
    SET_GPR_U32(ctx, 31, 0x345D34u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x345D2Cu, 0x345D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D34u;
}
