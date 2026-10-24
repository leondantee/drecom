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

// Function: entry_001f2a3c
// Address: 0x1f2a3c - 0x1f2a94
void entry_001f2a3c_0x1f2a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2a3c_0x1f2a3c");
#endif

    ctx->pc = 0x1f2a3cu;

    // 0x1f2a3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a40: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2a44: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2a48: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f2a4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2a50: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f2a54: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f2a5c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1f2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1f2a60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2a64: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a70: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f2a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a7c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f2a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a88: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f2a8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F2A8Cu;
    {
        const bool branch_taken_0x1f2a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a8c) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F2A94u;
}
