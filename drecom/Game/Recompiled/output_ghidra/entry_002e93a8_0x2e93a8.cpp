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

// Function: entry_002e93a8
// Address: 0x2e93a8 - 0x2e93d0
void entry_002e93a8_0x2e93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e93a8_0x2e93a8");
#endif

    ctx->pc = 0x2e93a8u;

    // 0x2e93a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e93a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e93ac: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e93acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e93b0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2e93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2e93b4: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2e93b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2e93b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e93b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93bc: 0x0  nop
    ctx->pc = 0x2e93bcu;
    // NOP
    // 0x2e93c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e93c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e93c4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e93c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e93c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e93c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e93cc: 0x0  nop
    ctx->pc = 0x2e93ccu;
    // NOP
    ctx->pc = 0x2e93d0u;
}
