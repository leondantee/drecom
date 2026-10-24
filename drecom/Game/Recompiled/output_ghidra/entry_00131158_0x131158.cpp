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

// Function: entry_00131158
// Address: 0x131158 - 0x131188
void entry_00131158_0x131158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131158_0x131158");
#endif

    switch (ctx->pc) {
        case 0x131180u: goto label_131180;
        default: break;
    }

    ctx->pc = 0x131158u;

    // 0x131158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13115c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x13115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131160: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131164: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13116c: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x13116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131170: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x131174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131178: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131178u;
    SET_GPR_U32(ctx, 31, 0x131180u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131178u, 0x131180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131180u;
label_131180:
    // 0x131180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131180u;
    {
        const bool branch_taken_0x131180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131180) {
            ctx->pc = 0x1311B0u;
            return;
        }
    }
    ctx->pc = 0x131188u;
}
