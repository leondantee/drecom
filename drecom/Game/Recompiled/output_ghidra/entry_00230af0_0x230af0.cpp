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

// Function: entry_00230af0
// Address: 0x230af0 - 0x230b10
void entry_00230af0_0x230af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230af0_0x230af0");
#endif

    ctx->pc = 0x230af0u;

    // 0x230af0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230af4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230af8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x230af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x230afc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x230afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x230b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230b04: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230b0c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    ctx->pc = 0x230b10u;
}
