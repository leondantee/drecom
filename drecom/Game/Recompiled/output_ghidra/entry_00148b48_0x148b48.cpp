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

// Function: entry_00148b48
// Address: 0x148b48 - 0x148b9c
void entry_00148b48_0x148b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b48_0x148b48");
#endif

    switch (ctx->pc) {
        case 0x148b70u: goto label_148b70;
        default: break;
    }

    ctx->pc = 0x148b48u;

    // 0x148b48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b4c: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x148b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
    // 0x148b50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148b5c: 0x24060a98  addiu       $a2, $zero, 0xA98
    ctx->pc = 0x148b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2712));
    // 0x148b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148B68u;
    SET_GPR_U32(ctx, 31, 0x148B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148B68u, 0x148B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B70u;
label_148b70:
    // 0x148b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b74: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x148b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x148b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x148b80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x148b84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x148b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x148b88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148B88u;
    {
        const bool branch_taken_0x148b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148b88) {
            ctx->pc = 0x148B9Cu;
            return;
        }
    }
    ctx->pc = 0x148B90u;
    // 0x148b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b98: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x148b9cu;
}
