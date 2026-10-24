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

// Function: entry_0037b8e4
// Address: 0x37b8e4 - 0x37b950
void entry_0037b8e4_0x37b8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b8e4_0x37b8e4");
#endif

    ctx->pc = 0x37b8e4u;

    // 0x37b8e4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8e8: 0x8c230bb0  lw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b8ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b8f0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8f4: 0xac230bb0  sw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0BB0u, _value); } while (0);
    // 0x37b8f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8fc: 0x8c230bb0  lw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b904: 0x0  nop
    ctx->pc = 0x37b904u;
    // NOP
    // 0x37b908: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b90c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x37b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x37b910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b914: 0x0  nop
    ctx->pc = 0x37b914u;
    // NOP
    // 0x37b918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37b918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b91c: 0x0  nop
    ctx->pc = 0x37b91cu;
    // NOP
    // 0x37b920: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x37B920u;
    {
        const bool branch_taken_0x37b920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b920) {
            ctx->pc = 0x37B950u;
            return;
        }
    }
    ctx->pc = 0x37B928u;
    // 0x37b928: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b92c: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b930: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b934: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37b934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b938: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b93c: 0xac230590  sw          $v1, 0x590($at)
    ctx->pc = 0x37b93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x37b940: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b944: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37b944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b948: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b94c: 0xac230598  sw          $v1, 0x598($at)
    ctx->pc = 0x37b94cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
    ctx->pc = 0x37b950u;
}
