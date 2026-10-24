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

// Function: entry_00173344
// Address: 0x173344 - 0x173398
void entry_00173344_0x173344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173344_0x173344");
#endif

    ctx->pc = 0x173344u;

    // 0x173344: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x173344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173348: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x17334c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173354: 0x0  nop
    ctx->pc = 0x173354u;
    // NOP
    // 0x173358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17335c: 0x0  nop
    ctx->pc = 0x17335cu;
    // NOP
    // 0x173360: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x173360u;
    {
        const bool branch_taken_0x173360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173360) {
            ctx->pc = 0x1733C8u;
            return;
        }
    }
    ctx->pc = 0x173368u;
    // 0x173368: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x173368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17336c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17336cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173370: 0x0  nop
    ctx->pc = 0x173370u;
    // NOP
    // 0x173374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173378: 0x0  nop
    ctx->pc = 0x173378u;
    // NOP
    // 0x17337c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17337Cu;
    {
        const bool branch_taken_0x17337c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17337c) {
            ctx->pc = 0x173398u;
            return;
        }
    }
    ctx->pc = 0x173384u;
    // 0x173384: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x173384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173388: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x173388u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17338c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x173390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173390u;
    {
        const bool branch_taken_0x173390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173390) {
            ctx->pc = 0x1733A0u;
            return;
        }
    }
    ctx->pc = 0x173398u;
}
