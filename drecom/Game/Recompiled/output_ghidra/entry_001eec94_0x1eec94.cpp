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

// Function: entry_001eec94
// Address: 0x1eec94 - 0x1eed1c
void entry_001eec94_0x1eec94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec94_0x1eec94");
#endif

    switch (ctx->pc) {
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eed18u: goto label_1eed18;
        default: break;
    }

    ctx->pc = 0x1eec94u;

    // 0x1eec94: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eec94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec98: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1eec9c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eeca0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1eeca0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eeca4: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EECA4u;
    {
        const bool branch_taken_0x1eeca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeca4) {
            ctx->pc = 0x1EED1Cu;
            return;
        }
    }
    ctx->pc = 0x1EECACu;
    // 0x1eecac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EECACu;
    SET_GPR_U32(ctx, 31, 0x1EECB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EECACu, 0x1EECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECB4u;
label_1eecb4:
    // 0x1eecb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eecb8: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1eecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1eecbc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1eecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1eecc0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1eecc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eecc4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eecc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eecc8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeccc: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x1eecccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eecd0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EECD0u;
    SET_GPR_U32(ctx, 31, 0x1EECD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EECD0u, 0x1EECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECD8u;
label_1eecd8:
    // 0x1eecd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1eecd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eecdc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1eecdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1eece0: 0x30e8000f  andi        $t0, $a3, 0xF
    ctx->pc = 0x1eece0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1eece4: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EECE4u;
    {
        const bool branch_taken_0x1eece4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eece4) {
            ctx->pc = 0x1EED1Cu;
            return;
        }
    }
    ctx->pc = 0x1EECECu;
    // 0x1eecec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eecf0: 0x3c04461c  lui         $a0, 0x461C
    ctx->pc = 0x1eecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17948 << 16));
    // 0x1eecf4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1eecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eecf8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1eecf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eecfc: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x1eed00: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eed00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eed04: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1eed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1eed08: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eed08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eed0c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eed0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eed10: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EED10u;
    SET_GPR_U32(ctx, 31, 0x1EED18u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EED10u, 0x1EED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED18u;
label_1eed18:
    // 0x1eed18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eed18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1eed1cu;
}
