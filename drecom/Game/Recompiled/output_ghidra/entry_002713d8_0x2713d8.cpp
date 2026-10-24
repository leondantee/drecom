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

// Function: entry_002713d8
// Address: 0x2713d8 - 0x271408
void entry_002713d8_0x2713d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002713d8_0x2713d8");
#endif

    ctx->pc = 0x2713d8u;

    // 0x2713d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2713d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2713dc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2713dcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2713e0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2713e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2713e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2713e8: 0x0  nop
    ctx->pc = 0x2713e8u;
    // NOP
    // 0x2713ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2713ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713f0: 0x0  nop
    ctx->pc = 0x2713f0u;
    // NOP
    // 0x2713f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2713F4u;
    {
        const bool branch_taken_0x2713f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2713f4) {
            ctx->pc = 0x271408u;
            return;
        }
    }
    ctx->pc = 0x2713FCu;
    // 0x2713fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2713fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271404: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x271404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    ctx->pc = 0x271408u;
}
