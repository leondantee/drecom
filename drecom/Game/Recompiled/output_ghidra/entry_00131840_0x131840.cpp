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

// Function: entry_00131840
// Address: 0x131840 - 0x131870
void entry_00131840_0x131840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131840_0x131840");
#endif

    switch (ctx->pc) {
        case 0x131868u: goto label_131868;
        default: break;
    }

    ctx->pc = 0x131840u;

    // 0x131840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131844: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131848: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13184c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131850: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131854: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131858: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13185c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13185cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131860: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131860u;
    SET_GPR_U32(ctx, 31, 0x131868u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131860u, 0x131868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131868u;
label_131868:
    // 0x131868: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131868u;
    {
        const bool branch_taken_0x131868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131868) {
            ctx->pc = 0x131898u;
            return;
        }
    }
    ctx->pc = 0x131870u;
}
