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

// Function: entry_00201294
// Address: 0x201294 - 0x2012f4
void entry_00201294_0x201294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201294_0x201294");
#endif

    ctx->pc = 0x201294u;

    // 0x201294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201298: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x20129c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2012a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2012a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2012A4u;
    {
        const bool branch_taken_0x2012a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012a4) {
            ctx->pc = 0x2012F4u;
            return;
        }
    }
    ctx->pc = 0x2012ACu;
    // 0x2012ac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012b0: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x2012b0u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2012b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2012b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2012b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2012bc: 0x0  nop
    ctx->pc = 0x2012bcu;
    // NOP
    // 0x2012c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2012c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2012c4: 0x0  nop
    ctx->pc = 0x2012c4u;
    // NOP
    // 0x2012c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2012C8u;
    {
        const bool branch_taken_0x2012c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2012c8) {
            ctx->pc = 0x2012F4u;
            return;
        }
    }
    ctx->pc = 0x2012D0u;
    // 0x2012d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012d4: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x2012d4u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2012d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2012dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2012dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2012e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2012e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2012e4: 0x0  nop
    ctx->pc = 0x2012e4u;
    // NOP
    // 0x2012e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2012e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2012ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012f0: 0xe4209fa0  swc1        $f0, -0x6060($at)
    ctx->pc = 0x2012f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x389FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FA0u, _value); } while (0); }
    ctx->pc = 0x2012f4u;
}
