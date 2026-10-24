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

// Function: entry_001fd8d8
// Address: 0x1fd8d8 - 0x1fd8f4
void entry_001fd8d8_0x1fd8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd8d8_0x1fd8d8");
#endif

    ctx->pc = 0x1fd8d8u;

    // 0x1fd8d8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8dc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1fd8e0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fd8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fd8e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd8e8: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd8f0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1fd8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    ctx->pc = 0x1fd8f4u;
}
