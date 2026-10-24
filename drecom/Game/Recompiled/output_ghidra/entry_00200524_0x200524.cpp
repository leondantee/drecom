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

// Function: entry_00200524
// Address: 0x200524 - 0x200560
void entry_00200524_0x200524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200524_0x200524");
#endif

    ctx->pc = 0x200524u;

    // 0x200524: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200528: 0x8cc50ab8  lw          $a1, 0xAB8($a2)
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2744)));
    // 0x20052c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20052Cu;
    {
        const bool branch_taken_0x20052c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20052c) {
            ctx->pc = 0x2005A4u;
            return;
        }
    }
    ctx->pc = 0x200534u;
    // 0x200534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200538: 0x8c640ab8  lw          $a0, 0xAB8($v1)
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x20053c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x200540: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x200540u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200544: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x200544u;
    {
        const bool branch_taken_0x200544 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x200544) {
            ctx->pc = 0x200560u;
            return;
        }
    }
    ctx->pc = 0x20054Cu;
    // 0x20054c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20054cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200550: 0x0  nop
    ctx->pc = 0x200550u;
    // NOP
    // 0x200554: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200558u;
    {
        const bool branch_taken_0x200558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200558) {
            ctx->pc = 0x20057Cu;
            return;
        }
    }
    ctx->pc = 0x200560u;
}
