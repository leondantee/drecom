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

// Function: entry_00155b70
// Address: 0x155b70 - 0x155bd0
void entry_00155b70_0x155b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155b70_0x155b70");
#endif

    ctx->pc = 0x155b70u;

    // 0x155b70: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155b74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155b78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155b7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155b80: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155b84: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155b88: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155b90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155b94: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155B94u;
    {
        const bool branch_taken_0x155b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b94) {
            ctx->pc = 0x155BD0u;
            return;
        }
    }
    ctx->pc = 0x155B9Cu;
    // 0x155b9c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x155b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155ba0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ba8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155BA8u;
    {
        const bool branch_taken_0x155ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155ba8) {
            ctx->pc = 0x155BD0u;
            return;
        }
    }
    ctx->pc = 0x155BB0u;
    // 0x155bb0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bb4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bb8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bbc: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bc0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bc4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bc8: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bcc: 0x0  nop
    ctx->pc = 0x155bccu;
    // NOP
    ctx->pc = 0x155bd0u;
}
