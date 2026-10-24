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

// Function: entry_0010c188
// Address: 0x10c188 - 0x10c204
void entry_0010c188_0x10c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c188_0x10c188");
#endif

    switch (ctx->pc) {
        case 0x10c1acu: goto label_10c1ac;
        case 0x10c1fcu: goto label_10c1fc;
        default: break;
    }

    ctx->pc = 0x10c188u;

label_10c188:
    // 0x10c188: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x10c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x10c18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c190: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x10c190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x10c194: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x10c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10c198: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x10c198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x10c19c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10c19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10c1a0: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x10c1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c1a4: 0xc046314  jal         func_118C50
    ctx->pc = 0x10C1A4u;
    SET_GPR_U32(ctx, 31, 0x10C1ACu);
    ctx->pc = 0x10C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1A4u;
    // 0x10c1a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x10C1ACu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C1ACu) { return; }
    ctx->pc = 0x10C1ACu;
label_10c1ac:
    // 0x10c1ac: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x10c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x10c1b0: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x10C1B0u;
    {
        const bool branch_taken_0x10c1b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x10C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1B0u;
        // 0x10c1b4: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1b0) {
            ctx->pc = 0x10C188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c188;
        }
    }
    ctx->pc = 0x10C1B8u;
    // 0x10c1b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10c1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c1bc: 0x26f03b00  addiu       $s0, $s7, 0x3B00
    ctx->pc = 0x10c1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 15104));
    // 0x10c1c0: 0xaef13b00  sw          $s1, 0x3B00($s7)
    ctx->pc = 0x10c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15104), GPR_U32(ctx, 17));
    // 0x10c1c4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10c1c8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x10c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x10c1cc: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10c1d0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x10c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x10c1d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c1d8: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x10c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x10c1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10c1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c1e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10c1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c1ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10c1ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1f0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10c1f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c1f4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10C1F4u;
    SET_GPR_U32(ctx, 31, 0x10C1FCu);
    ctx->pc = 0x10C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1F4u;
    // 0x10c1f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10C1FCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C1FCu) { return; }
    ctx->pc = 0x10C1FCu;
label_10c1fc:
    // 0x10c1fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1FCu;
    {
        const bool branch_taken_0x10c1fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1FCu;
        // 0x10c200: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1fc) {
            ctx->pc = 0x10C20Cu;
            return;
        }
    }
    ctx->pc = 0x10C204u;
}
