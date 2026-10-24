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

// Function: entry_00129bfc
// Address: 0x129bfc - 0x129c4c
void entry_00129bfc_0x129bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129bfc_0x129bfc");
#endif

    switch (ctx->pc) {
        case 0x129c0cu: goto label_129c0c;
        default: break;
    }

    ctx->pc = 0x129bfcu;

    // 0x129bfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c04: 0xc05d25c  jal         func_174970
    ctx->pc = 0x129C04u;
    SET_GPR_U32(ctx, 31, 0x129C0Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129C04u, 0x129C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C0Cu;
label_129c0c:
    // 0x129c0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x129C0Cu;
    {
        const bool branch_taken_0x129c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c0c) {
            ctx->pc = 0x129C4Cu;
            return;
        }
    }
    ctx->pc = 0x129C14u;
    // 0x129c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129c20: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x129c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129c2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129c34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129c3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129c40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129c44: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x129C44u;
    {
        const bool branch_taken_0x129c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c44) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129C4Cu;
}
