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

// Function: entry_0016e550
// Address: 0x16e550 - 0x16e5a0
void entry_0016e550_0x16e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e550_0x16e550");
#endif

    ctx->pc = 0x16e550u;

    // 0x16e550: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x16e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e554: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e558: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e558u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e55c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e560: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e560u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e568: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e56c: 0x0  nop
    ctx->pc = 0x16e56cu;
    // NOP
    // 0x16e570: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E570u;
    {
        const bool branch_taken_0x16e570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e570) {
            ctx->pc = 0x16E5A0u;
            return;
        }
    }
    ctx->pc = 0x16E578u;
    // 0x16e578: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e57c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e580: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e580u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e588: 0x0  nop
    ctx->pc = 0x16e588u;
    // NOP
    // 0x16e58c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E58Cu;
    {
        const bool branch_taken_0x16e58c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e58c) {
            ctx->pc = 0x16E5A0u;
            return;
        }
    }
    ctx->pc = 0x16E594u;
    // 0x16e594: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e598: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e59c: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
    ctx->pc = 0x16e5a0u;
}
