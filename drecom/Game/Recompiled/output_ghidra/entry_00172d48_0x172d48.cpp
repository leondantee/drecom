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

// Function: entry_00172d48
// Address: 0x172d48 - 0x172d88
void entry_00172d48_0x172d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172d48_0x172d48");
#endif

    ctx->pc = 0x172d48u;

    // 0x172d48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d4c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x172d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172d50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d58: 0x0  nop
    ctx->pc = 0x172d58u;
    // NOP
    // 0x172d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d60: 0x0  nop
    ctx->pc = 0x172d60u;
    // NOP
    // 0x172d64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172D64u;
    {
        const bool branch_taken_0x172d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d64) {
            ctx->pc = 0x172D88u;
            return;
        }
    }
    ctx->pc = 0x172D6Cu;
    // 0x172d6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172d74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d7c: 0x0  nop
    ctx->pc = 0x172d7cu;
    // NOP
    // 0x172d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172d84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x172d88u;
}
