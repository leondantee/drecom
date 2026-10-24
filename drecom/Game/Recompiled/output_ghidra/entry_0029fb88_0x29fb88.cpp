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

// Function: entry_0029fb88
// Address: 0x29fb88 - 0x29fc10
void entry_0029fb88_0x29fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fb88_0x29fb88");
#endif

    switch (ctx->pc) {
        case 0x29fbd0u: goto label_29fbd0;
        default: break;
    }

    ctx->pc = 0x29fb88u;

    // 0x29fb88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29fb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29fb90: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x29FB90u;
    {
        const bool branch_taken_0x29fb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb90) {
            ctx->pc = 0x29FCF8u;
            return;
        }
    }
    ctx->pc = 0x29FB98u;
    // 0x29fb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fba0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29fba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fba8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29fbacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29fbb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbb4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fbb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbbc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fbc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29fbc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FBC8u;
    SET_GPR_U32(ctx, 31, 0x29FBD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FBC8u, 0x29FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBD0u;
label_29fbd0:
    // 0x29fbd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fbd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29fbd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29FBD8u;
    {
        const bool branch_taken_0x29fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbd8) {
            ctx->pc = 0x29FC10u;
            return;
        }
    }
    ctx->pc = 0x29FBE0u;
    // 0x29fbe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fbe4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbe8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fbec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fbf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fbf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fc04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29fc10u;
}
