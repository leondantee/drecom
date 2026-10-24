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

// Function: entry_00110140
// Address: 0x110140 - 0x1101a8
void entry_00110140_0x110140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110140_0x110140");
#endif

    switch (ctx->pc) {
        case 0x110150u: goto label_110150;
        case 0x110190u: goto label_110190;
        default: break;
    }

    ctx->pc = 0x110140u;

    // 0x110140: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x110144: 0x261052c4  addiu       $s0, $s0, 0x52C4
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21188));
    // 0x110148: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110148u;
    SET_GPR_U32(ctx, 31, 0x110150u);
    ctx->pc = 0x11014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110148u;
    // 0x11014c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110150u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110150u) { return; }
    ctx->pc = 0x110150u;
label_110150:
    // 0x110150: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x110150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x110154: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x110154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
    // 0x110158: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x110158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x11015c: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x11015cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110160: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x110160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x110164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110168: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x110168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11016c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x11016cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110170: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x110174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x110178: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11017c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110180: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110184: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110188: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110188u;
    SET_GPR_U32(ctx, 31, 0x110190u);
    ctx->pc = 0x11018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110188u;
    // 0x11018c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110190u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110190u) { return; }
    ctx->pc = 0x110190u;
label_110190:
    // 0x110190: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110194: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110194u;
    {
        const bool branch_taken_0x110194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110194u;
        // 0x110198: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110194) {
            ctx->pc = 0x1101A8u;
            return;
        }
    }
    ctx->pc = 0x11019Cu;
    // 0x11019c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1101a0: 0xaea24618  sw          $v0, 0x4618($s5)
    ctx->pc = 0x1101a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 17944), GPR_U32(ctx, 2));
    // 0x1101a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1101a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1101a8u;
}
