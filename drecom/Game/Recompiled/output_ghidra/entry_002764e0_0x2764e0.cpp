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

// Function: entry_002764e0
// Address: 0x2764e0 - 0x276538
void entry_002764e0_0x2764e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002764e0_0x2764e0");
#endif

    ctx->pc = 0x2764e0u;

    // 0x2764e0: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2764e4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2764e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2764ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2764ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2764f0: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2764f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2764f4: 0x3c0343ad  lui         $v1, 0x43AD
    ctx->pc = 0x2764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17325 << 16));
    // 0x2764f8: 0x3464c000  ori         $a0, $v1, 0xC000
    ctx->pc = 0x2764f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2764fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2764fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276500: 0x0  nop
    ctx->pc = 0x276500u;
    // NOP
    // 0x276504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x276504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276508: 0x0  nop
    ctx->pc = 0x276508u;
    // NOP
    // 0x27650c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x27650Cu;
    {
        const bool branch_taken_0x27650c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27650c) {
            ctx->pc = 0x276538u;
            return;
        }
    }
    ctx->pc = 0x276514u;
    // 0x276514: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276518: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27651c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x27651cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x276520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x276524: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x276528: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276528u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27652c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x27652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276530: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276534: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x276534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    ctx->pc = 0x276538u;
}
