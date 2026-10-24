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

// Function: entry_001a0ed8
// Address: 0x1a0ed8 - 0x1a0f60
void entry_001a0ed8_0x1a0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ed8_0x1a0ed8");
#endif

    ctx->pc = 0x1a0ed8u;

    // 0x1a0ed8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0edc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1a0edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ee0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ee4: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x1a0ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0ee8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1a0ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a0eec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0ef0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a0ef4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1a0ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1a0ef8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0efc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a0efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a0f00: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f08: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0f0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f10: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a0f14: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A0F14u;
    {
        const bool branch_taken_0x1a0f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f14) {
            ctx->pc = 0x1A0FFCu;
            return;
        }
    }
    ctx->pc = 0x1A0F1Cu;
    // 0x1a0f1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f20: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f28: 0x3063a000  andi        $v1, $v1, 0xA000
    ctx->pc = 0x1a0f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)40960);
    // 0x1a0f2c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0F2Cu;
    {
        const bool branch_taken_0x1a0f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f2c) {
            ctx->pc = 0x1A0F8Cu;
            return;
        }
    }
    ctx->pc = 0x1A0F34u;
    // 0x1a0f34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f38: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x1a0f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0f3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0f40: 0x286100b1  slti        $at, $v1, 0xB1
    ctx->pc = 0x1a0f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1a0f44: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F44u;
    {
        const bool branch_taken_0x1a0f44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f44) {
            ctx->pc = 0x1A0F60u;
            return;
        }
    }
    ctx->pc = 0x1A0F4Cu;
    // 0x1a0f4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f54: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1a0f58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f5c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a0f60u;
}
