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

// Function: entry_002715d8
// Address: 0x2715d8 - 0x271618
void entry_002715d8_0x2715d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002715d8_0x2715d8");
#endif

    ctx->pc = 0x2715d8u;

    // 0x2715d8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2715d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2715dc: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x2715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x2715e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2715e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2715e4: 0x0  nop
    ctx->pc = 0x2715e4u;
    // NOP
    // 0x2715e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2715e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2715ec: 0x0  nop
    ctx->pc = 0x2715ecu;
    // NOP
    // 0x2715f0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2715F0u;
    {
        const bool branch_taken_0x2715f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2715f0) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x2715F8u;
    // 0x2715f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2715f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2715fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271600: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x271600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27160c: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x27160cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x271610: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x271610u;
    {
        const bool branch_taken_0x271610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271610) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x271618u;
}
