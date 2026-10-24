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

// Function: entry_0012ac20
// Address: 0x12ac20 - 0x12ac50
void entry_0012ac20_0x12ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ac20_0x12ac20");
#endif

    switch (ctx->pc) {
        case 0x12ac48u: goto label_12ac48;
        default: break;
    }

    ctx->pc = 0x12ac20u;

    // 0x12ac20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ac24: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ac28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12ac2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12ac30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12ac30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12ac34: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12ac38: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12ac3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12ac3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ac40: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12AC40u;
    SET_GPR_U32(ctx, 31, 0x12AC48u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12AC40u, 0x12AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC48u;
label_12ac48:
    // 0x12ac48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12AC48u;
    {
        const bool branch_taken_0x12ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac48) {
            ctx->pc = 0x12ACD8u;
            return;
        }
    }
    ctx->pc = 0x12AC50u;
}
