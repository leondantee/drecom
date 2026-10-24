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

// Function: entry_001cee3c
// Address: 0x1cee3c - 0x1ceed4
void entry_001cee3c_0x1cee3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cee3c_0x1cee3c");
#endif

    ctx->pc = 0x1cee3cu;

    // 0x1cee3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee40: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1cee40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1cee44: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cee48: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1cee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1cee4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CEE4Cu;
    {
        const bool branch_taken_0x1cee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee4c) {
            ctx->pc = 0x1CEED4u;
            return;
        }
    }
    ctx->pc = 0x1CEE54u;
    // 0x1cee54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cee54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cee58: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cee5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cee60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cee64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cee68: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cee68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cee6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cee70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee74: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1cee74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cee78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee7c: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1cee80: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CEE80u;
    {
        const bool branch_taken_0x1cee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cee80) {
            ctx->pc = 0x1CEED4u;
            return;
        }
    }
    ctx->pc = 0x1CEE88u;
    // 0x1cee88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cee8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee90: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cee90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cee94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee98: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cee9c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEE9Cu;
    {
        const bool branch_taken_0x1cee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cee9c) {
            ctx->pc = 0x1CEED4u;
            return;
        }
    }
    ctx->pc = 0x1CEEA4u;
    // 0x1ceea4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceea8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1ceeac: 0x2462ff6a  addiu       $v0, $v1, -0x96
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1ceeb0: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1ceeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ceeb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceeb8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1ceebc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ceebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ceec0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ceec0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ceec4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEEC4u;
    {
        const bool branch_taken_0x1ceec4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ceec4) {
            ctx->pc = 0x1CEED4u;
            return;
        }
    }
    ctx->pc = 0x1CEECCu;
    // 0x1ceecc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceed0: 0xa48015ec  sh          $zero, 0x15EC($a0)
    ctx->pc = 0x1ceed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ceed4u;
}
