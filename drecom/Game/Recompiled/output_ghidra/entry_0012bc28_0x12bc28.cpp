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

// Function: entry_0012bc28
// Address: 0x12bc28 - 0x12bc58
void entry_0012bc28_0x12bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc28_0x12bc28");
#endif

    switch (ctx->pc) {
        case 0x12bc50u: goto label_12bc50;
        default: break;
    }

    ctx->pc = 0x12bc28u;

    // 0x12bc28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12bc2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12bc30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12bc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bc34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12bc3c: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12bc40: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bc44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12bc44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bc48: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12BC48u;
    SET_GPR_U32(ctx, 31, 0x12BC50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12BC48u, 0x12BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC50u;
label_12bc50:
    // 0x12bc50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12BC50u;
    {
        const bool branch_taken_0x12bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc50) {
            ctx->pc = 0x12BC80u;
            return;
        }
    }
    ctx->pc = 0x12BC58u;
}
