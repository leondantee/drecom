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

// Function: entry_0015bb5c
// Address: 0x15bb5c - 0x15bb90
void entry_0015bb5c_0x15bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb5c_0x15bb5c");
#endif

    switch (ctx->pc) {
        case 0x15bb88u: goto label_15bb88;
        default: break;
    }

    ctx->pc = 0x15bb5cu;

    // 0x15bb5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb60: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15bb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb6c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15bb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15bb70: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bb74: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15bb78: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15bb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bb7c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15bb7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15bb80: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BB80u;
    SET_GPR_U32(ctx, 31, 0x15BB88u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BB80u, 0x15BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB88u;
label_15bb88:
    // 0x15bb88: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15BB88u;
    {
        const bool branch_taken_0x15bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb88) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BB90u;
}
