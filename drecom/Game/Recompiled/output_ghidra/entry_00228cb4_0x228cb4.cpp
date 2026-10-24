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

// Function: entry_00228cb4
// Address: 0x228cb4 - 0x228d28
void entry_00228cb4_0x228cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228cb4_0x228cb4");
#endif

    ctx->pc = 0x228cb4u;

    // 0x228cb4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228cb8: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x228cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cbc: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x228cc0: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x228cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x228cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228cc8: 0x0  nop
    ctx->pc = 0x228cc8u;
    // NOP
    // 0x228ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228cd0: 0x0  nop
    ctx->pc = 0x228cd0u;
    // NOP
    // 0x228cd4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x228CD4u;
    {
        const bool branch_taken_0x228cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228cd4) {
            ctx->pc = 0x228D28u;
            return;
        }
    }
    ctx->pc = 0x228CDCu;
    // 0x228cdc: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x228cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x228ce0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x228ce0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ce4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ce8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228cec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228cf0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228cf4: 0x8482127a  lh          $v0, 0x127A($a0)
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x228cf8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x228cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228cfc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228cfcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x228d00: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x228d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x228d04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x228D04u;
    {
        const bool branch_taken_0x228d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d04) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228D0Cu;
    // 0x228d0c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x228d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x228d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d18: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228d1c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x228d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x228d20: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x228D20u;
    {
        const bool branch_taken_0x228d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d20) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228D28u;
}
