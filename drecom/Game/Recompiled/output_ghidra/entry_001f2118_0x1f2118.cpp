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

// Function: entry_001f2118
// Address: 0x1f2118 - 0x1f21c4
void entry_001f2118_0x1f2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2118_0x1f2118");
#endif

    switch (ctx->pc) {
        case 0x1f2168u: goto label_1f2168;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f21b4u: goto label_1f21b4;
        default: break;
    }

    ctx->pc = 0x1f2118u;

    // 0x1f2118: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f211c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f211cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2120: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2124: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2128: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f2128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f212c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f2130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f2130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2134: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f2138: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f213c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2140: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2144: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f2148: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f214c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f2150: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f2154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2158: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f2158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f215c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f215cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2160: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F2160u;
    SET_GPR_U32(ctx, 31, 0x1F2168u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F2160u, 0x1F2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2168u;
label_1f2168:
    // 0x1f2168: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f2168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f216c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f2170: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2170u;
    SET_GPR_U32(ctx, 31, 0x1F2178u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2170u, 0x1F2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2178u;
label_1f2178:
    // 0x1f2178: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f2178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f217c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f2180: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2180u;
    SET_GPR_U32(ctx, 31, 0x1F2188u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2180u, 0x1F2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2188u;
label_1f2188:
    // 0x1f2188: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f218c: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1f2190: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1f2190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1f2194: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2198: 0x24050511  addiu       $a1, $zero, 0x511
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f219c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f219cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f21a0: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f21a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f21a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f21a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f21a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f21ac: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F21ACu;
    SET_GPR_U32(ctx, 31, 0x1F21B4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F21ACu, 0x1F21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21B4u;
label_1f21b4:
    // 0x1f21b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f21b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f21b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f21bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f21c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f21c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f21c4u;
}
