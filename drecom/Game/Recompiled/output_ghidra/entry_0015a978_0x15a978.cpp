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

// Function: entry_0015a978
// Address: 0x15a978 - 0x15a9b8
void entry_0015a978_0x15a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a978_0x15a978");
#endif

    ctx->pc = 0x15a978u;

    // 0x15a978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a97c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x15a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x15a980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a988: 0x0  nop
    ctx->pc = 0x15a988u;
    // NOP
    // 0x15a98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a990: 0x0  nop
    ctx->pc = 0x15a990u;
    // NOP
    // 0x15a994: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15A994u;
    {
        const bool branch_taken_0x15a994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a994) {
            ctx->pc = 0x15A9B8u;
            return;
        }
    }
    ctx->pc = 0x15A99Cu;
    // 0x15a99c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x15a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x15a9a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a9a8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a9ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15a9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9C0u;
            return;
        }
    }
    ctx->pc = 0x15A9B8u;
}
