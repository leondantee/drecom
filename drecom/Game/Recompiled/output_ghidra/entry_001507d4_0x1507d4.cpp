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

// Function: entry_001507d4
// Address: 0x1507d4 - 0x150810
void entry_001507d4_0x1507d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001507d4_0x1507d4");
#endif

    ctx->pc = 0x1507d4u;

    // 0x1507d4: 0x3c04c1a0  lui         $a0, 0xC1A0
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49568 << 16));
    // 0x1507d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1507d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507dc: 0x0  nop
    ctx->pc = 0x1507dcu;
    // NOP
    // 0x1507e0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1507e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1507e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1507e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507e8: 0x0  nop
    ctx->pc = 0x1507e8u;
    // NOP
    // 0x1507ec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1507ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1507f0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1507f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1507f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507f8: 0x0  nop
    ctx->pc = 0x1507f8u;
    // NOP
    // 0x1507fc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1507fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x150800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150808: 0x0  nop
    ctx->pc = 0x150808u;
    // NOP
    // 0x15080c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x15080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x150810u;
}
