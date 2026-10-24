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

// Function: entry_002868f8
// Address: 0x2868f8 - 0x286948
void entry_002868f8_0x2868f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002868f8_0x2868f8");
#endif

    switch (ctx->pc) {
        case 0x286904u: goto label_286904;
        case 0x286920u: goto label_286920;
        case 0x28692cu: goto label_28692c;
        default: break;
    }

    ctx->pc = 0x2868f8u;

    // 0x2868f8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2868f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2868fc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2868FCu;
    SET_GPR_U32(ctx, 31, 0x286904u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2868FCu, 0x286904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286904u;
label_286904:
    // 0x286904: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286904u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286908: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x286908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28690c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x286910: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x286910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286914: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x286914u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286918: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x286918u;
    SET_GPR_U32(ctx, 31, 0x286920u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x286918u, 0x286920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286920u;
label_286920:
    // 0x286920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x286920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286924: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x286924u;
    SET_GPR_U32(ctx, 31, 0x28692Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x286924u, 0x28692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28692Cu;
label_28692c:
    // 0x28692c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28692cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286930: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x286930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x286934: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x286934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x286938: 0xad0300d0  sw          $v1, 0xD0($t0)
    ctx->pc = 0x286938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 208), GPR_U32(ctx, 3));
    // 0x28693c: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x28693cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x286940: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x286940u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286944: 0x0  nop
    ctx->pc = 0x286944u;
    // NOP
    ctx->pc = 0x286948u;
}
