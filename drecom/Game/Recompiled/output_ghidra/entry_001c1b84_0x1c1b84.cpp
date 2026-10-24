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

// Function: entry_001c1b84
// Address: 0x1c1b84 - 0x1c1be0
void entry_001c1b84_0x1c1b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b84_0x1c1b84");
#endif

    ctx->pc = 0x1c1b84u;

    // 0x1c1b84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1b88: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1b8c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1b90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1b94: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C1B94u;
    {
        const bool branch_taken_0x1c1b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b94) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1B9Cu;
    // 0x1c1b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ba0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c1ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1c1ba4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C1BA4u;
    {
        const bool branch_taken_0x1c1ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ba4) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1BACu;
    // 0x1c1bac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1bb0: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1c1bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1c1bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1bbc: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C1BBCu;
    {
        const bool branch_taken_0x1c1bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1bbc) {
            ctx->pc = 0x1C1C3Cu;
            return;
        }
    }
    ctx->pc = 0x1C1BC4u;
    // 0x1c1bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1bc8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1BC8u;
    {
        const bool branch_taken_0x1c1bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1bc8) {
            ctx->pc = 0x1C1BE0u;
            return;
        }
    }
    ctx->pc = 0x1C1BD0u;
    // 0x1c1bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            return;
        }
    }
    ctx->pc = 0x1C1BD8u;
    // 0x1c1bd8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1BE0u;
}
