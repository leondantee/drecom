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

// Function: entry_0016f4e8
// Address: 0x16f4e8 - 0x16f508
void entry_0016f4e8_0x16f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f4e8_0x16f4e8");
#endif

    ctx->pc = 0x16f4e8u;

    // 0x16f4e8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16f4f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F4F4u;
    {
        const bool branch_taken_0x16f4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f4f4) {
            ctx->pc = 0x16F508u;
            return;
        }
    }
    ctx->pc = 0x16F4FCu;
    // 0x16f4fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f500: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f504: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16f508u;
}
