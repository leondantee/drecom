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

// Function: entry_001ac650
// Address: 0x1ac650 - 0x1ac680
void entry_001ac650_0x1ac650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac650_0x1ac650");
#endif

    ctx->pc = 0x1ac650u;

    // 0x1ac650: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ac654: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ac658: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ac65c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ac660: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ac660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ac664: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ac664u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ac668: 0xac31b470  sw          $s1, -0x4B90($at)
    ctx->pc = 0x1ac668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947952), GPR_U32(ctx, 17));
    // 0x1ac66c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ac66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ac670: 0x3463f400  ori         $v1, $v1, 0xF400
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62464);
    // 0x1ac674: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac678: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ac67c: 0x0  nop
    ctx->pc = 0x1ac67cu;
    // NOP
    ctx->pc = 0x1ac680u;
}
