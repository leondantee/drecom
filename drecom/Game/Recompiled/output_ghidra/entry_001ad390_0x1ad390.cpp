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

// Function: entry_001ad390
// Address: 0x1ad390 - 0x1ad3e0
void entry_001ad390_0x1ad390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad390_0x1ad390");
#endif

    switch (ctx->pc) {
        case 0x1ad3a0u: goto label_1ad3a0;
        default: break;
    }

    ctx->pc = 0x1ad390u;

    // 0x1ad390: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad394: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad398: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AD398u;
    SET_GPR_U32(ctx, 31, 0x1AD3A0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AD3A0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD3A0u) { return; }
    ctx->pc = 0x1AD3A0u;
label_1ad3a0:
    // 0x1ad3a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad3a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad3a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad3a8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad3ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad3b0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ad3b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad3b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ad3bc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ad3c0: 0xac32b490  sw          $s2, -0x4B70($at)
    ctx->pc = 0x1ad3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947984), GPR_U32(ctx, 18));
    // 0x1ad3c4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1ad3c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad3cc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1ad3d0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1ad3d4: 0x2c4103e8  sltiu       $at, $v0, 0x3E8
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ad3d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD3D8u;
    {
        const bool branch_taken_0x1ad3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3d8) {
            ctx->pc = 0x1AD3F8u;
            return;
        }
    }
    ctx->pc = 0x1AD3E0u;
}
