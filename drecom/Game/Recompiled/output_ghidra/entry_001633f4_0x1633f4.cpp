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

// Function: entry_001633f4
// Address: 0x1633f4 - 0x163430
void entry_001633f4_0x1633f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633f4_0x1633f4");
#endif

    ctx->pc = 0x1633f4u;

    // 0x1633f4: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1633f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1633f8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1633fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163404: 0x0  nop
    ctx->pc = 0x163404u;
    // NOP
    // 0x163408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16340c: 0x0  nop
    ctx->pc = 0x16340cu;
    // NOP
    // 0x163410: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x163410u;
    {
        const bool branch_taken_0x163410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163410) {
            ctx->pc = 0x163430u;
            return;
        }
    }
    ctx->pc = 0x163418u;
    // 0x163418: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x16341c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163424: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16342c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x163430u;
}
