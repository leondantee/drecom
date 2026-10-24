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

// Function: entry_00263df0
// Address: 0x263df0 - 0x263e70
void entry_00263df0_0x263df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263df0_0x263df0");
#endif

    switch (ctx->pc) {
        case 0x263e6cu: goto label_263e6c;
        default: break;
    }

    ctx->pc = 0x263df0u;

    // 0x263df0: 0x328300c0  andi        $v1, $s4, 0xC0
    ctx->pc = 0x263df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)192);
    // 0x263df4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x263DF4u;
    {
        const bool branch_taken_0x263df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263df4) {
            ctx->pc = 0x263E70u;
            return;
        }
    }
    ctx->pc = 0x263DFCu;
    // 0x263dfc: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263dfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263e00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263e04: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x263e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x263e08: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e08) {
            ctx->pc = 0x263E70u;
            return;
        }
    }
    ctx->pc = 0x263E10u;
    // 0x263e10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263e14: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x263e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263e1c: 0x8c630a18  lw          $v1, 0xA18($v1)
    ctx->pc = 0x263e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2584)));
    // 0x263e20: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x263E20u;
    {
        const bool branch_taken_0x263e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e20) {
            ctx->pc = 0x263E70u;
            return;
        }
    }
    ctx->pc = 0x263E28u;
    // 0x263e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263e2c: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x263e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x263e30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263e34: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e3c: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x263e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x263e40: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x263e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x263e44: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x263e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x263e48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x263e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x263e4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263e50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x263e5c: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x263e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x263e60: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x263e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x263e64: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263E64u;
    SET_GPR_U32(ctx, 31, 0x263E6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263E64u, 0x263E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E6Cu;
label_263e6c:
    // 0x263e6c: 0x0  nop
    ctx->pc = 0x263e6cu;
    // NOP
    ctx->pc = 0x263e70u;
}
