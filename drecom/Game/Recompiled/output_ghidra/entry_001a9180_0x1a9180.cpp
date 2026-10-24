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

// Function: entry_001a9180
// Address: 0x1a9180 - 0x1a91d0
void entry_001a9180_0x1a9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9180_0x1a9180");
#endif

    ctx->pc = 0x1a9180u;

    // 0x1a9180: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9184: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9184u;
    {
        const bool branch_taken_0x1a9184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9184) {
            ctx->pc = 0x1A91D0u;
            return;
        }
    }
    ctx->pc = 0x1A918Cu;
    // 0x1a918c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9190: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9194: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9198: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a919c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a91a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a91a4: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a91a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a91a8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a91ac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a91acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a91b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a91b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a91b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a91bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a91c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a91c4: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1a91c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a91cc: 0x0  nop
    ctx->pc = 0x1a91ccu;
    // NOP
    ctx->pc = 0x1a91d0u;
}
