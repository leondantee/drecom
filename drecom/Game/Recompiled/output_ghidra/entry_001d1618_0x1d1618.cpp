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

// Function: entry_001d1618
// Address: 0x1d1618 - 0x1d1648
void entry_001d1618_0x1d1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1618_0x1d1618");
#endif

    ctx->pc = 0x1d1618u;

    // 0x1d1618: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1d1618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1620: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d1624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1624u;
    {
        const bool branch_taken_0x1d1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1624) {
            ctx->pc = 0x1D1648u;
            return;
        }
    }
    ctx->pc = 0x1D162Cu;
    // 0x1d162c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1d1630: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d1630u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1634: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d1634u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d1638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d163c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d163cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1640: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1D1640u;
    {
        const bool branch_taken_0x1d1640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1640) {
            ctx->pc = 0x1D1810u;
            return;
        }
    }
    ctx->pc = 0x1D1648u;
}
