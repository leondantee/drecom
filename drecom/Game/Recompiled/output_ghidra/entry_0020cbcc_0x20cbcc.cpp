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

// Function: entry_0020cbcc
// Address: 0x20cbcc - 0x20cc44
void entry_0020cbcc_0x20cbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cbcc_0x20cbcc");
#endif

    switch (ctx->pc) {
        case 0x20cbd8u: goto label_20cbd8;
        default: break;
    }

    ctx->pc = 0x20cbccu;

    // 0x20cbcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbd0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20CBD0u;
    SET_GPR_U32(ctx, 31, 0x20CBD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20CBD0u, 0x20CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBD8u;
label_20cbd8:
    // 0x20cbd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbdc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20cbe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20cbe4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20cbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20cbe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20cbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20cbf0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20CBF0u;
    {
        const bool branch_taken_0x20cbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cbf0) {
            ctx->pc = 0x20CC44u;
            return;
        }
    }
    ctx->pc = 0x20CBF8u;
    // 0x20cbf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc00: 0x8c631310  lw          $v1, 0x1310($v1)
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x20cc04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x20cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20cc08: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20cc0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc10: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20cc14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cc20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cc24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cc2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cc34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cc3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20cc44u;
}
