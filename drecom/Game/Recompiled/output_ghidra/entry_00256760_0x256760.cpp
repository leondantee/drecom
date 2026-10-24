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

// Function: entry_00256760
// Address: 0x256760 - 0x2567a8
void entry_00256760_0x256760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256760_0x256760");
#endif

    ctx->pc = 0x256760u;

    // 0x256760: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256764: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x256764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x256768: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x25676c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x25676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256770: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256774: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256778: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25677c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x25677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x256780: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x256780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x256784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256784u;
    {
        const bool branch_taken_0x256784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256784) {
            ctx->pc = 0x2567A8u;
            return;
        }
    }
    ctx->pc = 0x25678Cu;
    // 0x25678c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256790: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x256794: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x256794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256798: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25679c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2567a0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2567a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2567a4: 0x0  nop
    ctx->pc = 0x2567a4u;
    // NOP
    ctx->pc = 0x2567a8u;
}
