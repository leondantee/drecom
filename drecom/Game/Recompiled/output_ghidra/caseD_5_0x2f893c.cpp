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

// Function: caseD_5
// Address: 0x2f893c - 0x2f897c
void caseD_5_0x2f893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2f893c");
#endif

    ctx->pc = 0x2f893cu;

    // 0x2f893c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8940: 0x906a0100  lbu         $t2, 0x100($v1)
    ctx->pc = 0x2f8940u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f8944: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x2f8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2f8948: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f894c: 0x10a40083  beq         $a1, $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2F894Cu;
    {
        const bool branch_taken_0x2f894c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f894c) {
            ctx->pc = 0x2F8B5Cu;
            return;
        }
    }
    ctx->pc = 0x2F8954u;
    // 0x2f8954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8958: 0x10a30057  beq         $a1, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F8958u;
    {
        const bool branch_taken_0x2f8958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8958) {
            ctx->pc = 0x2F8AB8u;
            return;
        }
    }
    ctx->pc = 0x2F8960u;
    // 0x2f8960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8964: 0x10a4002c  beq         $a1, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F8964u;
    {
        const bool branch_taken_0x2f8964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f8964) {
            ctx->pc = 0x2F8A18u;
            return;
        }
    }
    ctx->pc = 0x2F896Cu;
    // 0x2f896c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F896Cu;
    {
        const bool branch_taken_0x2f896c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f896c) {
            ctx->pc = 0x2F897Cu;
            return;
        }
    }
    ctx->pc = 0x2F8974u;
    // 0x2f8974: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2F8974u;
    {
        const bool branch_taken_0x2f8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8974) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F897Cu;
}
