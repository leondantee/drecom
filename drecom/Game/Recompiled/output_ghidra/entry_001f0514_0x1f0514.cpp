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

// Function: entry_001f0514
// Address: 0x1f0514 - 0x1f05c4
void entry_001f0514_0x1f0514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0514_0x1f0514");
#endif

    switch (ctx->pc) {
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f05b4u: goto label_1f05b4;
        default: break;
    }

    ctx->pc = 0x1f0514u;

    // 0x1f0514: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f051c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f0520: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0524: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1f0524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f0528: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f052c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0530: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1f0530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1f0534: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1f0534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f0538: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1f0538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f053c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f0540: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f0540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f0544: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f054c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0554: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f0554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f0558: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0558u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f055c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F055Cu;
    SET_GPR_U32(ctx, 31, 0x1F0564u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F055Cu, 0x1F0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0564u;
label_1f0564:
    // 0x1f0564: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0564u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0568: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f056c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1f0570: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0570u;
    SET_GPR_U32(ctx, 31, 0x1F0578u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0570u, 0x1F0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0578u;
label_1f0578:
    // 0x1f0578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f057c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f057cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f0580: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1f0584: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0584u;
    SET_GPR_U32(ctx, 31, 0x1F058Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0584u, 0x1F058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F058Cu;
label_1f058c:
    // 0x1f058c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f058cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0590: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1f0594: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1f0594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1f0598: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f059c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05a0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f05a4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f05a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f05a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f05ac: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F05ACu;
    SET_GPR_U32(ctx, 31, 0x1F05B4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F05ACu, 0x1F05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05B4u;
label_1f05b4:
    // 0x1f05b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f05b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f05b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f05bc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f05c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f05c4u;
}
