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

// Function: entry_001635d4
// Address: 0x1635d4 - 0x163624
void entry_001635d4_0x1635d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001635d4_0x1635d4");
#endif

    ctx->pc = 0x1635d4u;

    // 0x1635d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1635d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1635d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1635d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1635dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1635e0: 0xc4204f30  lwc1        $f0, 0x4F30($at)
    ctx->pc = 0x1635e0u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1635e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1635e8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1635e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1635ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1635f0: 0x0  nop
    ctx->pc = 0x1635f0u;
    // NOP
    // 0x1635f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1635F4u;
    {
        const bool branch_taken_0x1635f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1635f4) {
            ctx->pc = 0x163624u;
            return;
        }
    }
    ctx->pc = 0x1635FCu;
    // 0x1635fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163600: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163600u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163604: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16360c: 0x0  nop
    ctx->pc = 0x16360cu;
    // NOP
    // 0x163610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163614: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163618: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x163618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    // 0x16361c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16361Cu;
    {
        const bool branch_taken_0x16361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16361c) {
            ctx->pc = 0x163630u;
            return;
        }
    }
    ctx->pc = 0x163624u;
}
