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

// Function: entry_00131e94
// Address: 0x131e94 - 0x131ec4
void entry_00131e94_0x131e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131e94_0x131e94");
#endif

    switch (ctx->pc) {
        case 0x131ebcu: goto label_131ebc;
        default: break;
    }

    ctx->pc = 0x131e94u;

    // 0x131e94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131e98: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131e9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131ea0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131ea8: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131eac: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x131eb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131eb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131eb4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131EB4u;
    SET_GPR_U32(ctx, 31, 0x131EBCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131EB4u, 0x131EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131EBCu;
label_131ebc:
    // 0x131ebc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131EBCu;
    {
        const bool branch_taken_0x131ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ebc) {
            ctx->pc = 0x131F1Cu;
            return;
        }
    }
    ctx->pc = 0x131EC4u;
}
