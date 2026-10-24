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

// Function: entry_001320f4
// Address: 0x1320f4 - 0x13213c
void entry_001320f4_0x1320f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001320f4_0x1320f4");
#endif

    ctx->pc = 0x1320f4u;

    // 0x1320f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320f8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1320f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1320fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132100: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132104: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132108: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x13210c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132110: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132118: 0x0  nop
    ctx->pc = 0x132118u;
    // NOP
    // 0x13211c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13211cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132120: 0x0  nop
    ctx->pc = 0x132120u;
    // NOP
    // 0x132124: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x132124u;
    {
        const bool branch_taken_0x132124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132124) {
            ctx->pc = 0x13213Cu;
            return;
        }
    }
    ctx->pc = 0x13212Cu;
    // 0x13212c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x132130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132134: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132138: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x132138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x13213cu;
}
