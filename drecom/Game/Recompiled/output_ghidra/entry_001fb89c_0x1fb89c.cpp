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

// Function: entry_001fb89c
// Address: 0x1fb89c - 0x1fb948
void entry_001fb89c_0x1fb89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb89c_0x1fb89c");
#endif

    ctx->pc = 0x1fb89cu;

    // 0x1fb89c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8a0: 0x90460346  lbu         $a2, 0x346($v0)
    ctx->pc = 0x1fb8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fb8a4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fb8a8: 0xa0440346  sb          $a0, 0x346($v0)
    ctx->pc = 0x1fb8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb8ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8b0: 0x90430348  lbu         $v1, 0x348($v0)
    ctx->pc = 0x1fb8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb8b8: 0xa0430348  sb          $v1, 0x348($v0)
    ctx->pc = 0x1fb8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb8bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8c0: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x1fb8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb8c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb8c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1fb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fb8cc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1fb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fb8d0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1fb8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb8d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8d8: 0xa045034b  sb          $a1, 0x34B($v0)
    ctx->pc = 0x1fb8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb8dc: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8e0: 0x92300346  lbu         $s0, 0x346($s1)
    ctx->pc = 0x1fb8e0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 838)));
    // 0x1fb8e4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1fb8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1fb8e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb8ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb8f4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1fb8f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8fc: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fb8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb90c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb910: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb914: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1fb914u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1fb918: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb91c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fb91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fb920: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb924: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb928: 0x90700347  lbu         $s0, 0x347($v1)
    ctx->pc = 0x1fb928u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fb92c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1fb92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1fb930: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1fb930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb934: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB934u;
    {
        const bool branch_taken_0x1fb934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb934) {
            ctx->pc = 0x1FB948u;
            return;
        }
    }
    ctx->pc = 0x1FB93Cu;
    // 0x1fb93c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb944: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1fb948u;
}
