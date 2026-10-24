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

// Function: entry_001efc04
// Address: 0x1efc04 - 0x1efc90
void entry_001efc04_0x1efc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efc04_0x1efc04");
#endif

    switch (ctx->pc) {
        case 0x1efc4cu: goto label_1efc4c;
        case 0x1efc70u: goto label_1efc70;
        default: break;
    }

    ctx->pc = 0x1efc04u;

    // 0x1efc04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1efc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1efc0c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EFC0Cu;
    {
        const bool branch_taken_0x1efc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc0c) {
            ctx->pc = 0x1EFC90u;
            return;
        }
    }
    ctx->pc = 0x1EFC14u;
    // 0x1efc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1efc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1efc20: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1efc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1efc24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc28: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1efc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1efc2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1efc30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efc34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc38: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1efc38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efc3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1efc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1efc44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFC44u;
    SET_GPR_U32(ctx, 31, 0x1EFC4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFC44u, 0x1EFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC4Cu;
label_1efc4c:
    // 0x1efc4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1efc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efc50: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1efc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1efc54: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1efc58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1efc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1efc5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1efc5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1efc60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc64: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1efc64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1efc68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFC68u;
    SET_GPR_U32(ctx, 31, 0x1EFC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFC68u, 0x1EFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC70u;
label_1efc70:
    // 0x1efc70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1efc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efc74: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1efc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1efc78: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1efc7c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1efc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1efc80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1efc80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1efc84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efc8c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1efc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1efc90u;
}
