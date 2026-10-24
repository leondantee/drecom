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

// Function: entry_0025fdac
// Address: 0x25fdac - 0x25fe10
void entry_0025fdac_0x25fdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fdac_0x25fdac");
#endif

    ctx->pc = 0x25fdacu;

    // 0x25fdac: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fdb0: 0xc4a102d8  lwc1        $f1, 0x2D8($a1)
    ctx->pc = 0x25fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fdb4: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x25fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fdb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25fdb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25fdbc: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x25fdc0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fdc4: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x25fdc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25fdc8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x25fdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25fdcc: 0x30a40080  andi        $a0, $a1, 0x80
    ctx->pc = 0x25fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x25fdd0: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x25FDD0u;
    {
        const bool branch_taken_0x25fdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fdd0) {
            ctx->pc = 0x25FF40u;
            return;
        }
    }
    ctx->pc = 0x25FDD8u;
    // 0x25fdd8: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fddc: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x25fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x25fde0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25fde0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fde4: 0x0  nop
    ctx->pc = 0x25fde4u;
    // NOP
    // 0x25fde8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25fde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fdec: 0x0  nop
    ctx->pc = 0x25fdecu;
    // NOP
    // 0x25fdf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25FDF0u;
    {
        const bool branch_taken_0x25fdf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fdf0) {
            ctx->pc = 0x25FE10u;
            return;
        }
    }
    ctx->pc = 0x25FDF8u;
    // 0x25fdf8: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fdfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe00: 0x8cc402d4  lw          $a0, 0x2D4($a2)
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x25fe04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25fe08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe0c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    ctx->pc = 0x25fe10u;
}
