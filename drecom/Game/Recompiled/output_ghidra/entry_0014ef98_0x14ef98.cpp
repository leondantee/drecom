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

// Function: entry_0014ef98
// Address: 0x14ef98 - 0x14efc4
void entry_0014ef98_0x14ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ef98_0x14ef98");
#endif

    ctx->pc = 0x14ef98u;

    // 0x14ef98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ef9c: 0x906313f8  lbu         $v1, 0x13F8($v1)
    ctx->pc = 0x14ef9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5112)));
    // 0x14efa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14efa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14efa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14efa8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14EFA8u;
    {
        const bool branch_taken_0x14efa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14efa8) {
            ctx->pc = 0x14EFF4u;
            return;
        }
    }
    ctx->pc = 0x14EFB0u;
    // 0x14efb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14efb4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFB4u;
    {
        const bool branch_taken_0x14efb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14efb4) {
            ctx->pc = 0x14EFC4u;
            return;
        }
    }
    ctx->pc = 0x14EFBCu;
    // 0x14efbc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14EFBCu;
    {
        const bool branch_taken_0x14efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efbc) {
            ctx->pc = 0x14F01Cu;
            return;
        }
    }
    ctx->pc = 0x14EFC4u;
}
