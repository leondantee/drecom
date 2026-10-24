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

// Function: entry_001859b0
// Address: 0x1859b0 - 0x185a54
void entry_001859b0_0x1859b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001859b0_0x1859b0");
#endif

    switch (ctx->pc) {
        case 0x1859ccu: goto label_1859cc;
        case 0x1859d8u: goto label_1859d8;
        default: break;
    }

    ctx->pc = 0x1859b0u;

    // 0x1859b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1859b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1859b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1859b8: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x1859bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1859c0: 0x244602d0  addiu       $a2, $v0, 0x2D0
    ctx->pc = 0x1859c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1859c4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1859C4u;
    SET_GPR_U32(ctx, 31, 0x1859CCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1859C4u, 0x1859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859CCu;
label_1859cc:
    // 0x1859cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1859d0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1859D0u;
    SET_GPR_U32(ctx, 31, 0x1859D8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1859D0u, 0x1859D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859D8u;
label_1859d8:
    // 0x1859d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1859d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1859dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1859dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1859e0: 0x90230345  lbu         $v1, 0x345($at)
    ctx->pc = 0x1859e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480345u));
    // 0x1859e4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1859E4u;
    {
        const bool branch_taken_0x1859e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859e4) {
            ctx->pc = 0x185A64u;
            return;
        }
    }
    ctx->pc = 0x1859ECu;
    // 0x1859ec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1859ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1859f0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1859f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1859f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1859f8: 0x0  nop
    ctx->pc = 0x1859f8u;
    // NOP
    // 0x1859fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1859fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185a00: 0x0  nop
    ctx->pc = 0x185a00u;
    // NOP
    // 0x185a04: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x185A04u;
    {
        const bool branch_taken_0x185a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185a04) {
            ctx->pc = 0x185A54u;
            return;
        }
    }
    ctx->pc = 0x185A0Cu;
    // 0x185a0c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a10: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a14: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a14u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802D0u));
    // 0x185a18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a1c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x185a20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a24: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185a28: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a28u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802E0u));
    // 0x185a2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a30: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a34u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x185a38: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a3c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185a40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a44: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185a48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a48u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802E0u, _value); } while (0);
    // 0x185a4c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185A4Cu;
    {
        const bool branch_taken_0x185a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a4c) {
            ctx->pc = 0x185AD0u;
            return;
        }
    }
    ctx->pc = 0x185A54u;
}
