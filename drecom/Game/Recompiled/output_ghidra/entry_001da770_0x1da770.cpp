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

// Function: entry_001da770
// Address: 0x1da770 - 0x1da7b8
void entry_001da770_0x1da770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da770_0x1da770");
#endif

    ctx->pc = 0x1da770u;

    // 0x1da770: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da774: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1da774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1da778: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da77c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da780: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1da784: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da788: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1da788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da78c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1da78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1da790: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1da790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1da794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA794u;
    {
        const bool branch_taken_0x1da794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da794) {
            ctx->pc = 0x1DA7B8u;
            return;
        }
    }
    ctx->pc = 0x1DA79Cu;
    // 0x1da79c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1da79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da7a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1da7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1da7a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da7a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da7b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da7b4: 0x0  nop
    ctx->pc = 0x1da7b4u;
    // NOP
    ctx->pc = 0x1da7b8u;
}
