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

// Function: entry_0025fe48
// Address: 0x25fe48 - 0x25fed8
void entry_0025fe48_0x25fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fe48_0x25fe48");
#endif

    ctx->pc = 0x25fe48u;

    // 0x25fe48: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fe4c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe50: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
    // 0x25fe54: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x25fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25fe58: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fe5c: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25fe60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fe64: 0x0  nop
    ctx->pc = 0x25fe64u;
    // NOP
    // 0x25fe68: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x25FE68u;
    {
        const bool branch_taken_0x25fe68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fe68) {
            ctx->pc = 0x25FED8u;
            return;
        }
    }
    ctx->pc = 0x25FE70u;
    // 0x25fe70: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fe74: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe78: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
    // 0x25fe7c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x25fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25fe80: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fe84: 0x3c0541c8  lui         $a1, 0x41C8
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16840 << 16));
    // 0x25fe88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25fe88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fe8c: 0x0  nop
    ctx->pc = 0x25fe8cu;
    // NOP
    // 0x25fe90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25fe90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25fe94: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25fe98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fe9c: 0x0  nop
    ctx->pc = 0x25fe9cu;
    // NOP
    // 0x25fea0: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
    ctx->pc = 0x25FEA0u;
    {
        const bool branch_taken_0x25fea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fea0) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x25FEA8u;
    // 0x25fea8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25feac: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25feacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25feb0: 0x8c4602d4  lw          $a2, 0x2D4($v0)
    ctx->pc = 0x25feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x25feb4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25feb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25febc: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25febcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x25fec0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fec0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fec4: 0x0  nop
    ctx->pc = 0x25fec4u;
    // NOP
    // 0x25fec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25fec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25fecc: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25feccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x25fed0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x25FED0u;
    {
        const bool branch_taken_0x25fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fed0) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x25FED8u;
}
