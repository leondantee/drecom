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

// Function: entry_00333fc8
// Address: 0x333fc8 - 0x334060
void entry_00333fc8_0x333fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333fc8_0x333fc8");
#endif

    ctx->pc = 0x333fc8u;

    // 0x333fc8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x333fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x333fcc: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x333fd0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x333fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333fd4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x333fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x333fd8: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x333fdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333fe0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x333fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x333fe4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x333fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x333fe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x333fec: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x333fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x333ff0: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x333ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x333ff4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333ff8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x333ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x333ffc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334000: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334004: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334008: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33400c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334010: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334014: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x334014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x334018: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x33401c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33401cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x334020: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x334020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334024: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x334024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334028: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x334028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33402c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334030: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x334030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x334034: 0x244300a4  addiu       $v1, $v0, 0xA4
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x334038: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33403c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x33403cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x334040: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x334040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334044: 0x286100a6  slti        $at, $v1, 0xA6
    ctx->pc = 0x334044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)166) ? 1 : 0);
    // 0x334048: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x334048u;
    {
        const bool branch_taken_0x334048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x334048) {
            ctx->pc = 0x334060u;
            return;
        }
    }
    ctx->pc = 0x334050u;
    // 0x334050: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334054: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x334054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x334058: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x334058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x33405c: 0x0  nop
    ctx->pc = 0x33405cu;
    // NOP
    ctx->pc = 0x334060u;
}
