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

// Function: entry_00327094
// Address: 0x327094 - 0x3270c8
void entry_00327094_0x327094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327094_0x327094");
#endif

    ctx->pc = 0x327094u;

    // 0x327094: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x327094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32709c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3270a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3270a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3270a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3270a8: 0x8c420198  lw          $v0, 0x198($v0)
    ctx->pc = 0x3270a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x3270ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3270ACu;
    {
        const bool branch_taken_0x3270ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3270ac) {
            ctx->pc = 0x3270C8u;
            return;
        }
    }
    ctx->pc = 0x3270B4u;
    // 0x3270b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3270b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3270b8: 0x0  nop
    ctx->pc = 0x3270b8u;
    // NOP
    // 0x3270bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3270bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3270c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3270C0u;
    {
        const bool branch_taken_0x3270c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3270c0) {
            ctx->pc = 0x3270E4u;
            return;
        }
    }
    ctx->pc = 0x3270C8u;
}
