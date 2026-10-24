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

// Function: entry_00338ae8
// Address: 0x338ae8 - 0x338b34
void entry_00338ae8_0x338ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338ae8_0x338ae8");
#endif

    switch (ctx->pc) {
        case 0x338af0u: goto label_338af0;
        case 0x338afcu: goto label_338afc;
        case 0x338b10u: goto label_338b10;
        case 0x338b28u: goto label_338b28;
        default: break;
    }

    ctx->pc = 0x338ae8u;

    // 0x338ae8: 0xc0ce268  jal         func_3389A0
    ctx->pc = 0x338AE8u;
    SET_GPR_U32(ctx, 31, 0x338AF0u);
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x338AE8u, 0x338AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AF0u;
label_338af0:
    // 0x338af0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x338af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338af4: 0xc0854d2  jal         func_215348
    ctx->pc = 0x338AF4u;
    SET_GPR_U32(ctx, 31, 0x338AFCu);
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x338AFCu;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338AFCu) { return; }
    ctx->pc = 0x338AFCu;
label_338afc:
    // 0x338afc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338b00: 0x244452d0  addiu       $a0, $v0, 0x52D0
    ctx->pc = 0x338b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    // 0x338b04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x338b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338b08: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338B08u;
    SET_GPR_U32(ctx, 31, 0x338B10u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338B08u, 0x338B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B10u;
label_338b10:
    // 0x338b10: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338B10u;
    {
        const bool branch_taken_0x338b10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b10) {
            ctx->pc = 0x338B34u;
            return;
        }
    }
    ctx->pc = 0x338B18u;
    // 0x338b18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338b1c: 0x24442230  addiu       $a0, $v0, 0x2230
    ctx->pc = 0x338b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8752));
    // 0x338b20: 0xc046760  jal         func_119D80
    ctx->pc = 0x338B20u;
    SET_GPR_U32(ctx, 31, 0x338B28u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338B28u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B28u) { return; }
    ctx->pc = 0x338B28u;
label_338b28:
    // 0x338b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338b2c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x338B2Cu;
    {
        const bool branch_taken_0x338b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338b2c) {
            ctx->pc = 0x338C40u;
            return;
        }
    }
    ctx->pc = 0x338B34u;
}
