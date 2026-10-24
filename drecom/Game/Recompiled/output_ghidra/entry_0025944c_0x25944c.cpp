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

// Function: entry_0025944c
// Address: 0x25944c - 0x25947c
void entry_0025944c_0x25944c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025944c_0x25944c");
#endif

    ctx->pc = 0x25944cu;

    // 0x25944c: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x25944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259450: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x259450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259458: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259458u;
    {
        const bool branch_taken_0x259458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x259458) {
            ctx->pc = 0x25947Cu;
            return;
        }
    }
    ctx->pc = 0x259460u;
    // 0x259460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259464: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259468: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25946c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259470: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259474: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x259474u;
    {
        const bool branch_taken_0x259474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259474) {
            ctx->pc = 0x2594F0u;
            return;
        }
    }
    ctx->pc = 0x25947Cu;
}
