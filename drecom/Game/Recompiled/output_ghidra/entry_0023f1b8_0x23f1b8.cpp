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

// Function: entry_0023f1b8
// Address: 0x23f1b8 - 0x23f1e4
void entry_0023f1b8_0x23f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f1b8_0x23f1b8");
#endif

    switch (ctx->pc) {
        case 0x23f1dcu: goto label_23f1dc;
        default: break;
    }

    ctx->pc = 0x23f1b8u;

    // 0x23f1b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f1bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f1c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1c8: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x23f1cc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f1d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f1d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f1d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F1D4u;
    SET_GPR_U32(ctx, 31, 0x23F1DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F1D4u, 0x23F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1DCu;
label_23f1dc:
    // 0x23f1dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23F1DCu;
    {
        const bool branch_taken_0x23f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1dc) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23F1E4u;
}
