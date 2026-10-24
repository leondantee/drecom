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

// Function: entry_00129b88
// Address: 0x129b88 - 0x129bfc
void entry_00129b88_0x129b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b88_0x129b88");
#endif

    ctx->pc = 0x129b88u;

    // 0x129b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b8c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129b90: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x129b94: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x129b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b9c: 0x0  nop
    ctx->pc = 0x129b9cu;
    // NOP
    // 0x129ba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ba4: 0x0  nop
    ctx->pc = 0x129ba4u;
    // NOP
    // 0x129ba8: 0x45000072  bc1f        . + 4 + (0x72 << 2)
    ctx->pc = 0x129BA8u;
    {
        const bool branch_taken_0x129ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129ba8) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129BB0u;
    // 0x129bb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129bb4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x129bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129bb8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x129bbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x129bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129bc4: 0x0  nop
    ctx->pc = 0x129bc4u;
    // NOP
    // 0x129bc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x129bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129bcc: 0x0  nop
    ctx->pc = 0x129bccu;
    // NOP
    // 0x129bd0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x129BD0u;
    {
        const bool branch_taken_0x129bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129bd0) {
            ctx->pc = 0x129C4Cu;
            return;
        }
    }
    ctx->pc = 0x129BD8u;
    // 0x129bd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129bdc: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x129be0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x129be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x129be4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129BE4u;
    {
        const bool branch_taken_0x129be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129be4) {
            ctx->pc = 0x129BFCu;
            return;
        }
    }
    ctx->pc = 0x129BECu;
    // 0x129bec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129bf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x129bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x129bf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x129BF4u;
    {
        const bool branch_taken_0x129bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bf4) {
            ctx->pc = 0x129C4Cu;
            return;
        }
    }
    ctx->pc = 0x129BFCu;
}
