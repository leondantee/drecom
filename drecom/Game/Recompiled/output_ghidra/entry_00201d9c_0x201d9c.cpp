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

// Function: entry_00201d9c
// Address: 0x201d9c - 0x201e40
void entry_00201d9c_0x201d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201d9c_0x201d9c");
#endif

    switch (ctx->pc) {
        case 0x201e28u: goto label_201e28;
        default: break;
    }

    ctx->pc = 0x201d9cu;

label_201d9c:
    // 0x201d9c: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201da0:
    // 0x201da0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201da4:
    // 0x201da4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201da8:
    // 0x201da8: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201dac:
    // 0x201dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201db0:
    // 0x201db0: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
label_201db4:
    // 0x201db4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_201db8:
    if (ctx->pc == 0x201DB8u) {
        ctx->pc = 0x201DBCu;
        goto label_201dbc;
    }
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201E40u;
            return;
        }
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201dc0:
    // 0x201dc0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201dc4:
    // 0x201dc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201dc8:
    // 0x201dc8: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201dcc:
    // 0x201dcc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201dd0:
    // 0x201dd0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x201dd0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_201dd4:
    // 0x201dd4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201dd8:
    // 0x201dd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_201ddc:
    // 0x201ddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_201de0:
    // 0x201de0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x201de0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_201de4:
    // 0x201de4: 0x64420010  daddiu      $v0, $v0, 0x10
    ctx->pc = 0x201de4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)16);
label_201de8:
    // 0x201de8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_201dec:
    // 0x201dec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x201decu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_201df0:
    // 0x201df0: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
label_201df4:
    // 0x201df4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_201df8:
    // 0x201df8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_201dfc:
    // 0x201dfc: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
label_201e00:
    // 0x201e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201e04:
    // 0x201e04: 0x9042485e  lbu         $v0, 0x485E($v0)
    ctx->pc = 0x201e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18526)));
label_201e08:
    // 0x201e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_201e0c:
    // 0x201e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201e10:
    // 0x201e10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_201e14:
    // 0x201e14: 0x24429fa8  addiu       $v0, $v0, -0x6058
    ctx->pc = 0x201e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942632));
label_201e18:
    // 0x201e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201e1c:
    // 0x201e1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201e20:
    // 0x201e20: 0x40f809  jalr        $v0
label_201e24:
    if (ctx->pc == 0x201E24u) {
        ctx->pc = 0x201E28u;
        goto label_201e28;
    }
    ctx->pc = 0x201E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201E28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E20u, 0x201E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E28u;
label_201e28:
    // 0x201e28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e2c:
    // 0x201e2c: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
label_201e30:
    // 0x201e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201e34:
    // 0x201e34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_201e38:
    // 0x201e38: 0xac220ab0  sw          $v0, 0xAB0($at)
    ctx->pc = 0x201e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 2));
label_201e3c:
    // 0x201e3c: 0x0  nop
    ctx->pc = 0x201e3cu;
    // NOP
    ctx->pc = 0x201e40u;
}
