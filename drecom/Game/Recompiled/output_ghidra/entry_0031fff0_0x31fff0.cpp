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

// Function: entry_0031fff0
// Address: 0x31fff0 - 0x32004c
void entry_0031fff0_0x31fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fff0_0x31fff0");
#endif

    ctx->pc = 0x31fff0u;

    // 0x31fff0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fff4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fff8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fffc: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x31fffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x320000: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x320000u;
    {
        const bool branch_taken_0x320000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320000) {
            ctx->pc = 0x31FF40u;
            return;
        }
    }
    ctx->pc = 0x320008u;
    // 0x320008: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32000c: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x32000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x320010: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x320010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320014: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x320014u;
    {
        const bool branch_taken_0x320014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x320014) {
            ctx->pc = 0x32004Cu;
            return;
        }
    }
    ctx->pc = 0x32001Cu;
    // 0x32001c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320020: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x320020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320024: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x320024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320028: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32002c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x32002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x320030: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x320030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320034: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x320034u;
    {
        const bool branch_taken_0x320034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320034) {
            ctx->pc = 0x32004Cu;
            return;
        }
    }
    ctx->pc = 0x32003Cu;
    // 0x32003c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320040: 0x8ca30b18  lw          $v1, 0xB18($a1)
    ctx->pc = 0x320040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x320044: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x320044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x320048: 0xaca40b18  sw          $a0, 0xB18($a1)
    ctx->pc = 0x320048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 4));
    ctx->pc = 0x32004cu;
}
