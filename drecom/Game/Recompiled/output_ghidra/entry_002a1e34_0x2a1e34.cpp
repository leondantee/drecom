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

// Function: entry_002a1e34
// Address: 0x2a1e34 - 0x2a1e9c
void entry_002a1e34_0x2a1e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1e34_0x2a1e34");
#endif

    switch (ctx->pc) {
        case 0x2a1e60u: goto label_2a1e60;
        case 0x2a1e94u: goto label_2a1e94;
        default: break;
    }

    ctx->pc = 0x2a1e34u;

    // 0x2a1e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1e40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1e48: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a1e4c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2a1e50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1E50u;
    {
        const bool branch_taken_0x2a1e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e50) {
            ctx->pc = 0x2A1E9Cu;
            return;
        }
    }
    ctx->pc = 0x2A1E58u;
    // 0x2a1e58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1E58u;
    SET_GPR_U32(ctx, 31, 0x2A1E60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1E58u, 0x2A1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E60u;
label_2a1e60:
    // 0x2a1e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1e64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a1e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a1e68: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1e6c: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x2a1e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2a1e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1e74: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2a1e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a1e78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1e84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1e8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1E8Cu, 0x2A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E94u;
label_2a1e94:
    // 0x2a1e94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1E94u;
    {
        const bool branch_taken_0x2a1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e94) {
            ctx->pc = 0x2A1ED8u;
            return;
        }
    }
    ctx->pc = 0x2A1E9Cu;
}
