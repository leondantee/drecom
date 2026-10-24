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

// Function: entry_001a6cb0
// Address: 0x1a6cb0 - 0x1a6d48
void entry_001a6cb0_0x1a6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6cb0_0x1a6cb0");
#endif

    switch (ctx->pc) {
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d44u: goto label_1a6d44;
        default: break;
    }

    ctx->pc = 0x1a6cb0u;

    // 0x1a6cb0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6cb4: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x1a6cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6cb8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6cbc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6cc0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a6cc4: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6cc8: 0x1102021  addu        $a0, $t0, $s0
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a6ccc: 0x4a040  sll         $s4, $a0, 1
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6cd0: 0x2903821  addu        $a3, $s4, $s0
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a6cd4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6cd8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6cdc: 0xac6602c4  sw          $a2, 0x2C4($v1)
    ctx->pc = 0x1a6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 6));
    // 0x1a6ce0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6ce4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6cec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6cf0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6cf4: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a6cf8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a6cfc: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x1a6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x1a6d00: 0x24a502bc  addiu       $a1, $a1, 0x2BC
    ctx->pc = 0x1a6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 700));
    // 0x1a6d04: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D04u;
    SET_GPR_U32(ctx, 31, 0x1A6D0Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D04u, 0x1A6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D0Cu;
label_1a6d0c:
    // 0x1a6d0c: 0x92270315  lbu         $a3, 0x315($s1)
    ctx->pc = 0x1a6d0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 789)));
    // 0x1a6d10: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6D48u;
            return;
        }
    }
    ctx->pc = 0x1A6D18u;
    // 0x1a6d18: 0x92230317  lbu         $v1, 0x317($s1)
    ctx->pc = 0x1a6d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 791)));
    // 0x1a6d1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6D1Cu;
    {
        const bool branch_taken_0x1a6d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d1c) {
            ctx->pc = 0x1A6D48u;
            return;
        }
    }
    ctx->pc = 0x1A6D24u;
    // 0x1a6d24: 0x104900  sll         $t1, $s0, 4
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6d28: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1a6d2c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d30: 0x24c31614  addiu       $v1, $a2, 0x1614
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5652));
    // 0x1a6d34: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6d34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6d38: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1a6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1a6d3c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D44u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D3Cu, 0x1A6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D44u;
label_1a6d44:
    // 0x1a6d44: 0x0  nop
    ctx->pc = 0x1a6d44u;
    // NOP
    ctx->pc = 0x1a6d48u;
}
