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

// Function: entry_00320b9c
// Address: 0x320b9c - 0x320c48
void entry_00320b9c_0x320b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320b9c_0x320b9c");
#endif

    ctx->pc = 0x320b9cu;

    // 0x320b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ba0: 0x90910346  lbu         $s1, 0x346($a0)
    ctx->pc = 0x320ba0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320ba4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x320ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x320ba8: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x320ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x320bac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bb0: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x320bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x320bb4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x320bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320bb8: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x320bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x320bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bc0: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x320bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320bc4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x320bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320bc8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x320bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x320bcc: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x320bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x320bd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320bd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bd8: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320bdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320be0: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320be4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320be8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x320bec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bf0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x320bf4: 0x78700000  lq          $s0, 0x0($v1)
    ctx->pc = 0x320bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bfc: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320c00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c04: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x320c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x320c08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x320c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x320c10: 0x24660480  addiu       $a2, $v1, 0x480
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320c14: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x320c14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x320c18: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c1c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x320c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x320c20: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x320c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c28: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x320c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x320c2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c30: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x320c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320c34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320C34u;
    {
        const bool branch_taken_0x320c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320c34) {
            ctx->pc = 0x320C48u;
            return;
        }
    }
    ctx->pc = 0x320C3Cu;
    // 0x320c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c44: 0xa0850abc  sb          $a1, 0xABC($a0)
    ctx->pc = 0x320c44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2748), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x320c48u;
}
