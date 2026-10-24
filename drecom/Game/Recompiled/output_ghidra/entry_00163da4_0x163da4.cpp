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

// Function: entry_00163da4
// Address: 0x163da4 - 0x163de4
void entry_00163da4_0x163da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163da4_0x163da4");
#endif

    ctx->pc = 0x163da4u;

    // 0x163da4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163da8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163dac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163db4: 0x0  nop
    ctx->pc = 0x163db4u;
    // NOP
    // 0x163db8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163dbc: 0x0  nop
    ctx->pc = 0x163dbcu;
    // NOP
    // 0x163dc0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163DC0u;
    {
        const bool branch_taken_0x163dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163dc0) {
            ctx->pc = 0x163DE4u;
            return;
        }
    }
    ctx->pc = 0x163DC8u;
    // 0x163dc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163dcc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163dd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dd8: 0x0  nop
    ctx->pc = 0x163dd8u;
    // NOP
    // 0x163ddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163de0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x163de4u;
}
