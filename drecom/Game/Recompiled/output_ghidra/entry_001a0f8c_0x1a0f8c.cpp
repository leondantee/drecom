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

// Function: entry_001a0f8c
// Address: 0x1a0f8c - 0x1a0fd0
void entry_001a0f8c_0x1a0f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f8c_0x1a0f8c");
#endif

    ctx->pc = 0x1a0f8cu;

    // 0x1a0f8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f90: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f98: 0x30635000  andi        $v1, $v1, 0x5000
    ctx->pc = 0x1a0f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)20480);
    // 0x1a0f9c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0F9Cu;
    {
        const bool branch_taken_0x1a0f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f9c) {
            ctx->pc = 0x1A0FFCu;
            return;
        }
    }
    ctx->pc = 0x1A0FA4u;
    // 0x1a0fa4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fa8: 0x90630039  lbu         $v1, 0x39($v1)
    ctx->pc = 0x1a0fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0fac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0fb0: 0x286100b1  slti        $at, $v1, 0xB1
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1a0fb4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A0FD0u;
            return;
        }
    }
    ctx->pc = 0x1A0FBCu;
    // 0x1a0fbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fc0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0fc4: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1a0fc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fcc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a0fd0u;
}
