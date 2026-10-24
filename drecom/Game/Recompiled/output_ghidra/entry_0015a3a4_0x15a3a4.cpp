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

// Function: entry_0015a3a4
// Address: 0x15a3a4 - 0x15a3dc
void entry_0015a3a4_0x15a3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a3a4_0x15a3a4");
#endif

    switch (ctx->pc) {
        case 0x15a3b8u: goto label_15a3b8;
        default: break;
    }

    ctx->pc = 0x15a3a4u;

    // 0x15a3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3ac: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15a3b0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A3B0u;
    SET_GPR_U32(ctx, 31, 0x15A3B8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A3B8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A3B8u) { return; }
    ctx->pc = 0x15A3B8u;
label_15a3b8:
    // 0x15a3b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a3bc: 0x0  nop
    ctx->pc = 0x15a3bcu;
    // NOP
    // 0x15a3c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a3c4: 0x0  nop
    ctx->pc = 0x15a3c4u;
    // NOP
    // 0x15a3c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A3C8u;
    {
        const bool branch_taken_0x15a3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a3c8) {
            ctx->pc = 0x15A3DCu;
            return;
        }
    }
    ctx->pc = 0x15A3D0u;
    // 0x15a3d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a3d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a3d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x15A3D4u;
    {
        const bool branch_taken_0x15a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a3d4) {
            ctx->pc = 0x15A4A0u;
            return;
        }
    }
    ctx->pc = 0x15A3DCu;
}
