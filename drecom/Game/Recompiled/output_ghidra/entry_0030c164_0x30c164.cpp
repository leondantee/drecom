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

// Function: entry_0030c164
// Address: 0x30c164 - 0x30c1a8
void entry_0030c164_0x30c164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c164_0x30c164");
#endif

    ctx->pc = 0x30c164u;

    // 0x30c164: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x30c164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30c168: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c16c: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30c170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c174: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30c178: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30c17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c180: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30c180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c184: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c188: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30c18c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x30c18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c190: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x30c190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x30c194: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x30c194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x30c198: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x30c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c19c: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x30c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x30c1a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30c1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30c1a4: 0x0  nop
    ctx->pc = 0x30c1a4u;
    // NOP
    ctx->pc = 0x30c1a8u;
}
