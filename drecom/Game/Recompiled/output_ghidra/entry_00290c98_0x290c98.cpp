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

// Function: entry_00290c98
// Address: 0x290c98 - 0x290d14
void entry_00290c98_0x290c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290c98_0x290c98");
#endif

    ctx->pc = 0x290c98u;

    // 0x290c98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290c9c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290ca0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x290ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x290ca4: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x290CA4u;
    {
        const bool branch_taken_0x290ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290ca4) {
            ctx->pc = 0x290B10u;
            return;
        }
    }
    ctx->pc = 0x290CACu;
    // 0x290cac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290cb0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290cb4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cb8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290cbc: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290cc0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290cc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290ccc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cd8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x290cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290cdc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ce0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290ce4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290ce8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290cec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cf8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290cfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290d00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290d04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290d08: 0x2470fffe  addiu       $s0, $v1, -0x2
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290d0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x290D0Cu;
    {
        const bool branch_taken_0x290d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d0c) {
            ctx->pc = 0x290D80u;
            return;
        }
    }
    ctx->pc = 0x290D14u;
}
