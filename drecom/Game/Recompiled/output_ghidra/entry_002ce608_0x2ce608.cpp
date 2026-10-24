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

// Function: entry_002ce608
// Address: 0x2ce608 - 0x2ce63c
void entry_002ce608_0x2ce608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce608_0x2ce608");
#endif

    ctx->pc = 0x2ce608u;

    // 0x2ce608: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce60c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce610: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ce610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce614: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce618: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2CE618u;
    {
        const bool branch_taken_0x2ce618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce618) {
            ctx->pc = 0x2CE838u;
            return;
        }
    }
    ctx->pc = 0x2CE620u;
    // 0x2ce620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce624: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE624u;
    {
        const bool branch_taken_0x2ce624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce624) {
            ctx->pc = 0x2CE6C8u;
            return;
        }
    }
    ctx->pc = 0x2CE62Cu;
    // 0x2ce62c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE62Cu;
    {
        const bool branch_taken_0x2ce62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce62c) {
            ctx->pc = 0x2CE63Cu;
            return;
        }
    }
    ctx->pc = 0x2CE634u;
    // 0x2ce634: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2CE634u;
    {
        const bool branch_taken_0x2ce634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce634) {
            ctx->pc = 0x2CE838u;
            return;
        }
    }
    ctx->pc = 0x2CE63Cu;
}
