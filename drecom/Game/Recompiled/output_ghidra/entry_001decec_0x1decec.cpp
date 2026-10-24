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

// Function: entry_001decec
// Address: 0x1decec - 0x1ded1c
void entry_001decec_0x1decec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001decec_0x1decec");
#endif

    ctx->pc = 0x1dececu;

    // 0x1decec: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dececu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1decf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1decf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1decf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1decf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decf8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DECF8u;
    {
        const bool branch_taken_0x1decf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1decf8) {
            ctx->pc = 0x1DED1Cu;
            return;
        }
    }
    ctx->pc = 0x1DED00u;
    // 0x1ded00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ded00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ded04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ded04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ded08: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ded0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ded0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ded10: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ded10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ded14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DED14u;
    {
        const bool branch_taken_0x1ded14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded14) {
            ctx->pc = 0x1DED38u;
            return;
        }
    }
    ctx->pc = 0x1DED1Cu;
}
