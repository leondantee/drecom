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

// Function: entry_001755f0
// Address: 0x1755f0 - 0x175624
void entry_001755f0_0x1755f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755f0_0x1755f0");
#endif

    ctx->pc = 0x1755f0u;

    // 0x1755f0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1755f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1755f4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1755f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1755f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1755f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1755fc: 0x0  nop
    ctx->pc = 0x1755fcu;
    // NOP
    // 0x175600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175604: 0x0  nop
    ctx->pc = 0x175604u;
    // NOP
    // 0x175608: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x175608u;
    {
        const bool branch_taken_0x175608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175608) {
            ctx->pc = 0x175624u;
            return;
        }
    }
    ctx->pc = 0x175610u;
    // 0x175610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175614: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175618: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x175618u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC90u, _value); } while (0);
    // 0x17561c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17561Cu;
    {
        const bool branch_taken_0x17561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17561c) {
            ctx->pc = 0x175638u;
            return;
        }
    }
    ctx->pc = 0x175624u;
}
