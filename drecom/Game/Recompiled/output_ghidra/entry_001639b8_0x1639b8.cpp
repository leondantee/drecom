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

// Function: entry_001639b8
// Address: 0x1639b8 - 0x163a0c
void entry_001639b8_0x1639b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001639b8_0x1639b8");
#endif

    ctx->pc = 0x1639b8u;

    // 0x1639b8: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1639b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1639bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1639c0: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x1639c0u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1639c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1639c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1639c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1639c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639cc: 0x0  nop
    ctx->pc = 0x1639ccu;
    // NOP
    // 0x1639d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1639d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1639d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1639d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1639d8: 0x0  nop
    ctx->pc = 0x1639d8u;
    // NOP
    // 0x1639dc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1639DCu;
    {
        const bool branch_taken_0x1639dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1639dc) {
            ctx->pc = 0x163A0Cu;
            return;
        }
    }
    ctx->pc = 0x1639E4u;
    // 0x1639e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1639e8: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x1639e8u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1639ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1639f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1639f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639f4: 0x0  nop
    ctx->pc = 0x1639f4u;
    // NOP
    // 0x1639f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1639f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1639fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a00: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    // 0x163a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x163A04u;
    {
        const bool branch_taken_0x163a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a04) {
            ctx->pc = 0x163A18u;
            return;
        }
    }
    ctx->pc = 0x163A0Cu;
}
