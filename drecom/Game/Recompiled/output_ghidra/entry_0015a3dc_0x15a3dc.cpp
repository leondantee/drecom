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

// Function: entry_0015a3dc
// Address: 0x15a3dc - 0x15a42c
void entry_0015a3dc_0x15a3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a3dc_0x15a3dc");
#endif

    switch (ctx->pc) {
        case 0x15a3f4u: goto label_15a3f4;
        case 0x15a408u: goto label_15a408;
        default: break;
    }

    ctx->pc = 0x15a3dcu;

    // 0x15a3dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a3e8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a3ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A3ECu;
    SET_GPR_U32(ctx, 31, 0x15A3F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A3F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A3F4u) { return; }
    ctx->pc = 0x15A3F4u;
label_15a3f4:
    // 0x15a3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3fc: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x15a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15a400: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A400u;
    SET_GPR_U32(ctx, 31, 0x15A408u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A408u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A408u) { return; }
    ctx->pc = 0x15A408u;
label_15a408:
    // 0x15a408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a40c: 0x0  nop
    ctx->pc = 0x15a40cu;
    // NOP
    // 0x15a410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a414: 0x0  nop
    ctx->pc = 0x15a414u;
    // NOP
    // 0x15a418: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A418u;
    {
        const bool branch_taken_0x15a418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a418) {
            ctx->pc = 0x15A42Cu;
            return;
        }
    }
    ctx->pc = 0x15A420u;
    // 0x15a420: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a420u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a424: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15A424u;
    {
        const bool branch_taken_0x15a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a424) {
            ctx->pc = 0x15A4A0u;
            return;
        }
    }
    ctx->pc = 0x15A42Cu;
}
