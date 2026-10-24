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

// Function: caseD_4
// Address: 0x232d30 - 0x232da0
void caseD_4_0x232d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x232d30");
#endif

    switch (ctx->pc) {
        case 0x232d40u: goto label_232d40;
        case 0x232d4cu: goto label_232d4c;
        case 0x232d60u: goto label_232d60;
        case 0x232d6cu: goto label_232d6c;
        case 0x232d78u: goto label_232d78;
        default: break;
    }

    ctx->pc = 0x232d30u;

    // 0x232d30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232d38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x232D38u;
    SET_GPR_U32(ctx, 31, 0x232D40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232D38u, 0x232D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D40u;
label_232d40:
    // 0x232d40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x232D44u;
    SET_GPR_U32(ctx, 31, 0x232D4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x232D44u, 0x232D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D4Cu;
label_232d4c:
    // 0x232d4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232d50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232d58: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x232D58u;
    SET_GPR_U32(ctx, 31, 0x232D60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232D58u, 0x232D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D60u;
label_232d60:
    // 0x232d60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d64: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x232D64u;
    SET_GPR_U32(ctx, 31, 0x232D6Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232D64u, 0x232D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D6Cu;
label_232d6c:
    // 0x232d6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d70: 0xc057634  jal         func_15D8D0
    ctx->pc = 0x232D70u;
    SET_GPR_U32(ctx, 31, 0x232D78u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x232D70u, 0x232D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D78u;
label_232d78:
    // 0x232d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232D78u;
    {
        const bool branch_taken_0x232d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d78) {
            ctx->pc = 0x232DA0u;
            return;
        }
    }
    ctx->pc = 0x232D80u;
    // 0x232d80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d84: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x232d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x232d88: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x232d8c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x232d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x232d90: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x232d94: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x232d98: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x232D98u;
    SET_GPR_U32(ctx, 31, 0x232DA0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232D98u, 0x232DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DA0u;
}
