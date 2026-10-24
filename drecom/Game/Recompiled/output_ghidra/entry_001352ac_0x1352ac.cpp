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

// Function: entry_001352ac
// Address: 0x1352ac - 0x1352e4
void entry_001352ac_0x1352ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001352ac_0x1352ac");
#endif

    ctx->pc = 0x1352acu;

    // 0x1352ac: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1352acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352b0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1352b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x1352b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1352b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352bc: 0x0  nop
    ctx->pc = 0x1352bcu;
    // NOP
    // 0x1352c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1352c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1352c4: 0x0  nop
    ctx->pc = 0x1352c4u;
    // NOP
    // 0x1352c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1352C8u;
    {
        const bool branch_taken_0x1352c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1352c8) {
            ctx->pc = 0x1352E4u;
            return;
        }
    }
    ctx->pc = 0x1352D0u;
    // 0x1352d0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x1352d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1352d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1352d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1352dc: 0x0  nop
    ctx->pc = 0x1352dcu;
    // NOP
    // 0x1352e0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1352e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->pc = 0x1352e4u;
}
