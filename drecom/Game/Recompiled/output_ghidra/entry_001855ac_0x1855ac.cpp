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

// Function: entry_001855ac
// Address: 0x1855ac - 0x1855c8
void entry_001855ac_0x1855ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001855ac_0x1855ac");
#endif

    ctx->pc = 0x1855acu;

    // 0x1855ac: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1855acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1855b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1855b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1855b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855bc: 0x0  nop
    ctx->pc = 0x1855bcu;
    // NOP
    // 0x1855c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1855c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1855c4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1855c8u;
}
