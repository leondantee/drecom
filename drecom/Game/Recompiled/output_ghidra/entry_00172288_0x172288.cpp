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

// Function: entry_00172288
// Address: 0x172288 - 0x1722c8
void entry_00172288_0x172288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172288_0x172288");
#endif

    ctx->pc = 0x172288u;

    // 0x172288: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17228c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x17228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172298: 0x0  nop
    ctx->pc = 0x172298u;
    // NOP
    // 0x17229c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17229cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1722a0: 0x0  nop
    ctx->pc = 0x1722a0u;
    // NOP
    // 0x1722a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1722A4u;
    {
        const bool branch_taken_0x1722a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722a4) {
            ctx->pc = 0x1722C8u;
            return;
        }
    }
    ctx->pc = 0x1722ACu;
    // 0x1722ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1722acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1722b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1722b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1722b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1722b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722bc: 0x0  nop
    ctx->pc = 0x1722bcu;
    // NOP
    // 0x1722c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1722c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1722c4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1722c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x1722c8u;
}
