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

// Function: entry_00163430
// Address: 0x163430 - 0x163468
void entry_00163430_0x163430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163430_0x163430");
#endif

    ctx->pc = 0x163430u;

    // 0x163430: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163434: 0x3c02bec9  lui         $v0, 0xBEC9
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48841 << 16));
    // 0x163438: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16343c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163440: 0x0  nop
    ctx->pc = 0x163440u;
    // NOP
    // 0x163444: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163448: 0x0  nop
    ctx->pc = 0x163448u;
    // NOP
    // 0x16344c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16344Cu;
    {
        const bool branch_taken_0x16344c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16344c) {
            ctx->pc = 0x163468u;
            return;
        }
    }
    ctx->pc = 0x163454u;
    // 0x163454: 0x3c02bec9  lui         $v0, 0xBEC9
    ctx->pc = 0x163454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48841 << 16));
    // 0x163458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16345c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16345cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163460: 0x0  nop
    ctx->pc = 0x163460u;
    // NOP
    // 0x163464: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x163468u;
}
