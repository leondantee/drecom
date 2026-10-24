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

// Function: entry_0016419c
// Address: 0x16419c - 0x1641d8
void entry_0016419c_0x16419c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016419c_0x16419c");
#endif

    ctx->pc = 0x16419cu;

    // 0x16419c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1641a0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1641a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1641a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1641a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1641ac: 0x0  nop
    ctx->pc = 0x1641acu;
    // NOP
    // 0x1641b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1641b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1641b4: 0x0  nop
    ctx->pc = 0x1641b4u;
    // NOP
    // 0x1641b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1641B8u;
    {
        const bool branch_taken_0x1641b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1641b8) {
            ctx->pc = 0x1641D8u;
            return;
        }
    }
    ctx->pc = 0x1641C0u;
    // 0x1641c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1641c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1641c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1641c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1641c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1641cc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1641ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1641d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1641d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1641d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1641d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1641d8u;
}
