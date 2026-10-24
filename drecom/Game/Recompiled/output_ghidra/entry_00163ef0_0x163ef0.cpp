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

// Function: entry_00163ef0
// Address: 0x163ef0 - 0x163f30
void entry_00163ef0_0x163ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ef0_0x163ef0");
#endif

    ctx->pc = 0x163ef0u;

    // 0x163ef0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ef4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163ef8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f00: 0x0  nop
    ctx->pc = 0x163f00u;
    // NOP
    // 0x163f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f08: 0x0  nop
    ctx->pc = 0x163f08u;
    // NOP
    // 0x163f0c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163F0Cu;
    {
        const bool branch_taken_0x163f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f0c) {
            ctx->pc = 0x163F30u;
            return;
        }
    }
    ctx->pc = 0x163F14u;
    // 0x163f14: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163f1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f24: 0x0  nop
    ctx->pc = 0x163f24u;
    // NOP
    // 0x163f28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163f2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x163f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->pc = 0x163f30u;
}
