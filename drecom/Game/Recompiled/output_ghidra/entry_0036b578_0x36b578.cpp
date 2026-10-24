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

// Function: entry_0036b578
// Address: 0x36b578 - 0x36b5a0
void entry_0036b578_0x36b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b578_0x36b578");
#endif

    ctx->pc = 0x36b578u;

    // 0x36b578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36b578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36b57c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b580: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b588: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b58c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b590: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b59c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x36b5a0u;
}
