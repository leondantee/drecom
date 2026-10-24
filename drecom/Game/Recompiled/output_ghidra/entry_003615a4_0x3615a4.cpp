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

// Function: entry_003615a4
// Address: 0x3615a4 - 0x3615f4
void entry_003615a4_0x3615a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003615a4_0x3615a4");
#endif

    switch (ctx->pc) {
        case 0x3615dcu: goto label_3615dc;
        default: break;
    }

    ctx->pc = 0x3615a4u;

    // 0x3615a4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3615A4u;
    {
        const bool branch_taken_0x3615a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3615a4) {
            ctx->pc = 0x361604u;
            return;
        }
    }
    ctx->pc = 0x3615ACu;
    // 0x3615ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615b0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3615b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3615b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3615b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3615b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3615bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3615c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615c4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3615c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3615c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3615C8u;
    {
        const bool branch_taken_0x3615c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3615c8) {
            ctx->pc = 0x3615F4u;
            return;
        }
    }
    ctx->pc = 0x3615D0u;
    // 0x3615d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3615D4u;
    SET_GPR_U32(ctx, 31, 0x3615DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3615D4u, 0x3615DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615DCu;
label_3615dc:
    // 0x3615dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615e4: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x3615e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3615e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3615e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3615ECu;
    SET_GPR_U32(ctx, 31, 0x3615F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3615F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3615F4u) { return; }
    ctx->pc = 0x3615F4u;
}
