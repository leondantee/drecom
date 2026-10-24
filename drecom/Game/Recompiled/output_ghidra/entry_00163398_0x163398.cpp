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

// Function: entry_00163398
// Address: 0x163398 - 0x1633d0
void entry_00163398_0x163398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163398_0x163398");
#endif

    ctx->pc = 0x163398u;

    // 0x163398: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16339c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x16339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633a8: 0x0  nop
    ctx->pc = 0x1633a8u;
    // NOP
    // 0x1633ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1633acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1633b0: 0x0  nop
    ctx->pc = 0x1633b0u;
    // NOP
    // 0x1633b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x1633D0u;
            return;
        }
    }
    ctx->pc = 0x1633BCu;
    // 0x1633bc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633c8: 0x0  nop
    ctx->pc = 0x1633c8u;
    // NOP
    // 0x1633cc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1633ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x1633d0u;
}
