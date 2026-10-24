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

// Function: entry_00211c70
// Address: 0x211c70 - 0x211d30
void entry_00211c70_0x211c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211c70_0x211c70");
#endif

    ctx->pc = 0x211c70u;

label_211c70:
    // 0x211c70: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x211c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_211c74:
    // 0x211c74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_211c78:
    if (ctx->pc == 0x211C78u) {
        ctx->pc = 0x211C7Cu;
        goto label_211c7c;
    }
    ctx->pc = 0x211C74u;
    {
        const bool branch_taken_0x211c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c74) {
            ctx->pc = 0x211C60u;
            return;
        }
    }
    ctx->pc = 0x211C7Cu;
label_211c7c:
    // 0x211c7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211c80:
    // 0x211c80: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x211c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_211c84:
    // 0x211c84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x211c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_211c88:
    // 0x211c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x211c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_211c8c:
    // 0x211c8c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_211c90:
    if (ctx->pc == 0x211C90u) {
        ctx->pc = 0x211C94u;
        goto label_211c94;
    }
    ctx->pc = 0x211C8Cu;
    {
        const bool branch_taken_0x211c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c8c) {
            ctx->pc = 0x211D40u;
            return;
        }
    }
    ctx->pc = 0x211C94u;
label_211c94:
    // 0x211c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211c98:
    // 0x211c98: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211c9c:
    // 0x211c9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211ca0:
    // 0x211ca0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211ca4:
    // 0x211ca4: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211ca8:
    // 0x211ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211cac:
    // 0x211cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211cb0:
    // 0x211cb0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_211cb4:
    if (ctx->pc == 0x211CB4u) {
        ctx->pc = 0x211CB8u;
        goto label_211cb8;
    }
    ctx->pc = 0x211CB0u;
    {
        const bool branch_taken_0x211cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cb0) {
            ctx->pc = 0x211D30u;
            return;
        }
    }
    ctx->pc = 0x211CB8u;
label_211cb8:
    // 0x211cb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cbc:
    // 0x211cbc: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211cc0:
    // 0x211cc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211cc4:
    // 0x211cc4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211cc8:
    // 0x211cc8: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211ccc:
    // 0x211ccc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211cd0:
    // 0x211cd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cd4:
    // 0x211cd4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x211cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_211cd8:
    // 0x211cd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_211cdc:
    // 0x211cdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211ce0:
    // 0x211ce0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211ce4:
    // 0x211ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211ce8:
    // 0x211ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211cec:
    // 0x211cec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_211cf0:
    if (ctx->pc == 0x211CF0u) {
        ctx->pc = 0x211CF4u;
        goto label_211cf4;
    }
    ctx->pc = 0x211CECu;
    {
        const bool branch_taken_0x211cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cec) {
            ctx->pc = 0x211D30u;
            return;
        }
    }
    ctx->pc = 0x211CF4u;
label_211cf4:
    // 0x211cf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cf8:
    // 0x211cf8: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211cfc:
    // 0x211cfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211d00:
    // 0x211d00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211d04:
    // 0x211d04: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211d08:
    // 0x211d08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211d0c:
    // 0x211d0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211d10:
    // 0x211d10: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x211d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_211d14:
    // 0x211d14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_211d18:
    // 0x211d18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211d1c:
    // 0x211d1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211d20:
    // 0x211d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211d24:
    // 0x211d24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211d28:
    // 0x211d28: 0x40f809  jalr        $v0
label_211d2c:
    if (ctx->pc == 0x211D2Cu) {
        ctx->pc = 0x211D30u;
        goto label_fallthrough_0x211d28;
    }
    ctx->pc = 0x211D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211D30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D28u, 0x211D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x211d28:
    ctx->pc = 0x211D30u;
}
