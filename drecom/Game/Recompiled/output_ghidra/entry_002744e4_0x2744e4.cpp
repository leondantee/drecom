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

// Function: entry_002744e4
// Address: 0x2744e4 - 0x2745c0
void entry_002744e4_0x2744e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002744e4_0x2744e4");
#endif

    ctx->pc = 0x2744e4u;

    // 0x2744e4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2744e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2744e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2744e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2744ec: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2744f0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2744f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2744f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2744fc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2744fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x274500: 0x112240  sll         $a0, $s1, 9
    ctx->pc = 0x274500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274504: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x274508: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27450c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x274510: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x274510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274514: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x274518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27451c: 0x0  nop
    ctx->pc = 0x27451cu;
    // NOP
    // 0x274520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x274520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274524: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x274524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x274528: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x274528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x27452c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x27452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x274530: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274534: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274538: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x274538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27453c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274544: 0x0  nop
    ctx->pc = 0x274544u;
    // NOP
    // 0x274548: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x274548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27454c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x27454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x274550: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274554: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274558: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27455c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27455cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274568: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27456c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274570: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274574: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x274574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274578: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x274578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27457c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274580: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x274580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274584: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x274588: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27458c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274590: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274590u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274594: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274598: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x274598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27459c: 0x309e0001  andi        $fp, $a0, 0x1
    ctx->pc = 0x27459cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2745a0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2745A0u;
    {
        const bool branch_taken_0x2745a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745a0) {
            ctx->pc = 0x2745C0u;
            return;
        }
    }
    ctx->pc = 0x2745A8u;
    // 0x2745a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2745ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2745acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2745b0: 0x0  nop
    ctx->pc = 0x2745b0u;
    // NOP
    // 0x2745b4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2745b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2745b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2745B8u;
    {
        const bool branch_taken_0x2745b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745b8) {
            ctx->pc = 0x2745D0u;
            return;
        }
    }
    ctx->pc = 0x2745C0u;
}
