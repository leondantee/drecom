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

// Function: entry_00226f08
// Address: 0x226f08 - 0x226f94
void entry_00226f08_0x226f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226f08_0x226f08");
#endif

    switch (ctx->pc) {
        case 0x226f50u: goto label_226f50;
        case 0x226f74u: goto label_226f74;
        default: break;
    }

    ctx->pc = 0x226f08u;

    // 0x226f08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x226f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x226f10: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x226F10u;
    {
        const bool branch_taken_0x226f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f10) {
            ctx->pc = 0x226F94u;
            return;
        }
    }
    ctx->pc = 0x226F18u;
    // 0x226f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x226f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f24: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x226f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x226f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226f38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x226f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226f40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226f48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226F48u;
    SET_GPR_U32(ctx, 31, 0x226F50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226F48u, 0x226F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F50u;
label_226f50:
    // 0x226f50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x226f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x226f58: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x226f5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226f60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x226f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226f6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226F6Cu;
    SET_GPR_U32(ctx, 31, 0x226F74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226F6Cu, 0x226F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F74u;
label_226f74:
    // 0x226f74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x226f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x226f7c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x226f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x226f80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x226f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x226f84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x226f84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x226f88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226f90: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x226f90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x226f94u;
}
