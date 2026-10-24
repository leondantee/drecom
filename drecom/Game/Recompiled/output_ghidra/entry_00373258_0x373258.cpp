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

// Function: entry_00373258
// Address: 0x373258 - 0x3732b8
void entry_00373258_0x373258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373258_0x373258");
#endif

    switch (ctx->pc) {
        case 0x373268u: goto label_373268;
        case 0x37327cu: goto label_37327c;
        case 0x373290u: goto label_373290;
        case 0x3732b0u: goto label_3732b0;
        default: break;
    }

    ctx->pc = 0x373258u;

    // 0x373258: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37325c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x37325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373260: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x373260u;
    SET_GPR_U32(ctx, 31, 0x373268u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x373260u, 0x373268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373268u;
label_373268:
    // 0x373268: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37326c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37326cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373270: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x373270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373274: 0xc067808  jal         func_19E020
    ctx->pc = 0x373274u;
    SET_GPR_U32(ctx, 31, 0x37327Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x373274u, 0x37327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37327Cu;
label_37327c:
    // 0x37327c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x37327cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373280: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x373280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373284: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x373284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373288: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x373288u;
    SET_GPR_U32(ctx, 31, 0x373290u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x373288u, 0x373290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373290u;
label_373290:
    // 0x373290: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373294: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x373298: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37329c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x37329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3732a0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3732a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3732a4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3732a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3732a8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3732A8u;
    SET_GPR_U32(ctx, 31, 0x3732B0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3732A8u, 0x3732B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732B0u;
label_3732b0:
    // 0x3732b0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3732B0u;
    {
        const bool branch_taken_0x3732b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3732b0) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x3732B8u;
}
