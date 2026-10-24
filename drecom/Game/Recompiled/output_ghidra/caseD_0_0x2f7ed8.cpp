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

// Function: caseD_0
// Address: 0x2f7ed8 - 0x2f7f0c
void caseD_0_0x2f7ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2f7ed8");
#endif

    ctx->pc = 0x2f7ed8u;

    // 0x2f7ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7edc: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2f7edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f7ee0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f7ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7ee4: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f7ee8: 0x10a7005b  beq         $a1, $a3, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F7EE8u;
    {
        const bool branch_taken_0x2f7ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2f7ee8) {
            ctx->pc = 0x2F8058u;
            return;
        }
    }
    ctx->pc = 0x2F7EF0u;
    // 0x2f7ef0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f7ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7ef4: 0x10a9002d  beq         $a1, $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F7EF4u;
    {
        const bool branch_taken_0x2f7ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f7ef4) {
            ctx->pc = 0x2F7FACu;
            return;
        }
    }
    ctx->pc = 0x2F7EFCu;
    // 0x2f7efc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7EFCu;
    {
        const bool branch_taken_0x2f7efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7efc) {
            ctx->pc = 0x2F7F0Cu;
            return;
        }
    }
    ctx->pc = 0x2F7F04u;
    // 0x2f7f04: 0x1000031a  b           . + 4 + (0x31A << 2)
    ctx->pc = 0x2F7F04u;
    {
        const bool branch_taken_0x2f7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7f04) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F7F0Cu;
}
