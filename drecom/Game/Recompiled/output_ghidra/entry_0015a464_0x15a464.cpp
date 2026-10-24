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

// Function: entry_0015a464
// Address: 0x15a464 - 0x15a49c
void entry_0015a464_0x15a464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a464_0x15a464");
#endif

    switch (ctx->pc) {
        case 0x15a478u: goto label_15a478;
        default: break;
    }

    ctx->pc = 0x15a464u;

    // 0x15a464: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a468: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a46c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x15a470: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A470u;
    SET_GPR_U32(ctx, 31, 0x15A478u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A478u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A478u) { return; }
    ctx->pc = 0x15A478u;
label_15a478:
    // 0x15a478: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a47c: 0x0  nop
    ctx->pc = 0x15a47cu;
    // NOP
    // 0x15a480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a484: 0x0  nop
    ctx->pc = 0x15a484u;
    // NOP
    // 0x15a488: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A488u;
    {
        const bool branch_taken_0x15a488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a488) {
            ctx->pc = 0x15A49Cu;
            return;
        }
    }
    ctx->pc = 0x15A490u;
    // 0x15a490: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a490u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A494u;
    {
        const bool branch_taken_0x15a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a494) {
            ctx->pc = 0x15A4A0u;
            return;
        }
    }
    ctx->pc = 0x15A49Cu;
}
