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

// Function: entry_0012bbf8
// Address: 0x12bbf8 - 0x12bc28
void entry_0012bbf8_0x12bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbf8_0x12bbf8");
#endif

    switch (ctx->pc) {
        case 0x12bc20u: goto label_12bc20;
        default: break;
    }

    ctx->pc = 0x12bbf8u;

    // 0x12bbf8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12bbfc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12bc00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12bc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bc04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc08: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12bc0c: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12bc10: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bc14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bc18: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12BC18u;
    SET_GPR_U32(ctx, 31, 0x12BC20u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12BC18u, 0x12BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC20u;
label_12bc20:
    // 0x12bc20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12BC20u;
    {
        const bool branch_taken_0x12bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc20) {
            ctx->pc = 0x12BC80u;
            return;
        }
    }
    ctx->pc = 0x12BC28u;
}
