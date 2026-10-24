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

// Function: entry_00275cb0
// Address: 0x275cb0 - 0x275cfc
void entry_00275cb0_0x275cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275cb0_0x275cb0");
#endif

    ctx->pc = 0x275cb0u;

    // 0x275cb0: 0x2a440006  slti        $a0, $s2, 0x6
    ctx->pc = 0x275cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x275cb4: 0x1480fe4a  bnez        $a0, . + 4 + (-0x1B6 << 2)
    ctx->pc = 0x275CB4u;
    {
        const bool branch_taken_0x275cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x275cb4) {
            ctx->pc = 0x2755E0u;
            return;
        }
    }
    ctx->pc = 0x275CBCu;
    // 0x275cbc: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x275cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275cc0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x275cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x275cc4: 0xae641bf0  sw          $a0, 0x1BF0($s3)
    ctx->pc = 0x275cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7152), GPR_U32(ctx, 4));
    // 0x275cc8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x275cc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275ccc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x275cccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275cd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x275cd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275cd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x275cd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275cd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x275cd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275cdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275ce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275cf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x275cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x275cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x275CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CFCu;
}
