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

// Function: entry_00266f80
// Address: 0x266f80 - 0x266fc4
void entry_00266f80_0x266f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266f80_0x266f80");
#endif

    switch (ctx->pc) {
        case 0x266f8cu: goto label_266f8c;
        case 0x266fb8u: goto label_266fb8;
        default: break;
    }

    ctx->pc = 0x266f80u;

    // 0x266f80: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x266f84: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x266F84u;
    SET_GPR_U32(ctx, 31, 0x266F8Cu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x266F84u, 0x266F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F8Cu;
label_266f8c:
    // 0x266f8c: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x266f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266f94: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x266F94u;
    {
        const bool branch_taken_0x266f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f94) {
            ctx->pc = 0x266FF8u;
            return;
        }
    }
    ctx->pc = 0x266F9Cu;
    // 0x266f9c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x266F9Cu;
    {
        const bool branch_taken_0x266f9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f9c) {
            ctx->pc = 0x266FC4u;
            return;
        }
    }
    ctx->pc = 0x266FA4u;
    // 0x266fa4: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fa8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x266fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x266fac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x266facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266fb0: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x266FB0u;
    SET_GPR_U32(ctx, 31, 0x266FB8u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x266FB0u, 0x266FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FB8u;
label_266fb8:
    // 0x266fb8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266fbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266FBCu;
    {
        const bool branch_taken_0x266fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266fbc) {
            ctx->pc = 0x266FE0u;
            return;
        }
    }
    ctx->pc = 0x266FC4u;
}
