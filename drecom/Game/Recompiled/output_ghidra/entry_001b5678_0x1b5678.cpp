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

// Function: entry_001b5678
// Address: 0x1b5678 - 0x1b56d4
void entry_001b5678_0x1b5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5678_0x1b5678");
#endif

    ctx->pc = 0x1b5678u;

    // 0x1b5678: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b567c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b5680: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1b5684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b5688: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B5688u;
    {
        const bool branch_taken_0x1b5688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5688) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B5690u;
    // 0x1b5690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5694: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1b5698: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B5698u;
    {
        const bool branch_taken_0x1b5698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5698) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B56A0u;
    // 0x1b56a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b56a4: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1b56a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1b56a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b56a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b56ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b56b0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B56B0u;
    {
        const bool branch_taken_0x1b56b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b56b0) {
            ctx->pc = 0x1B5730u;
            return;
        }
    }
    ctx->pc = 0x1B56B8u;
    // 0x1b56b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b56bc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B56BCu;
    {
        const bool branch_taken_0x1b56bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b56bc) {
            ctx->pc = 0x1B56D4u;
            return;
        }
    }
    ctx->pc = 0x1B56C4u;
    // 0x1b56c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B56C4u;
    {
        const bool branch_taken_0x1b56c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56c4) {
            ctx->pc = 0x1B56D4u;
            return;
        }
    }
    ctx->pc = 0x1B56CCu;
    // 0x1b56cc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B56CCu;
    {
        const bool branch_taken_0x1b56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56cc) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B56D4u;
}
