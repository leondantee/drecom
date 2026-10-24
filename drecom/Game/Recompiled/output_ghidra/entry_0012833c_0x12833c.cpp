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

// Function: entry_0012833c
// Address: 0x12833c - 0x128384
void entry_0012833c_0x12833c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012833c_0x12833c");
#endif

    switch (ctx->pc) {
        case 0x12834cu: goto label_12834c;
        default: break;
    }

    ctx->pc = 0x12833cu;

    // 0x12833c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128344: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128344u;
    SET_GPR_U32(ctx, 31, 0x12834Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128344u, 0x12834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12834Cu;
label_12834c:
    // 0x12834c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12834Cu;
    {
        const bool branch_taken_0x12834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12834c) {
            ctx->pc = 0x128384u;
            return;
        }
    }
    ctx->pc = 0x128354u;
    // 0x128354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12835c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12835cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128360: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x128364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128368: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12836c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128370: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128378: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12837c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128380: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128384u;
}
