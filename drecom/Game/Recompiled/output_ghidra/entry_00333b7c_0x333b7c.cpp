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

// Function: entry_00333b7c
// Address: 0x333b7c - 0x333bc0
void entry_00333b7c_0x333b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333b7c_0x333b7c");
#endif

    switch (ctx->pc) {
        case 0x333b88u: goto label_333b88;
        case 0x333b9cu: goto label_333b9c;
        case 0x333ba8u: goto label_333ba8;
        default: break;
    }

    ctx->pc = 0x333b7cu;

    // 0x333b7c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x333b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x333b80: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x333B80u;
    SET_GPR_U32(ctx, 31, 0x333B88u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x333B80u, 0x333B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B88u;
label_333b88:
    // 0x333b88: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x333b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x333b8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x333b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x333b90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x333b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333b94: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x333B94u;
    SET_GPR_U32(ctx, 31, 0x333B9Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x333B94u, 0x333B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B9Cu;
label_333b9c:
    // 0x333b9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x333b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333ba0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x333BA0u;
    SET_GPR_U32(ctx, 31, 0x333BA8u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x333BA0u, 0x333BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BA8u;
label_333ba8:
    // 0x333ba8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x333ba8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333bac: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x333bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x333bb0: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x333bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x333bb4: 0xace800a0  sw          $t0, 0xA0($a3)
    ctx->pc = 0x333bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 8));
    // 0x333bb8: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x333bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333bbc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x333bbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    ctx->pc = 0x333bc0u;
}
