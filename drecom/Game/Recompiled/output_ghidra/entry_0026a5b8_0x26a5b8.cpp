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

// Function: entry_0026a5b8
// Address: 0x26a5b8 - 0x26a5f8
void entry_0026a5b8_0x26a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a5b8_0x26a5b8");
#endif

    ctx->pc = 0x26a5b8u;

    // 0x26a5b8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x26a5c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5c8: 0x0  nop
    ctx->pc = 0x26a5c8u;
    // NOP
    // 0x26a5cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26a5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a5d0: 0x0  nop
    ctx->pc = 0x26a5d0u;
    // NOP
    // 0x26a5d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A5D4u;
    {
        const bool branch_taken_0x26a5d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a5d4) {
            ctx->pc = 0x26A5F8u;
            return;
        }
    }
    ctx->pc = 0x26A5DCu;
    // 0x26a5dc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x26a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x26a5e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
    // 0x26a5f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a5f4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x26a5f8u;
}
