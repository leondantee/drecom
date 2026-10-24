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

// Function: entry_001d8ad0
// Address: 0x1d8ad0 - 0x1d8b08
void entry_001d8ad0_0x1d8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8ad0_0x1d8ad0");
#endif

    switch (ctx->pc) {
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8b04u: goto label_1d8b04;
        default: break;
    }

    ctx->pc = 0x1d8ad0u;

    // 0x1d8ad0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ad4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8ad8: 0x3c021234  lui         $v0, 0x1234
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4660 << 16));
    // 0x1d8adc: 0x34455678  ori         $a1, $v0, 0x5678
    ctx->pc = 0x1d8adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22136);
    // 0x1d8ae0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8ae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ae4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x1D8AE4u;
    SET_GPR_U32(ctx, 31, 0x1D8AECu);
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x1D8AECu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8AECu) { return; }
    ctx->pc = 0x1D8AECu;
label_1d8aec:
    // 0x1d8aec: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8AECu;
    {
        const bool branch_taken_0x1d8aec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d8aec) {
            ctx->pc = 0x1D8B10u;
            return;
        }
    }
    ctx->pc = 0x1D8AF4u;
    // 0x1d8af4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8af8: 0x24440bf0  addiu       $a0, $v0, 0xBF0
    ctx->pc = 0x1d8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3056));
    // 0x1d8afc: 0xc046760  jal         func_119D80
    ctx->pc = 0x1D8AFCu;
    SET_GPR_U32(ctx, 31, 0x1D8B04u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1D8B04u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8B04u) { return; }
    ctx->pc = 0x1D8B04u;
label_1d8b04:
    // 0x1d8b04: 0x0  nop
    ctx->pc = 0x1d8b04u;
    // NOP
    ctx->pc = 0x1d8b08u;
}
