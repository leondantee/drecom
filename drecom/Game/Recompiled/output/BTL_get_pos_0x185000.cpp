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

// Function: BTL_get_pos
// Address: 0x185000 - 0x185288
void BTL_get_pos_0x185000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_get_pos_0x185000");
#endif

    switch (ctx->pc) {
        case 0x185048u: goto label_185048;
        case 0x185054u: goto label_185054;
        case 0x185130u: goto label_185130;
        case 0x18513cu: goto label_18513c;
        case 0x1851d4u: goto label_1851d4;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851fcu: goto label_1851fc;
        case 0x18520cu: goto label_18520c;
        case 0x18522cu: goto label_18522c;
        case 0x185240u: goto label_185240;
        case 0x185268u: goto label_185268;
        default: break;
    }

    ctx->pc = 0x185000u;

    // 0x185000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x185000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x185004: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x185004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x185008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18500c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x18500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x185010: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x185010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x185014: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x185014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x185018: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x185018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18501c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18501cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185020: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185024: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x185028: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x185028u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802A0u, _value); } while (0);
    // 0x18502c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185030: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185034: 0x244502b0  addiu       $a1, $v0, 0x2B0
    ctx->pc = 0x185034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x185038: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18503c: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x18503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x185040: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x185040u;
    SET_GPR_U32(ctx, 31, 0x185048u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x185040u, 0x185048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185048u;
label_185048:
    // 0x185048: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x185048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18504c: 0xc067588  jal         func_19D620
    ctx->pc = 0x18504Cu;
    SET_GPR_U32(ctx, 31, 0x185054u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x18504Cu, 0x185054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185054u;
label_185054:
    // 0x185054: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x185054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185058: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x185058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18505c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x18505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x185060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185064: 0x0  nop
    ctx->pc = 0x185064u;
    // NOP
    // 0x185068: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18506c: 0x0  nop
    ctx->pc = 0x18506cu;
    // NOP
    // 0x185070: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x185070u;
    {
        const bool branch_taken_0x185070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185070) {
            ctx->pc = 0x1850A4u;
            goto label_1850a4;
        }
    }
    ctx->pc = 0x185078u;
    // 0x185078: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x185078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18507c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x18507cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x185080: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x185084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x185084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x185088: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185088u;
    {
        const bool branch_taken_0x185088 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x185088) {
            ctx->pc = 0x1850A4u;
            goto label_1850a4;
        }
    }
    ctx->pc = 0x185090u;
    // 0x185090: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x185090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x185094: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x185094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x185098: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x185098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18509c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18509Cu;
    {
        const bool branch_taken_0x18509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18509c) {
            ctx->pc = 0x1850C4u;
            goto label_1850c4;
        }
    }
    ctx->pc = 0x1850A4u;
label_1850a4:
    // 0x1850a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850a8: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1850ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1850acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4802B0u));
    // 0x1850b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850b4: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x1850b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1850b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1850b8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802A0u, _value); } while (0);
    // 0x1850bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1850BCu;
    {
        const bool branch_taken_0x1850bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1850bc) {
            ctx->pc = 0x1850DCu;
            goto label_1850dc;
        }
    }
    ctx->pc = 0x1850C4u;
label_1850c4:
    // 0x1850c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850c8: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1850cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1850ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4802A0u));
    // 0x1850d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1850d4: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1850d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1850d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1850d8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802B0u, _value); } while (0);
label_1850dc:
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
            goto label_185180;
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
            goto label_185198;
        }
    }
    ctx->pc = 0x185180u;
label_185180:
    // 0x185180: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185184: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x185188: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185188u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x480280u));
    // 0x18518c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185190: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x185190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x185194: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185194u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480290u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480290u, _value); } while (0);
label_185198:
    // 0x185198: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18519c: 0x90230344  lbu         $v1, 0x344($at)
    ctx->pc = 0x18519cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480344u));
    // 0x1851a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1851a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1851a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1851a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1851a8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1851A8u;
    {
        const bool branch_taken_0x1851a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851a8) {
            ctx->pc = 0x185274u;
            goto label_185274;
        }
    }
    ctx->pc = 0x1851B0u;
    // 0x1851b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1851b4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1851b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1851b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1851bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1851bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1851c0: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1851c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1851c8: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x1851c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1851cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1851CCu;
    SET_GPR_U32(ctx, 31, 0x1851D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1851CCu, 0x1851D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851D4u;
label_1851d4:
    // 0x1851d4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1851d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1851d8: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x1851d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1851dc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1851DCu;
    SET_GPR_U32(ctx, 31, 0x1851E4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1851DCu, 0x1851E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851E4u;
label_1851e4:
    // 0x1851e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1851e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1851e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1851ec: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1851f0: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1851f4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1851F4u;
    SET_GPR_U32(ctx, 31, 0x1851FCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1851F4u, 0x1851FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851FCu;
label_1851fc:
    // 0x1851fc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1851fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185200: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x185200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185204: 0xc0455e6  jal         func_115798
    ctx->pc = 0x185204u;
    SET_GPR_U32(ctx, 31, 0x18520Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x185204u, 0x18520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185210: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x185214: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x185218: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x185218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18521c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185220: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x185220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185224: 0xc058fa4  jal         func_163E90
    ctx->pc = 0x185224u;
    SET_GPR_U32(ctx, 31, 0x18522Cu);
    ctx->pc = 0x163E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E90u, 0x185224u, 0x18522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18522Cu;
label_18522c:
    // 0x18522c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185230: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185234: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x185234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185238: 0xc067844  jal         func_19E110
    ctx->pc = 0x185238u;
    SET_GPR_U32(ctx, 31, 0x185240u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x185238u, 0x185240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185240u;
label_185240:
    // 0x185240: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185248: 0x0  nop
    ctx->pc = 0x185248u;
    // NOP
    // 0x18524c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x18524cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x185250: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185254: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x185254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185258: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18525c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x18525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x185260: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x185260u;
    SET_GPR_U32(ctx, 31, 0x185268u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x185268u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185268u) { return; }
    ctx->pc = 0x185268u;
label_185268:
    // 0x185268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18526c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185270: 0xe42002f4  swc1        $f0, 0x2F4($at)
    ctx->pc = 0x185270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802F4u, _value); } while (0); }
label_185274:
    // 0x185274: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x185274u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18527c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x18527cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185280: 0x3e00008  jr          $ra
    ctx->pc = 0x185280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185288u;
}
