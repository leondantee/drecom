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

// Function: entry_00124858
// Address: 0x124858 - 0x1248b0
void entry_00124858_0x124858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124858_0x124858");
#endif

    ctx->pc = 0x124858u;

    // 0x124858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12485c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124860: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124864: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124868: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x124868u;
    {
        const bool branch_taken_0x124868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124868) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x124870u;
    // 0x124870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124874: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124878: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12487c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x12487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124880: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x124880u;
    {
        const bool branch_taken_0x124880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124880) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x124888u;
    // 0x124888: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12488c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124890: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124890u;
    {
        const bool branch_taken_0x124890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124890) {
            ctx->pc = 0x1248B0u;
            return;
        }
    }
    ctx->pc = 0x124898u;
    // 0x124898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12489c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12489cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1248a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1248a4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1248a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1248a8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1248A8u;
    {
        const bool branch_taken_0x1248a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248a8) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x1248B0u;
}
