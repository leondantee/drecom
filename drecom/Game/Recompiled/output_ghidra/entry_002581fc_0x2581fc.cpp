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

// Function: entry_002581fc
// Address: 0x2581fc - 0x25822c
void entry_002581fc_0x2581fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002581fc_0x2581fc");
#endif

    ctx->pc = 0x2581fcu;

    // 0x2581fc: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x2581fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258200: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x258200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x258204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258208: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x258208u;
    {
        const bool branch_taken_0x258208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x258208) {
            ctx->pc = 0x25822Cu;
            return;
        }
    }
    ctx->pc = 0x258210u;
    // 0x258210: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x258210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x258214: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258218: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25821c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x258220: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x258220u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x258224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x258224u;
    {
        const bool branch_taken_0x258224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258224) {
            ctx->pc = 0x2582A0u;
            return;
        }
    }
    ctx->pc = 0x25822Cu;
}
