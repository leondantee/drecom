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

// Function: entry_00187084
// Address: 0x187084 - 0x1870f4
void entry_00187084_0x187084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187084_0x187084");
#endif

    ctx->pc = 0x187084u;

    // 0x187084: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x187088: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x187088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x18708c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18708cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x187090: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187094: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x187094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x187098: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x187098u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480280u, _value); } while (0);
    // 0x18709c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1870a0: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x1870a0u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1870a4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1870a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1870a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1870ac: 0x0  nop
    ctx->pc = 0x1870acu;
    // NOP
    // 0x1870b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1870b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1870b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1870b8: 0xe4200284  swc1        $f0, 0x284($at)
    ctx->pc = 0x1870b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480284u, _value); } while (0); }
    // 0x1870bc: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x1870bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1870c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1870c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1870c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1870c8: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1870cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1870ccu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802C0u, _value); } while (0);
    // 0x1870d0: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1870d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1870d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1870d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1870dc: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1870e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1870e0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x1870e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1870e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1870e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1870ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1870f0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1870f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1870f4u;
}
