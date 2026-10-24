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

// Function: entry_002d0730
// Address: 0x2d0730 - 0x2d0744
void entry_002d0730_0x2d0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0730_0x2d0730");
#endif

    ctx->pc = 0x2d0730u;

    // 0x2d0730: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d0730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d0734: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d0734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d0738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d073c: 0x0  nop
    ctx->pc = 0x2d073cu;
    // NOP
    // 0x2d0740: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d0740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->pc = 0x2d0744u;
}
