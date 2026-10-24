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

// Function: caseD_2
// Address: 0x2f82cc - 0x2f830c
void caseD_2_0x2f82cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2f82cc");
#endif

    ctx->pc = 0x2f82ccu;

    // 0x2f82cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f82d0: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x2f82d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f82d4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2f82d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f82d8: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f82dc: 0x10a30082  beq         $a1, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2F82DCu;
    {
        const bool branch_taken_0x2f82dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f82dc) {
            ctx->pc = 0x2F84E8u;
            return;
        }
    }
    ctx->pc = 0x2F82E4u;
    // 0x2f82e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f82e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f82e8: 0x10a60057  beq         $a1, $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F82E8u;
    {
        const bool branch_taken_0x2f82e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f82e8) {
            ctx->pc = 0x2F8448u;
            return;
        }
    }
    ctx->pc = 0x2F82F0u;
    // 0x2f82f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f82f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f82f4: 0x10a7002c  beq         $a1, $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F83A8u;
            return;
        }
    }
    ctx->pc = 0x2F82FCu;
    // 0x2f82fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F82FCu;
    {
        const bool branch_taken_0x2f82fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82fc) {
            ctx->pc = 0x2F830Cu;
            return;
        }
    }
    ctx->pc = 0x2F8304u;
    // 0x2f8304: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x2F8304u;
    {
        const bool branch_taken_0x2f8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8304) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F830Cu;
}
