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

// Function: entry_0018f554
// Address: 0x18f554 - 0x18f598
void entry_0018f554_0x18f554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f554_0x18f554");
#endif

    ctx->pc = 0x18f554u;

    // 0x18f554: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x18f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f558: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x18f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x18f55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f560: 0x0  nop
    ctx->pc = 0x18f560u;
    // NOP
    // 0x18f564: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f568: 0x0  nop
    ctx->pc = 0x18f568u;
    // NOP
    // 0x18f56c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18F56Cu;
    {
        const bool branch_taken_0x18f56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f56c) {
            ctx->pc = 0x18F598u;
            return;
        }
    }
    ctx->pc = 0x18F574u;
    // 0x18f574: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x18f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f578: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x18f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x18f57c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18f580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f584: 0x0  nop
    ctx->pc = 0x18f584u;
    // NOP
    // 0x18f588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f58c: 0x0  nop
    ctx->pc = 0x18f58cu;
    // NOP
    // 0x18f590: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5A4u;
            return;
        }
    }
    ctx->pc = 0x18F598u;
}
