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

// Function: entry_002a2f3c
// Address: 0x2a2f3c - 0x2a2fa0
void entry_002a2f3c_0x2a2f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2f3c_0x2a2f3c");
#endif

    switch (ctx->pc) {
        case 0x2a2f84u: goto label_2a2f84;
        default: break;
    }

    ctx->pc = 0x2a2f3cu;

    // 0x2a2f3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f40: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2f44: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2F44u;
    {
        const bool branch_taken_0x2a2f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f44) {
            ctx->pc = 0x2A2FA0u;
            return;
        }
    }
    ctx->pc = 0x2A2F4Cu;
    // 0x2a2f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f54: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a2f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f60: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2f64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f68: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f70: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a2f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f78: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a2f7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A2F7Cu, 0x2A2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F84u;
label_2a2f84:
    // 0x2a2f84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2f88: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2a2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2a2f8c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x2a2f90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2a2f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a2f94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2f9c: 0xa4640042  sh          $a0, 0x42($v1)
    ctx->pc = 0x2a2f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2a2fa0u;
}
