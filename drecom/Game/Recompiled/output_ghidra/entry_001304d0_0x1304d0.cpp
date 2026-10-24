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

// Function: entry_001304d0
// Address: 0x1304d0 - 0x13058c
void entry_001304d0_0x1304d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001304d0_0x1304d0");
#endif

    switch (ctx->pc) {
        case 0x1304f4u: goto label_1304f4;
        case 0x13050cu: goto label_13050c;
        case 0x130558u: goto label_130558;
        case 0x130588u: goto label_130588;
        default: break;
    }

    ctx->pc = 0x1304d0u;

    // 0x1304d0: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1304d4: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x1304d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1304dc: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x1304dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1304e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1304e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1304e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1304e8: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
    // 0x1304ec: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1304ECu;
    SET_GPR_U32(ctx, 31, 0x1304F4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1304ECu, 0x1304F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F4u;
label_1304f4:
    // 0x1304f4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1304F4u;
    {
        const bool branch_taken_0x1304f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304f4) {
            ctx->pc = 0x13058Cu;
            return;
        }
    }
    ctx->pc = 0x1304FCu;
    // 0x1304fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x130500: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x130500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x130504: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x130504u;
    SET_GPR_U32(ctx, 31, 0x13050Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130504u, 0x13050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13050Cu;
label_13050c:
    // 0x13050c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13050cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130510: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130514: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x130514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130518: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x130518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x13051c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x130520: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x130524: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x130524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130528: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x130528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13052c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130530: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x130530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x130534: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130538: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x130538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13053c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x130540: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x130540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130544: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130548: 0x24670580  addiu       $a3, $v1, 0x580
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x13054c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x13054cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130550: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x130550u;
    SET_GPR_U32(ctx, 31, 0x130558u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x130550u, 0x130558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13055c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x130560: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x130564: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x130564u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x130568: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13056c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x13056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x130570: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x130574: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x130578: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x130578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13057c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13057cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130580: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x130580u;
    SET_GPR_U32(ctx, 31, 0x130588u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x130580u, 0x130588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130588u;
label_130588:
    // 0x130588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x130588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13058cu;
}
