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

// Function: entry_002e2f08
// Address: 0x2e2f08 - 0x2e2f70
void entry_002e2f08_0x2e2f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2f08_0x2e2f08");
#endif

    switch (ctx->pc) {
        case 0x2e2f24u: goto label_2e2f24;
        default: break;
    }

    ctx->pc = 0x2e2f08u;

    // 0x2e2f08: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2f0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2f10: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2e2f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e2f14: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2F14u;
    {
        const bool branch_taken_0x2e2f14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f14) {
            ctx->pc = 0x2E2F70u;
            return;
        }
    }
    ctx->pc = 0x2E2F1Cu;
    // 0x2e2f1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E2F1Cu, 0x2E2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F24u;
label_2e2f24:
    // 0x2e2f24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e2f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2f28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e2f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e2f2c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2F2Cu;
    {
        const bool branch_taken_0x2e2f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f2c) {
            ctx->pc = 0x2E2F70u;
            return;
        }
    }
    ctx->pc = 0x2E2F34u;
    // 0x2e2f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2f44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e2f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f64: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e2f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f68: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E2F68u;
    {
        const bool branch_taken_0x2e2f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f68) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E2F70u;
}
