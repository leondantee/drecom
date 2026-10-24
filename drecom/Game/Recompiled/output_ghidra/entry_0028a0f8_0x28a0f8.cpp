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

// Function: entry_0028a0f8
// Address: 0x28a0f8 - 0x28a148
void entry_0028a0f8_0x28a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a0f8_0x28a0f8");
#endif

    switch (ctx->pc) {
        case 0x28a104u: goto label_28a104;
        case 0x28a120u: goto label_28a120;
        case 0x28a130u: goto label_28a130;
        default: break;
    }

    ctx->pc = 0x28a0f8u;

    // 0x28a0f8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x28a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a0fc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28A0FCu;
    SET_GPR_U32(ctx, 31, 0x28A104u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28A0FCu, 0x28A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A104u;
label_28a104:
    // 0x28a104: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a104u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a108: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28a108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28a10c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28a10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28a110: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28a110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a114: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28a118: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x28A118u;
    SET_GPR_U32(ctx, 31, 0x28A120u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28A118u, 0x28A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A120u;
label_28a120:
    // 0x28a120: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a124: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28a124u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a128: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x28A128u;
    SET_GPR_U32(ctx, 31, 0x28A130u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x28A128u, 0x28A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A130u;
label_28a130:
    // 0x28a130: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28a130u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a134: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x28a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x28a138: 0x7d4021  addu        $t0, $v1, $sp
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28a13c: 0xad1600d0  sw          $s6, 0xD0($t0)
    ctx->pc = 0x28a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 208), GPR_U32(ctx, 22));
    // 0x28a140: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a144: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a144u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28a148u;
}
