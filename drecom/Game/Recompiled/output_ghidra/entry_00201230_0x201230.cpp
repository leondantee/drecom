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

// Function: entry_00201230
// Address: 0x201230 - 0x201294
void entry_00201230_0x201230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201230_0x201230");
#endif

    ctx->pc = 0x201230u;

    // 0x201230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201234: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x201238: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20123c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x201240: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x201240u;
    {
        const bool branch_taken_0x201240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201240) {
            ctx->pc = 0x201294u;
            return;
        }
    }
    ctx->pc = 0x201248u;
    // 0x201248: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20124c: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x20124cu;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201250: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x201254: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x201254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x201258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20125c: 0x0  nop
    ctx->pc = 0x20125cu;
    // NOP
    // 0x201260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x201260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201264: 0x0  nop
    ctx->pc = 0x201264u;
    // NOP
    // 0x201268: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x201268u;
    {
        const bool branch_taken_0x201268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201268) {
            ctx->pc = 0x201294u;
            return;
        }
    }
    ctx->pc = 0x201270u;
    // 0x201270: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201274: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x201274u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201278: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x201278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20127c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x201280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201284: 0x0  nop
    ctx->pc = 0x201284u;
    // NOP
    // 0x201288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x201288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20128c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20128cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201290: 0xe4209fa0  swc1        $f0, -0x6060($at)
    ctx->pc = 0x201290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x389FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FA0u, _value); } while (0); }
    ctx->pc = 0x201294u;
}
