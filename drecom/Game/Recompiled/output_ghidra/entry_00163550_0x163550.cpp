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

// Function: entry_00163550
// Address: 0x163550 - 0x1635c0
void entry_00163550_0x163550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163550_0x163550");
#endif

    ctx->pc = 0x163550u;

    // 0x163550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163554: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163554u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163558: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16355c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16355cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163560: 0x0  nop
    ctx->pc = 0x163560u;
    // NOP
    // 0x163564: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x163564u;
    {
        const bool branch_taken_0x163564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163564) {
            ctx->pc = 0x1635D4u;
            return;
        }
    }
    ctx->pc = 0x16356Cu;
    // 0x16356c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163570: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163570u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163574: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16357c: 0x0  nop
    ctx->pc = 0x16357cu;
    // NOP
    // 0x163580: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x163580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163584: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16358c: 0x0  nop
    ctx->pc = 0x16358cu;
    // NOP
    // 0x163590: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x163590u;
    {
        const bool branch_taken_0x163590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163590) {
            ctx->pc = 0x1635C0u;
            return;
        }
    }
    ctx->pc = 0x163598u;
    // 0x163598: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16359c: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x16359cu;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1635a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1635a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1635a8: 0x0  nop
    ctx->pc = 0x1635a8u;
    // NOP
    // 0x1635ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1635acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1635b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1635b4: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x1635b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    // 0x1635b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1635B8u;
    {
        const bool branch_taken_0x1635b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1635b8) {
            ctx->pc = 0x163630u;
            return;
        }
    }
    ctx->pc = 0x1635C0u;
}
