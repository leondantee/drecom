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

// Function: entry_002749c8
// Address: 0x2749c8 - 0x274a20
void entry_002749c8_0x2749c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002749c8_0x2749c8");
#endif

    ctx->pc = 0x2749c8u;

    // 0x2749c8: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x2749c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2749cc: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2749ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2749d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2749d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2749d4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2749d8: 0xc4a11830  lwc1        $f1, 0x1830($a1)
    ctx->pc = 0x2749d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2749dc: 0x3c0443ad  lui         $a0, 0x43AD
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17325 << 16));
    // 0x2749e0: 0x3483c000  ori         $v1, $a0, 0xC000
    ctx->pc = 0x2749e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x2749e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2749e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2749e8: 0x0  nop
    ctx->pc = 0x2749e8u;
    // NOP
    // 0x2749ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2749ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749f0: 0x0  nop
    ctx->pc = 0x2749f0u;
    // NOP
    // 0x2749f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2749F4u;
    {
        const bool branch_taken_0x2749f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2749f4) {
            ctx->pc = 0x274A20u;
            return;
        }
    }
    ctx->pc = 0x2749FCu;
    // 0x2749fc: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2749fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274a00: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x274a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x274a04: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x274a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274a08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x274a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274a0c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x274a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x274a10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274a14: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x274a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274a18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x274a1c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x274a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    ctx->pc = 0x274a20u;
}
