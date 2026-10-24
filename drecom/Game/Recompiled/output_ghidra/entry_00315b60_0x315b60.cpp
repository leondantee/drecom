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

// Function: entry_00315b60
// Address: 0x315b60 - 0x315b88
void entry_00315b60_0x315b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315b60_0x315b60");
#endif

    ctx->pc = 0x315b60u;

    // 0x315b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x315b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x315b64: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x315b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315b68: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x315b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x315b6c: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x315b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x315b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b74: 0x0  nop
    ctx->pc = 0x315b74u;
    // NOP
    // 0x315b78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x315b7c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315b80: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x315b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x315b84: 0x0  nop
    ctx->pc = 0x315b84u;
    // NOP
    ctx->pc = 0x315b88u;
}
