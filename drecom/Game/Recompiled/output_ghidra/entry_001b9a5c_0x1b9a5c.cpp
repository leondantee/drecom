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

// Function: entry_001b9a5c
// Address: 0x1b9a5c - 0x1b9ab4
void entry_001b9a5c_0x1b9a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9a5c_0x1b9a5c");
#endif

    switch (ctx->pc) {
        case 0x1b9a6cu: goto label_1b9a6c;
        default: break;
    }

    ctx->pc = 0x1b9a5cu;

    // 0x1b9a5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a60: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b9a64: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1B9A64u;
    SET_GPR_U32(ctx, 31, 0x1B9A6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B9A64u, 0x1B9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A6Cu;
label_1b9a6c:
    // 0x1b9a6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a70: 0x8ca41b64  lw          $a0, 0x1B64($a1)
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
    // 0x1b9a74: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9AB4u;
            return;
        }
    }
    ctx->pc = 0x1B9A7Cu;
    // 0x1b9a7c: 0x3c0342a2  lui         $v1, 0x42A2
    ctx->pc = 0x1b9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17058 << 16));
    // 0x1b9a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9a84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a88: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1b9a8c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9a94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a98: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b9a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1b9a9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1b9aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9aa4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9aa8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1b9aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1b9aac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B9AACu;
    {
        const bool branch_taken_0x1b9aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9aac) {
            ctx->pc = 0x1B9AECu;
            return;
        }
    }
    ctx->pc = 0x1B9AB4u;
}
