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

// Function: entry_0027205c
// Address: 0x27205c - 0x272078
void entry_0027205c_0x27205c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027205c_0x27205c");
#endif

    ctx->pc = 0x27205cu;

    // 0x27205c: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x27205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272060: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x272064: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x272068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27206c: 0x0  nop
    ctx->pc = 0x27206cu;
    // NOP
    // 0x272070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x272070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272074: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x272074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->pc = 0x272078u;
}
