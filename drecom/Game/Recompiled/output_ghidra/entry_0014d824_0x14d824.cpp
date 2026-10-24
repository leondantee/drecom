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

// Function: entry_0014d824
// Address: 0x14d824 - 0x14d868
void entry_0014d824_0x14d824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d824_0x14d824");
#endif

    switch (ctx->pc) {
        case 0x14d844u: goto label_14d844;
        case 0x14d850u: goto label_14d850;
        default: break;
    }

    ctx->pc = 0x14d824u;

    // 0x14d824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d82c: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x14d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x14d830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d834: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d838: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14d83c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D83Cu;
    SET_GPR_U32(ctx, 31, 0x14D844u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D83Cu, 0x14D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D844u;
label_14d844:
    // 0x14d844: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d848: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x14D848u;
    SET_GPR_U32(ctx, 31, 0x14D850u);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x14D848u, 0x14D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D850u;
label_14d850:
    // 0x14d850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d854: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D858u;
    {
        const bool branch_taken_0x14d858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d858) {
            ctx->pc = 0x14D868u;
            return;
        }
    }
    ctx->pc = 0x14D860u;
    // 0x14d860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d864: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x14d864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x14d868u;
}
