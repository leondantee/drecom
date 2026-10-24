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

// Function: entry_00172a00
// Address: 0x172a00 - 0x172a40
void entry_00172a00_0x172a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a00_0x172a00");
#endif

    ctx->pc = 0x172a00u;

    // 0x172a00: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a04: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x172a08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a10: 0x0  nop
    ctx->pc = 0x172a10u;
    // NOP
    // 0x172a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a18: 0x0  nop
    ctx->pc = 0x172a18u;
    // NOP
    // 0x172a1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172A1Cu;
    {
        const bool branch_taken_0x172a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172a1c) {
            ctx->pc = 0x172A40u;
            return;
        }
    }
    ctx->pc = 0x172A24u;
    // 0x172a24: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a28: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x172a2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a34: 0x0  nop
    ctx->pc = 0x172a34u;
    // NOP
    // 0x172a38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172a3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x172a40u;
}
