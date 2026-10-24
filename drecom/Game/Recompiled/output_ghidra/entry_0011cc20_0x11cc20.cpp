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

// Function: entry_0011cc20
// Address: 0x11cc20 - 0x11cc3c
void entry_0011cc20_0x11cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc20_0x11cc20");
#endif

    ctx->pc = 0x11cc20u;

    // 0x11cc20: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x11cc24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11cc28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11cc2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11cc30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11cc30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc34: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x11cc34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11cc38: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x11cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x11cc3cu;
}
