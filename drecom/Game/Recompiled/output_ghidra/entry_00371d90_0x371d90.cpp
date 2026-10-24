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

// Function: entry_00371d90
// Address: 0x371d90 - 0x371db0
void entry_00371d90_0x371d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371d90_0x371d90");
#endif

    ctx->pc = 0x371d90u;

    // 0x371d90: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371d94: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371d98: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371da0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371da4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x371da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371da8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x371da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371dac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x371dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x371db0u;
}
