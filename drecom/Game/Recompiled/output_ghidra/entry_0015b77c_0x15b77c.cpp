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

// Function: entry_0015b77c
// Address: 0x15b77c - 0x15b7c0
void entry_0015b77c_0x15b77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b77c_0x15b77c");
#endif

    switch (ctx->pc) {
        case 0x15b784u: goto label_15b784;
        case 0x15b7b8u: goto label_15b7b8;
        default: break;
    }

    ctx->pc = 0x15b77cu;

    // 0x15b77c: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15B77Cu;
    SET_GPR_U32(ctx, 31, 0x15B784u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15B77Cu, 0x15B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B784u;
label_15b784:
    // 0x15b784: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15B784u;
    {
        const bool branch_taken_0x15b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b784) {
            ctx->pc = 0x15B7C0u;
            return;
        }
    }
    ctx->pc = 0x15B78Cu;
    // 0x15b78c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b790: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b794: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b798: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b79c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b79cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b7a0: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b7a4: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b7a8: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b7ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b7acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b7b0: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B7B0u;
    SET_GPR_U32(ctx, 31, 0x15B7B8u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B7B0u, 0x15B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7B8u;
label_15b7b8:
    // 0x15b7b8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x15B7B8u;
    {
        const bool branch_taken_0x15b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7b8) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15B7C0u;
}
