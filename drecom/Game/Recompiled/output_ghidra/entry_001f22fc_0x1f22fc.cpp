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

// Function: entry_001f22fc
// Address: 0x1f22fc - 0x1f239c
void entry_001f22fc_0x1f22fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f22fc_0x1f22fc");
#endif

    switch (ctx->pc) {
        case 0x1f234cu: goto label_1f234c;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f2390u: goto label_1f2390;
        default: break;
    }

    ctx->pc = 0x1f22fcu;

    // 0x1f22fc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f22fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2304: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2308: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f230c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2310: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f2310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f2314: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2318: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f231c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f2320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f2320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2328: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f232c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2330: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f2334: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f2338: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2338u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f233c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f2340: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f2340u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2344: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F2344u;
    SET_GPR_U32(ctx, 31, 0x1F234Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F2344u, 0x1F234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F234Cu;
label_1f234c:
    // 0x1f234c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f2350: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f2350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f2354: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2354u;
    SET_GPR_U32(ctx, 31, 0x1F235Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2354u, 0x1F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F235Cu;
label_1f235c:
    // 0x1f235c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f235cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f2360: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f2360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f2364: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2364u;
    SET_GPR_U32(ctx, 31, 0x1F236Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2364u, 0x1F236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F236Cu;
label_1f236c:
    // 0x1f236c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2370: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f2374: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f2378: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f237c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f2380: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f2384: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2388: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F2388u;
    SET_GPR_U32(ctx, 31, 0x1F2390u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F2388u, 0x1F2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2390u;
label_1f2390:
    // 0x1f2390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2394: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2398: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1f2398u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f239cu;
}
