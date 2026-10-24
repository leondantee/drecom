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

// Function: entry_001850dc
// Address: 0x1850dc - 0x185180
void entry_001850dc_0x1850dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001850dc_0x1850dc");
#endif

    switch (ctx->pc) {
        case 0x185130u: goto label_185130;
        case 0x18513cu: goto label_18513c;
        default: break;
    }

    ctx->pc = 0x1850dcu;

    // 0x1850dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1850e0: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x1850e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1850e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1850e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x1850e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850ec: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x1850ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1850f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1850f0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480280u, _value); } while (0);
    // 0x1850f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1850f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1850f8: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x1850f8u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1850fc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1850fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185104: 0x0  nop
    ctx->pc = 0x185104u;
    // NOP
    // 0x185108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18510c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185110: 0xe4200284  swc1        $f0, 0x284($at)
    ctx->pc = 0x185110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480284u, _value); } while (0); }
    // 0x185114: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x185114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18511c: 0x24450290  addiu       $a1, $v0, 0x290
    ctx->pc = 0x18511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x185120: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185124: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x185128: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x185128u;
    SET_GPR_U32(ctx, 31, 0x185130u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x185128u, 0x185130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185130u;
label_185130:
    // 0x185130: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x185130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185134: 0xc067588  jal         func_19D620
    ctx->pc = 0x185134u;
    SET_GPR_U32(ctx, 31, 0x18513Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x185134u, 0x18513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18513Cu;
label_18513c:
    // 0x18513c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185140: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x185140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185144: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x185144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x185148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18514c: 0x0  nop
    ctx->pc = 0x18514cu;
    // NOP
    // 0x185150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185154: 0x0  nop
    ctx->pc = 0x185154u;
    // NOP
    // 0x185158: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x185158u;
    {
        const bool branch_taken_0x185158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185158) {
            ctx->pc = 0x185180u;
            return;
        }
    }
    ctx->pc = 0x185160u;
    // 0x185160: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185164: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x185164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x185168: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185168u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x480290u));
    // 0x18516c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185170: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x185174: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185174u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480280u, _value); } while (0);
    // 0x185178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x185178u;
    {
        const bool branch_taken_0x185178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185178) {
            ctx->pc = 0x185198u;
            return;
        }
    }
    ctx->pc = 0x185180u;
}
