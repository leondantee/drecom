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

// Function: entry_00338bcc
// Address: 0x338bcc - 0x338c10
void entry_00338bcc_0x338bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338bcc_0x338bcc");
#endif

    switch (ctx->pc) {
        case 0x338be8u: goto label_338be8;
        case 0x338c04u: goto label_338c04;
        default: break;
    }

    ctx->pc = 0x338bccu;

    // 0x338bcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338bd0: 0x8c229a18  lw          $v0, -0x65E8($at)
    ctx->pc = 0x338bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A18u));
    // 0x338bd4: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x338BD4u;
    {
        const bool branch_taken_0x338bd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338bd4) {
            ctx->pc = 0x338C18u;
            return;
        }
    }
    ctx->pc = 0x338BDCu;
    // 0x338bdc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x338bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x338be0: 0xc084a88  jal         func_212A20
    ctx->pc = 0x338BE0u;
    SET_GPR_U32(ctx, 31, 0x338BE8u);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x338BE8u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338BE8u) { return; }
    ctx->pc = 0x338BE8u;
label_338be8:
    // 0x338be8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x338be8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338bec: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338BECu;
    {
        const bool branch_taken_0x338bec = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338bec) {
            ctx->pc = 0x338C10u;
            return;
        }
    }
    ctx->pc = 0x338BF4u;
    // 0x338bf4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338bf8: 0x244422e0  addiu       $a0, $v0, 0x22E0
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8928));
    // 0x338bfc: 0xc046760  jal         func_119D80
    ctx->pc = 0x338BFCu;
    SET_GPR_U32(ctx, 31, 0x338C04u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338C04u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338C04u) { return; }
    ctx->pc = 0x338C04u;
label_338c04:
    // 0x338c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338c08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x338C08u;
    {
        const bool branch_taken_0x338c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338c08) {
            ctx->pc = 0x338C40u;
            return;
        }
    }
    ctx->pc = 0x338C10u;
}
