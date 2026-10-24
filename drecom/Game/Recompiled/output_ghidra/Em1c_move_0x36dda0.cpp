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

// Function: Em1c_move
// Address: 0x36dda0 - 0x36de6c
void Em1c_move_0x36dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_move_0x36dda0");
#endif

    switch (ctx->pc) {
        case 0x36dda0u: goto label_36dda0;
        case 0x36dda4u: goto label_36dda4;
        case 0x36dda8u: goto label_36dda8;
        case 0x36ddacu: goto label_36ddac;
        case 0x36ddb0u: goto label_36ddb0;
        case 0x36ddb4u: goto label_36ddb4;
        case 0x36ddb8u: goto label_36ddb8;
        case 0x36ddbcu: goto label_36ddbc;
        case 0x36ddc0u: goto label_36ddc0;
        case 0x36ddc4u: goto label_36ddc4;
        case 0x36ddc8u: goto label_36ddc8;
        case 0x36ddccu: goto label_36ddcc;
        case 0x36ddd0u: goto label_36ddd0;
        case 0x36ddd4u: goto label_36ddd4;
        case 0x36ddd8u: goto label_36ddd8;
        case 0x36dddcu: goto label_36dddc;
        case 0x36dde0u: goto label_36dde0;
        case 0x36dde4u: goto label_36dde4;
        case 0x36dde8u: goto label_36dde8;
        case 0x36ddecu: goto label_36ddec;
        case 0x36ddf0u: goto label_36ddf0;
        case 0x36ddf4u: goto label_36ddf4;
        case 0x36ddf8u: goto label_36ddf8;
        case 0x36ddfcu: goto label_36ddfc;
        case 0x36de00u: goto label_36de00;
        case 0x36de04u: goto label_36de04;
        case 0x36de08u: goto label_36de08;
        case 0x36de0cu: goto label_36de0c;
        case 0x36de10u: goto label_36de10;
        case 0x36de14u: goto label_36de14;
        case 0x36de18u: goto label_36de18;
        case 0x36de1cu: goto label_36de1c;
        case 0x36de20u: goto label_36de20;
        case 0x36de24u: goto label_36de24;
        case 0x36de28u: goto label_36de28;
        case 0x36de2cu: goto label_36de2c;
        case 0x36de30u: goto label_36de30;
        case 0x36de34u: goto label_36de34;
        case 0x36de38u: goto label_36de38;
        case 0x36de3cu: goto label_36de3c;
        case 0x36de40u: goto label_36de40;
        case 0x36de44u: goto label_36de44;
        case 0x36de48u: goto label_36de48;
        case 0x36de4cu: goto label_36de4c;
        case 0x36de50u: goto label_36de50;
        case 0x36de54u: goto label_36de54;
        case 0x36de58u: goto label_36de58;
        case 0x36de5cu: goto label_36de5c;
        case 0x36de60u: goto label_36de60;
        case 0x36de64u: goto label_36de64;
        case 0x36de68u: goto label_36de68;
        default: break;
    }

    ctx->pc = 0x36dda0u;

label_36dda0:
    // 0x36dda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36dda4:
    // 0x36dda4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_36dda8:
    // 0x36dda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ddac:
    // 0x36ddac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_36ddb0:
    // 0x36ddb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36ddb4:
    // 0x36ddb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36ddb8:
    // 0x36ddb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x36ddb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_36ddbc:
    // 0x36ddbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36ddc0:
    // 0x36ddc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36ddc4:
    // 0x36ddc4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36ddc8:
    // 0x36ddc8: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x36ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
label_36ddcc:
    // 0x36ddcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36ddd0:
    // 0x36ddd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36ddd4:
    // 0x36ddd4: 0x40f809  jalr        $v0
label_36ddd8:
    if (ctx->pc == 0x36DDD8u) {
        ctx->pc = 0x36DDDCu;
        goto label_36dddc;
    }
    ctx->pc = 0x36DDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36DDDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DDD4u, 0x36DDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36DDDCu;
label_36dddc:
    // 0x36dddc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36dde0:
    // 0x36dde0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_36dde4:
    // 0x36dde4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x36dde4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36dde8:
    // 0x36dde8: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x36dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_36ddec:
    // 0x36ddec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x36ddecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_36ddf0:
    // 0x36ddf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36ddf4:
    // 0x36ddf4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x36ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_36ddf8:
    // 0x36ddf8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x36ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_36ddfc:
    // 0x36ddfc: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x36ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_36de00:
    // 0x36de00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x36de00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_36de04:
    // 0x36de04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de08:
    // 0x36de08: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x36de08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_36de0c:
    // 0x36de0c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x36de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_36de10:
    // 0x36de10: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x36de10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_36de14:
    // 0x36de14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de18:
    // 0x36de18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36de18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_36de1c:
    // 0x36de1c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x36de1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_36de20:
    // 0x36de20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de24:
    // 0x36de24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36de24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_36de28:
    // 0x36de28: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x36de28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_36de2c:
    // 0x36de2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de30:
    // 0x36de30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x36de30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_36de34:
    // 0x36de34: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x36de34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_36de38:
    // 0x36de38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de3c:
    // 0x36de3c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x36de3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_36de40:
    // 0x36de40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x36de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36de44:
    // 0x36de44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de48:
    // 0x36de48: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36de48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_36de4c:
    // 0x36de4c: 0x9604000e  lhu         $a0, 0xE($s0)
    ctx->pc = 0x36de4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_36de50:
    // 0x36de50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36de54:
    // 0x36de54: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x36de54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_36de58:
    // 0x36de58: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36de58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36de5c:
    // 0x36de5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36de5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36de60:
    // 0x36de60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36de64:
    // 0x36de64: 0x3e00008  jr          $ra
label_36de68:
    if (ctx->pc == 0x36DE68u) {
        ctx->pc = 0x36DE6Cu;
        goto label_fallthrough_0x36de64;
    }
    ctx->pc = 0x36DE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36de64:
    ctx->pc = 0x36DE6Cu;
}
