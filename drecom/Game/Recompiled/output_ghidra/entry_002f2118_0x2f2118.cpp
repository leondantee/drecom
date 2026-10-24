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

// Function: entry_002f2118
// Address: 0x2f2118 - 0x2f2140
void entry_002f2118_0x2f2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2118_0x2f2118");
#endif

    ctx->pc = 0x2f2118u;

    // 0x2f2118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f211c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2120: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2f2124: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f2128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f212c: 0x0  nop
    ctx->pc = 0x2f212cu;
    // NOP
    // 0x2f2130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f2130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f2134: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f2134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f2138: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2f2138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2f213c: 0x0  nop
    ctx->pc = 0x2f213cu;
    // NOP
    ctx->pc = 0x2f2140u;
}
