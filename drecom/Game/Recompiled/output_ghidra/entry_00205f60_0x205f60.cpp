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

// Function: entry_00205f60
// Address: 0x205f60 - 0x205fc4
void entry_00205f60_0x205f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f60_0x205f60");
#endif

    ctx->pc = 0x205f60u;

    // 0x205f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f64: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205f68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x205f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x205f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f70: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x205F70u;
    {
        const bool branch_taken_0x205f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x205f70) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x205F78u;
    // 0x205f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f7c: 0x8c63134c  lw          $v1, 0x134C($v1)
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4940)));
    // 0x205f80: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f80) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x205F88u;
    // 0x205f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f8c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x205f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205f90: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x205f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x205f94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x205f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x205f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f9c: 0x0  nop
    ctx->pc = 0x205f9cu;
    // NOP
    // 0x205fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205fa4: 0x0  nop
    ctx->pc = 0x205fa4u;
    // NOP
    // 0x205fa8: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x205FA8u;
    {
        const bool branch_taken_0x205fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205fa8) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x205FB0u;
    // 0x205fb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205FB0u;
    {
        const bool branch_taken_0x205fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fb0) {
            ctx->pc = 0x205FC4u;
            return;
        }
    }
    ctx->pc = 0x205FB8u;
    // 0x205fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205fbc: 0x16030037  bne         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x20609Cu;
            return;
        }
    }
    ctx->pc = 0x205FC4u;
}
