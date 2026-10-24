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

// Function: entry_00163b2c
// Address: 0x163b2c - 0x163b44
void entry_00163b2c_0x163b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b2c_0x163b2c");
#endif

    ctx->pc = 0x163b2cu;

    // 0x163b2c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x163b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b30: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b38: 0x0  nop
    ctx->pc = 0x163b38u;
    // NOP
    // 0x163b3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163b40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x163b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x163b44u;
}
