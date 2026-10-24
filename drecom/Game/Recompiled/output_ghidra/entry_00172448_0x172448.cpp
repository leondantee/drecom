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

// Function: entry_00172448
// Address: 0x172448 - 0x172488
void entry_00172448_0x172448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172448_0x172448");
#endif

    ctx->pc = 0x172448u;

    // 0x172448: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17244c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172458: 0x0  nop
    ctx->pc = 0x172458u;
    // NOP
    // 0x17245c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17245cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172460: 0x0  nop
    ctx->pc = 0x172460u;
    // NOP
    // 0x172464: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172464u;
    {
        const bool branch_taken_0x172464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172464) {
            ctx->pc = 0x172488u;
            return;
        }
    }
    ctx->pc = 0x17246Cu;
    // 0x17246c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172470: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172474: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17247c: 0x0  nop
    ctx->pc = 0x17247cu;
    // NOP
    // 0x172480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172484: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x172488u;
}
