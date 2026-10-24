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

// Function: entry_00304114
// Address: 0x304114 - 0x304130
void entry_00304114_0x304114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304114_0x304114");
#endif

    ctx->pc = 0x304114u;

    // 0x304114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304118: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x304118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30411c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x30411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x304120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304124: 0x0  nop
    ctx->pc = 0x304124u;
    // NOP
    // 0x304128: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30412c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x30412cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x304130u;
}
