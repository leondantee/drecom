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

// Function: __umoddi3
// Address: 0x11e1b0 - 0x11e6f0
void ps2___umoddi3_0x11e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___umoddi3_0x11e1b0");
#endif

    ctx->pc = 0x11e1b0u;

    // 0x11e1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e1b4: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x11e1b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11e1b8: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x11e1b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e1bc: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x11e1bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11e1c0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x11e1c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11e1c4: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x11e1c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e1c8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11e1c8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11e1cc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x11E1CCu;
    {
        const bool branch_taken_0x11e1cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1CCu;
        // 0x11e1d0: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1cc) {
            ctx->pc = 0x11E49Cu;
            goto label_11e49c;
        }
    }
    ctx->pc = 0x11E1D4u;
    // 0x11e1d4: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x11e1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e1d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11E1D8u;
    {
        const bool branch_taken_0x11e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1D8u;
        // 0x11e1dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1d8) {
            ctx->pc = 0x11E268u;
            goto label_11e268;
        }
    }
    ctx->pc = 0x11E1E0u;
    // 0x11e1e0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e1e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E1E4u;
    {
        const bool branch_taken_0x11e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1E4u;
        // 0x11e1e8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1e4) {
            ctx->pc = 0x11E200u;
            goto label_11e200;
        }
    }
    ctx->pc = 0x11E1ECu;
    // 0x11e1ec: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11e1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11e1f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e1f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E1F4u;
    {
        const bool branch_taken_0x11e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1F4u;
        // 0x11e1f8: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1f4) {
            ctx->pc = 0x11E218u;
            goto label_11e218;
        }
    }
    ctx->pc = 0x11E1FCu;
    // 0x11e1fc: 0x0  nop
    ctx->pc = 0x11e1fcu;
    // NOP
label_11e200:
    // 0x11e200: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e204: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e208: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11e20c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e210: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11e210u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11e214: 0x0  nop
    ctx->pc = 0x11e214u;
    // NOP
label_11e218:
    // 0x11e218: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e21c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e220: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
    // 0x11e224: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e228: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e22c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e230: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e234: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11e238: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E238u;
    {
        const bool branch_taken_0x11e238 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E238u;
        // 0x11e23c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e238) {
            ctx->pc = 0x11E254u;
            goto label_11e254;
        }
    }
    ctx->pc = 0x11E240u;
    // 0x11e240: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e244: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11e244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11e248: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e248u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e24c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e24cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e250: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e250u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_11e254:
    // 0x11e254: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11e254u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e258: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x11e258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e25c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x11E25Cu;
    {
        const bool branch_taken_0x11e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E25Cu;
        // 0x11e260: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e25c) {
            ctx->pc = 0x11E3E0u;
            goto label_11e3e0;
        }
    }
    ctx->pc = 0x11E264u;
    // 0x11e264: 0x0  nop
    ctx->pc = 0x11e264u;
    // NOP
label_11e268:
    // 0x11e268: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E268u;
    {
        const bool branch_taken_0x11e268 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E268u;
        // 0x11e26c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e268) {
            ctx->pc = 0x11E290u;
            goto label_11e290;
        }
    }
    ctx->pc = 0x11E270u;
    // 0x11e270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e274: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E274u;
    {
        const bool branch_taken_0x11e274 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e274) {
            ctx->pc = 0x11E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E274u;
            // 0x11e278: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E27Cu;
            goto label_11e27c;
        }
    }
    ctx->pc = 0x11E27Cu;
label_11e27c:
    // 0x11e27c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x11e27cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11e280: 0x1012  mflo        $v0
    ctx->pc = 0x11e280u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e284: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11e284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e288: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11e28c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11e290:
    // 0x11e290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E290u;
    {
        const bool branch_taken_0x11e290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E290u;
        // 0x11e294: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e290) {
            ctx->pc = 0x11E2A8u;
            goto label_11e2a8;
        }
    }
    ctx->pc = 0x11E298u;
    // 0x11e298: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11e298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11e29c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e2a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11E2A0u;
    {
        const bool branch_taken_0x11e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2A0u;
        // 0x11e2a4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2a0) {
            ctx->pc = 0x11E2C0u;
            goto label_11e2c0;
        }
    }
    ctx->pc = 0x11E2A8u;
label_11e2a8:
    // 0x11e2a8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e2ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e2b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11e2b4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e2b8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11e2b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11e2bc: 0x0  nop
    ctx->pc = 0x11e2bcu;
    // NOP
label_11e2c0:
    // 0x11e2c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e2c4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e2c8: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x11e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
    // 0x11e2cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e2d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e2d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e2d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e2dc: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11e2dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11e2e0: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E2E0u;
    {
        const bool branch_taken_0x11e2e0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2E0u;
        // 0x11e2e4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e0) {
            ctx->pc = 0x11E2F8u;
            goto label_11e2f8;
        }
    }
    ctx->pc = 0x11E2E8u;
    // 0x11e2e8: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x11e2e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x11e2ec: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e2f0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11E2F0u;
    {
        const bool branch_taken_0x11e2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F0u;
        // 0x11e2f4: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f0) {
            ctx->pc = 0x11E3D4u;
            goto label_11e3d4;
        }
    }
    ctx->pc = 0x11E2F8u;
label_11e2f8:
    // 0x11e2f8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e2fc: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e300: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e304: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e308: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e308u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e30c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e30cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e310: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e314: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x11e314u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e318: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x11e318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e31c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11e31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e320: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11e324: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E324u;
    {
        const bool branch_taken_0x11e324 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e324) {
            ctx->pc = 0x11E328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E324u;
            // 0x11e328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E32Cu;
            goto label_11e32c;
        }
    }
    ctx->pc = 0x11E32Cu;
label_11e32c:
    // 0x11e32c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11e32cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e330: 0x1012  mflo        $v0
    ctx->pc = 0x11e330u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e334: 0x1810  mfhi        $v1
    ctx->pc = 0x11e334u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e338: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e33c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e340: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e344: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x11e344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e348: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e34c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e350: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11E350u;
    {
        const bool branch_taken_0x11e350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e350) {
            ctx->pc = 0x11E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E350u;
            // 0x11e354: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E37Cu;
            goto label_11e37c;
        }
    }
    ctx->pc = 0x11E358u;
    // 0x11e358: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e35c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e360: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E360u;
    {
        const bool branch_taken_0x11e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e360) {
            ctx->pc = 0x11E364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E360u;
            // 0x11e364: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E37Cu;
            goto label_11e37c;
        }
    }
    ctx->pc = 0x11E368u;
    // 0x11e368: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e36c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E36Cu;
    {
        const bool branch_taken_0x11e36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e36c) {
            ctx->pc = 0x11E370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E36Cu;
            // 0x11e370: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E378u;
            goto label_11e378;
        }
    }
    ctx->pc = 0x11E374u;
    // 0x11e374: 0x0  nop
    ctx->pc = 0x11e374u;
    // NOP
label_11e378:
    // 0x11e378: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11e378u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11e37c:
    // 0x11e37c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11e37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11e380: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x11e380u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e384: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E384u;
    {
        const bool branch_taken_0x11e384 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e384) {
            ctx->pc = 0x11E388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E384u;
            // 0x11e388: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E38Cu;
            goto label_11e38c;
        }
    }
    ctx->pc = 0x11E38Cu;
label_11e38c:
    // 0x11e38c: 0x1012  mflo        $v0
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e390: 0x1810  mfhi        $v1
    ctx->pc = 0x11e390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e398: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e39c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e3a0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x11e3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e3a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e3a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e3ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E3ACu;
    {
        const bool branch_taken_0x11e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3ac) {
            ctx->pc = 0x11E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3ACu;
            // 0x11e3b0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3D4u;
            goto label_11e3d4;
        }
    }
    ctx->pc = 0x11E3B4u;
    // 0x11e3b4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e3b8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e3bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E3BCu;
    {
        const bool branch_taken_0x11e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3BCu;
        // 0x11e3c0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3bc) {
            ctx->pc = 0x11E3D4u;
            goto label_11e3d4;
        }
    }
    ctx->pc = 0x11E3C4u;
    // 0x11e3c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e3c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E3C8u;
    {
        const bool branch_taken_0x11e3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e3c8) {
            ctx->pc = 0x11E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3C8u;
            // 0x11e3cc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3D0u;
            goto label_11e3d0;
        }
    }
    ctx->pc = 0x11E3D0u;
label_11e3d0:
    // 0x11e3d0: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x11e3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11e3d4:
    // 0x11e3d4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x11e3d4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x11e3d8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x11e3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3dc: 0x0  nop
    ctx->pc = 0x11e3dcu;
    // NOP
label_11e3e0:
    // 0x11e3e0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11e3e4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E3E4u;
    {
        const bool branch_taken_0x11e3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3e4) {
            ctx->pc = 0x11E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3E4u;
            // 0x11e3e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3ECu;
            goto label_11e3ec;
        }
    }
    ctx->pc = 0x11E3ECu;
label_11e3ec:
    // 0x11e3ec: 0x1012  mflo        $v0
    ctx->pc = 0x11e3ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e3f0: 0x1810  mfhi        $v1
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e3f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e3f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e3fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e400: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11e400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e404: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e408: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e40c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E40Cu;
    {
        const bool branch_taken_0x11e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e40c) {
            ctx->pc = 0x11E410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E40Cu;
            // 0x11e410: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E434u;
            goto label_11e434;
        }
    }
    ctx->pc = 0x11E414u;
    // 0x11e414: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e418: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e41c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E41Cu;
    {
        const bool branch_taken_0x11e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e41c) {
            ctx->pc = 0x11E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E41Cu;
            // 0x11e420: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E434u;
            goto label_11e434;
        }
    }
    ctx->pc = 0x11E424u;
    // 0x11e424: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e428: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E428u;
    {
        const bool branch_taken_0x11e428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e428) {
            ctx->pc = 0x11E42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E428u;
            // 0x11e42c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E430u;
            goto label_11e430;
        }
    }
    ctx->pc = 0x11E430u;
label_11e430:
    // 0x11e430: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11e430u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_11e434:
    // 0x11e434: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11e434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11e438: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11e438u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e43c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E43Cu;
    {
        const bool branch_taken_0x11e43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e43c) {
            ctx->pc = 0x11E440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E43Cu;
            // 0x11e440: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E444u;
            goto label_11e444;
        }
    }
    ctx->pc = 0x11E444u;
label_11e444:
    // 0x11e444: 0x1012  mflo        $v0
    ctx->pc = 0x11e444u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e448: 0x1810  mfhi        $v1
    ctx->pc = 0x11e448u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e44c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e450: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e454: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e458: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11e458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e45c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e460: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E484u;
            goto label_11e484;
        }
    }
    ctx->pc = 0x11E46Cu;
    // 0x11e46c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e470: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E474u;
        // 0x11e478: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E484u;
            goto label_11e484;
        }
    }
    ctx->pc = 0x11E47Cu;
    // 0x11e47c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E47Cu;
    {
        const bool branch_taken_0x11e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e47c) {
            ctx->pc = 0x11E480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E47Cu;
            // 0x11e480: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E484u;
            goto label_11e484;
        }
    }
    ctx->pc = 0x11E484u;
label_11e484:
    // 0x11e484: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x11E484u;
    {
        const bool branch_taken_0x11e484 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E484u;
        // 0x11e488: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e484) {
            ctx->pc = 0x11E6E4u;
            goto label_11e6e4;
        }
    }
    ctx->pc = 0x11E48Cu;
    // 0x11e48c: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x11e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e490: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e494: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11E494u;
    {
        const bool branch_taken_0x11e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E494u;
        // 0x11e498: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e494) {
            ctx->pc = 0x11E6E0u;
            goto label_11e6e0;
        }
    }
    ctx->pc = 0x11E49Cu;
label_11e49c:
    // 0x11e49c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x11e49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e4a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E4A0u;
    {
        const bool branch_taken_0x11e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4A0u;
        // 0x11e4a4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4a0) {
            ctx->pc = 0x11E4BCu;
            goto label_11e4bc;
        }
    }
    ctx->pc = 0x11E4A8u;
    // 0x11e4a8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11e4ac: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11e4acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11e4b0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x11e4b4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11E4B4u;
    {
        const bool branch_taken_0x11e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B4u;
        // 0x11e4b8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b4) {
            ctx->pc = 0x11E6E4u;
            goto label_11e6e4;
        }
    }
    ctx->pc = 0x11E4BCu;
label_11e4bc:
    // 0x11e4bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11e4c0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11e4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e4c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E4C4u;
    {
        const bool branch_taken_0x11e4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4C4u;
        // 0x11e4c8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4c4) {
            ctx->pc = 0x11E4E0u;
            goto label_11e4e0;
        }
    }
    ctx->pc = 0x11E4CCu;
    // 0x11e4cc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x11e4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11e4d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e4d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E4D4u;
    {
        const bool branch_taken_0x11e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D4u;
        // 0x11e4d8: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d4) {
            ctx->pc = 0x11E4F8u;
            goto label_11e4f8;
        }
    }
    ctx->pc = 0x11E4DCu;
    // 0x11e4dc: 0x0  nop
    ctx->pc = 0x11e4dcu;
    // NOP
label_11e4e0:
    // 0x11e4e0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11e4e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e4e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11e4ec: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11e4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e4f0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11e4f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11e4f4: 0x0  nop
    ctx->pc = 0x11e4f4u;
    // NOP
label_11e4f8:
    // 0x11e4f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e4fc: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x11e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e500: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
    // 0x11e504: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e508: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e50c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e510: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e514: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11e518: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E518u;
    {
        const bool branch_taken_0x11e518 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E518u;
        // 0x11e51c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e518) {
            ctx->pc = 0x11E560u;
            goto label_11e560;
        }
    }
    ctx->pc = 0x11E520u;
    // 0x11e520: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11e524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E524u;
    {
        const bool branch_taken_0x11e524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E524u;
        // 0x11e528: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e524) {
            ctx->pc = 0x11E538u;
            goto label_11e538;
        }
    }
    ctx->pc = 0x11E52Cu;
    // 0x11e52c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e530: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E530u;
    {
        const bool branch_taken_0x11e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e530) {
            ctx->pc = 0x11E548u;
            goto label_11e548;
        }
    }
    ctx->pc = 0x11E538u;
label_11e538:
    // 0x11e538: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x11e538u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11e53c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e540: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11e540u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e544: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x11e544u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e548:
    // 0x11e548: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x11E548u;
    {
        const bool branch_taken_0x11e548 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E548u;
        // 0x11e54c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e548) {
            ctx->pc = 0x11E6E4u;
            goto label_11e6e4;
        }
    }
    ctx->pc = 0x11E550u;
    // 0x11e550: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11e554: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11e558: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11E558u;
    {
        const bool branch_taken_0x11e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E558u;
        // 0x11e55c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e558) {
            ctx->pc = 0x11E6E0u;
            goto label_11e6e0;
        }
    }
    ctx->pc = 0x11E560u;
label_11e560:
    // 0x11e560: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x11e560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e564: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x11e564u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e568: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e56c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e570: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e574: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e578: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11e57c: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e580: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e580u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e584: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x11e584u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11e588: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11e588u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e58c: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x11e58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11e590: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11e590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11e594: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E594u;
    {
        const bool branch_taken_0x11e594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e594) {
            ctx->pc = 0x11E598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E594u;
            // 0x11e598: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E59Cu;
            goto label_11e59c;
        }
    }
    ctx->pc = 0x11E59Cu;
label_11e59c:
    // 0x11e59c: 0x1012  mflo        $v0
    ctx->pc = 0x11e59cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e5a0: 0x1810  mfhi        $v1
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e5a4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e5ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e5b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e5b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e5b4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x11e5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e5b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e5bc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e5c0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5C0u;
            // 0x11e5c4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5F4u;
            goto label_11e5f4;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11e5cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11e5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e5d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E5D0u;
    {
        const bool branch_taken_0x11e5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D0u;
        // 0x11e5d4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d0) {
            ctx->pc = 0x11E5F0u;
            goto label_11e5f0;
        }
    }
    ctx->pc = 0x11E5D8u;
    // 0x11e5d8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e5dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5DCu;
            // 0x11e5e0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5F4u;
            goto label_11e5f4;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x11e5e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11e5ec: 0x0  nop
    ctx->pc = 0x11e5ecu;
    // NOP
label_11e5f0:
    // 0x11e5f0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_11e5f4:
    // 0x11e5f4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E5F4u;
    {
        const bool branch_taken_0x11e5f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5f4) {
            ctx->pc = 0x11E5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5F4u;
            // 0x11e5f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5FCu;
            goto label_11e5fc;
        }
    }
    ctx->pc = 0x11E5FCu;
label_11e5fc:
    // 0x11e5fc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11e5fcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e600: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11e604: 0x1012  mflo        $v0
    ctx->pc = 0x11e604u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e608: 0x1810  mfhi        $v1
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e60c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e614: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e618: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e61c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11e61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e620: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x11e620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e624: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11e624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e628: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E628u;
    {
        const bool branch_taken_0x11e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E628u;
        // 0x11e62c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e628) {
            ctx->pc = 0x11E658u;
            goto label_11e658;
        }
    }
    ctx->pc = 0x11E630u;
    // 0x11e630: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11e630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11e634: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x11e634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e638: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E638u;
    {
        const bool branch_taken_0x11e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E638u;
        // 0x11e63c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e638) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E640u;
    // 0x11e640: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11e640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E644u;
        // 0x11e648: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E658u;
            goto label_11e658;
        }
    }
    ctx->pc = 0x11E64Cu;
    // 0x11e64c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11e650: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_11e654:
    // 0x11e654: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x11e654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_11e658:
    // 0x11e658: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11e65c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e660: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e664: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x11e664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x11e668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11e66c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x11e66cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11e670: 0x3810  mfhi        $a3
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x11e674: 0x3012  mflo        $a2
    ctx->pc = 0x11e674u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11e678: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x11e678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e67c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E67Cu;
    {
        const bool branch_taken_0x11e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E67Cu;
        // 0x11e680: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e67c) {
            ctx->pc = 0x11E698u;
            goto label_11e698;
        }
    }
    ctx->pc = 0x11E684u;
    // 0x11e684: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E684u;
    {
        const bool branch_taken_0x11e684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x11E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E684u;
        // 0x11e688: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e684) {
            ctx->pc = 0x11E6A8u;
            goto label_11e6a8;
        }
    }
    ctx->pc = 0x11E68Cu;
    // 0x11e68c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E68Cu;
    {
        const bool branch_taken_0x11e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e68c) {
            ctx->pc = 0x11E6A8u;
            goto label_11e6a8;
        }
    }
    ctx->pc = 0x11E694u;
    // 0x11e694: 0x0  nop
    ctx->pc = 0x11e694u;
    // NOP
label_11e698:
    // 0x11e698: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x11e698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11e69c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e6a0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x11e6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e6a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e6a8:
    // 0x11e6a8: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x11E6A8u;
    {
        const bool branch_taken_0x11e6a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A8u;
        // 0x11e6ac: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a8) {
            ctx->pc = 0x11E6E4u;
            goto label_11e6e4;
        }
    }
    ctx->pc = 0x11E6B0u;
    // 0x11e6b0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11e6b4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e6b8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e6bc: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x11e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e6c0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e6c4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e6c8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x11e6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11e6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e6d0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11e6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11e6d4: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x11e6d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11e6d8: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x11e6d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x11e6dc: 0x0  nop
    ctx->pc = 0x11e6dcu;
    // NOP
label_11e6e0:
    // 0x11e6e0: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x11e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_11e6e4:
    // 0x11e6e4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x11e6e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E8u;
        // 0x11e6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E6F0u;
}
