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

// Function: entry_001b6fb8
// Address: 0x1b6fb8 - 0x1b7018
void entry_001b6fb8_0x1b6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6fb8_0x1b6fb8");
#endif

    switch (ctx->pc) {
        case 0x1b6fccu: goto label_1b6fcc;
        default: break;
    }

    ctx->pc = 0x1b6fb8u;

    // 0x1b6fb8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6fbc: 0x24c70180  addiu       $a3, $a2, 0x180
    ctx->pc = 0x1b6fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1b6fc0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b6fc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b6fc4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1B6FC4u;
    SET_GPR_U32(ctx, 31, 0x1B6FCCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B6FC4u, 0x1B6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FCCu;
label_1b6fcc:
    // 0x1b6fcc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b6fccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6fd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6fd4: 0x8c821b64  lw          $v0, 0x1B64($a0)
    ctx->pc = 0x1b6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x1b6fd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B6FD8u;
    {
        const bool branch_taken_0x1b6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fd8) {
            ctx->pc = 0x1B7018u;
            return;
        }
    }
    ctx->pc = 0x1B6FE0u;
    // 0x1b6fe0: 0x3c0542a2  lui         $a1, 0x42A2
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17058 << 16));
    // 0x1b6fe4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6fe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6fe8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6fec: 0xe4c01284  swc1        $f0, 0x1284($a2)
    ctx->pc = 0x1b6fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4740), bits); }
    // 0x1b6ff0: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x1b6ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x1b6ff4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1b6ff4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6ff8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ffc: 0xe5001280  swc1        $f0, 0x1280($t0)
    ctx->pc = 0x1b6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4736), bits); }
    // 0x1b7000: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1b7004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b700c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1b700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1b7010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B7010u;
    {
        const bool branch_taken_0x1b7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7010) {
            ctx->pc = 0x1B7050u;
            return;
        }
    }
    ctx->pc = 0x1B7018u;
}
