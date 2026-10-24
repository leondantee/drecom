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

// Function: entry_001bafbc
// Address: 0x1bafbc - 0x1baff4
void entry_001bafbc_0x1bafbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bafbc_0x1bafbc");
#endif

    switch (ctx->pc) {
        case 0x1bafecu: goto label_1bafec;
        default: break;
    }

    ctx->pc = 0x1bafbcu;

    // 0x1bafbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bafc0: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1bafc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BAFC4u;
    {
        const bool branch_taken_0x1bafc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafc4) {
            ctx->pc = 0x1BAFF4u;
            return;
        }
    }
    ctx->pc = 0x1BAFCCu;
    // 0x1bafcc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bafccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bafd0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bafd4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bafd8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1bafd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1bafdc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bafe0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bafe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bafe4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BAFE4u;
    SET_GPR_U32(ctx, 31, 0x1BAFECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BAFE4u, 0x1BAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFECu;
label_1bafec:
    // 0x1bafec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BAFECu;
    {
        const bool branch_taken_0x1bafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafec) {
            ctx->pc = 0x1BB014u;
            return;
        }
    }
    ctx->pc = 0x1BAFF4u;
}
