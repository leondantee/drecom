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

// Function: entry_002943d8
// Address: 0x2943d8 - 0x294400
void entry_002943d8_0x2943d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002943d8_0x2943d8");
#endif

    ctx->pc = 0x2943d8u;

    // 0x2943d8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2943d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2943dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2943dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2943e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943e4: 0x0  nop
    ctx->pc = 0x2943e4u;
    // NOP
    // 0x2943e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2943e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2943ec: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2943ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2943f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2943f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2943f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943f8: 0x0  nop
    ctx->pc = 0x2943f8u;
    // NOP
    // 0x2943fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x294400u;
}
