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

// Function: entry_00353c1c
// Address: 0x353c1c - 0x353ca0
void entry_00353c1c_0x353c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353c1c_0x353c1c");
#endif

    ctx->pc = 0x353c1cu;

label_353c1c:
    // 0x353c1c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x353c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_353c20:
    // 0x353c20: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x353c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_353c24:
    // 0x353c24: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_353c28:
    // 0x353c28: 0x90e3010c  lbu         $v1, 0x10C($a3)
    ctx->pc = 0x353c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
label_353c2c:
    // 0x353c2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x353c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353c30:
    // 0x353c30: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x353c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353c34:
    // 0x353c34: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x353c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_353c38:
    // 0x353c38: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x353c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_353c3c:
    // 0x353c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353c40:
    // 0x353c40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x353c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_353c44:
    // 0x353c44: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x353c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_353c48:
    // 0x353c48: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_353c4c:
    // 0x353c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353c50:
    // 0x353c50: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x353c50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_353c54:
    // 0x353c54: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353c58:
    // 0x353c58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353c5c:
    // 0x353c5c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x353c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_353c60:
    // 0x353c60: 0x10a004eb  beqz        $a1, . + 4 + (0x4EB << 2)
label_353c64:
    if (ctx->pc == 0x353C64u) {
        ctx->pc = 0x353C68u;
        goto label_353c68;
    }
    ctx->pc = 0x353C60u;
    {
        const bool branch_taken_0x353c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c60) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x353C68u;
label_353c68:
    // 0x353c68: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353c6c:
    // 0x353c6c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x353c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_353c70:
    // 0x353c70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353c74:
    // 0x353c74: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x353c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_353c78:
    // 0x353c78: 0x102004e5  beqz        $at, . + 4 + (0x4E5 << 2)
label_353c7c:
    if (ctx->pc == 0x353C7Cu) {
        ctx->pc = 0x353C80u;
        goto label_353c80;
    }
    ctx->pc = 0x353C78u;
    {
        const bool branch_taken_0x353c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c78) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x353C80u;
label_353c80:
    // 0x353c80: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x353c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_353c84:
    // 0x353c84: 0x24852a30  addiu       $a1, $a0, 0x2A30
    ctx->pc = 0x353c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
label_353c88:
    // 0x353c88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_353c8c:
    // 0x353c8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x353c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_353c90:
    // 0x353c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353c94:
    // 0x353c94: 0x600008  jr          $v1
label_353c98:
    if (ctx->pc == 0x353C98u) {
        ctx->pc = 0x353C9Cu;
        goto label_353c9c;
    }
    ctx->pc = 0x353C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353C94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x353C9Cu;
label_353c9c:
    // 0x353c9c: 0x0  nop
    ctx->pc = 0x353c9cu;
    // NOP
    ctx->pc = 0x353ca0u;
}
