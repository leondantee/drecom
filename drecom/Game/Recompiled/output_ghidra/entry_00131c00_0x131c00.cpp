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

// Function: entry_00131c00
// Address: 0x131c00 - 0x131c30
void entry_00131c00_0x131c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c00_0x131c00");
#endif

    switch (ctx->pc) {
        case 0x131c28u: goto label_131c28;
        default: break;
    }

    ctx->pc = 0x131c00u;

    // 0x131c00: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c14: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131c18: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131C28u;
    {
        const bool branch_taken_0x131c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c28) {
            ctx->pc = 0x131C88u;
            return;
        }
    }
    ctx->pc = 0x131C30u;
}
