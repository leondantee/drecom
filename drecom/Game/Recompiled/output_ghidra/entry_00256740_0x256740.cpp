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

// Function: entry_00256740
// Address: 0x256740 - 0x256760
void entry_00256740_0x256740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256740_0x256740");
#endif

    ctx->pc = 0x256740u;

    // 0x256740: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x256744: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x256744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x256748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25674c: 0x0  nop
    ctx->pc = 0x25674cu;
    // NOP
    // 0x256750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x256750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x256754: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256758: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x256758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x25675c: 0x0  nop
    ctx->pc = 0x25675cu;
    // NOP
    ctx->pc = 0x256760u;
}
