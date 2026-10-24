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

// Function: entry_00172f18
// Address: 0x172f18 - 0x172f58
void entry_00172f18_0x172f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f18_0x172f18");
#endif

    ctx->pc = 0x172f18u;

    // 0x172f18: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f1c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172f20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f28: 0x0  nop
    ctx->pc = 0x172f28u;
    // NOP
    // 0x172f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172f30: 0x0  nop
    ctx->pc = 0x172f30u;
    // NOP
    // 0x172f34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172F34u;
    {
        const bool branch_taken_0x172f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172f34) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172F3Cu;
    // 0x172f3c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f40: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172f44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f4c: 0x0  nop
    ctx->pc = 0x172f4cu;
    // NOP
    // 0x172f50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172f54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x172f58u;
}
