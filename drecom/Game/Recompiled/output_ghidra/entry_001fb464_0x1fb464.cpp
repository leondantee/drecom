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

// Function: entry_001fb464
// Address: 0x1fb464 - 0x1fb510
void entry_001fb464_0x1fb464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb464_0x1fb464");
#endif

    ctx->pc = 0x1fb464u;

    // 0x1fb464: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb468: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x1fb468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb470: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x1fb470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb478: 0x90620348  lbu         $v0, 0x348($v1)
    ctx->pc = 0x1fb478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb47c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb480: 0xa0620348  sb          $v0, 0x348($v1)
    ctx->pc = 0x1fb480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb484: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb488: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x1fb488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb490: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fb494: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1fb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fb498: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb49c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4a0: 0xa043034b  sb          $v1, 0x34B($v0)
    ctx->pc = 0x1fb4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb4a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4a8: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fb4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fb4ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb4b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb4b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb4bc: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1fb4bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb4c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4c4: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fb4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb4d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb4d8: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1fb4dc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fb4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fb4e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4e4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fb4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fb4e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4f0: 0x90820346  lbu         $v0, 0x346($a0)
    ctx->pc = 0x1fb4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fb4f4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1fb4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4f8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1fb4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb4fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB4FCu;
    {
        const bool branch_taken_0x1fb4fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4fc) {
            ctx->pc = 0x1FB510u;
            return;
        }
    }
    ctx->pc = 0x1FB504u;
    // 0x1fb504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb50c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1fb510u;
}
