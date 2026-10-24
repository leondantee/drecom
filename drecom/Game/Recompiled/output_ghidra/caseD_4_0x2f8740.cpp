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

// Function: caseD_4
// Address: 0x2f8740 - 0x2f8774
void caseD_4_0x2f8740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2f8740");
#endif

    ctx->pc = 0x2f8740u;

    // 0x2f8740: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8744: 0x90830100  lbu         $v1, 0x100($a0)
    ctx->pc = 0x2f8744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2f8748: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f8748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f874c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8750: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2F8750u;
    {
        const bool branch_taken_0x2f8750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8750) {
            ctx->pc = 0x2F88A4u;
            return;
        }
    }
    ctx->pc = 0x2F8758u;
    // 0x2f8758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f875c: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F875Cu;
    {
        const bool branch_taken_0x2f875c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f875c) {
            ctx->pc = 0x2F880Cu;
            return;
        }
    }
    ctx->pc = 0x2F8764u;
    // 0x2f8764: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8764u;
    {
        const bool branch_taken_0x2f8764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8764) {
            ctx->pc = 0x2F8774u;
            return;
        }
    }
    ctx->pc = 0x2F876Cu;
    // 0x2f876c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x2F876Cu;
    {
        const bool branch_taken_0x2f876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f876c) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8774u;
}
