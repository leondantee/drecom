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

// Function: entry_00110b80
// Address: 0x110b80 - 0x110be8
void entry_00110b80_0x110b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110b80_0x110b80");
#endif

    switch (ctx->pc) {
        case 0x110b90u: goto label_110b90;
        case 0x110bd0u: goto label_110bd0;
        default: break;
    }

    ctx->pc = 0x110b80u;

    // 0x110b80: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x110b84: 0x261052c4  addiu       $s0, $s0, 0x52C4
    ctx->pc = 0x110b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21188));
    // 0x110b88: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110B88u;
    SET_GPR_U32(ctx, 31, 0x110B90u);
    ctx->pc = 0x110B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B88u;
    // 0x110b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110B90u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110B90u) { return; }
    ctx->pc = 0x110B90u;
label_110b90:
    // 0x110b90: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x110b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x110b94: 0xae12ffec  sw          $s2, -0x14($s0)
    ctx->pc = 0x110b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 18));
    // 0x110b98: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x110b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x110b9c: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110ba0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x110ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x110ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ba8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x110ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x110bac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x110bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bb0: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110bb4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x110bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x110bb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110bbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110bc0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110bc4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110bc8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110BC8u;
    SET_GPR_U32(ctx, 31, 0x110BD0u);
    ctx->pc = 0x110BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BC8u;
    // 0x110bcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110BD0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110BD0u) { return; }
    ctx->pc = 0x110BD0u;
label_110bd0:
    // 0x110bd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110bd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110BD4u;
    {
        const bool branch_taken_0x110bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BD4u;
        // 0x110bd8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bd4) {
            ctx->pc = 0x110BE8u;
            return;
        }
    }
    ctx->pc = 0x110BDCu;
    // 0x110bdc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x110bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x110be0: 0xae824618  sw          $v0, 0x4618($s4)
    ctx->pc = 0x110be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17944), GPR_U32(ctx, 2));
    // 0x110be4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110be8u;
}
