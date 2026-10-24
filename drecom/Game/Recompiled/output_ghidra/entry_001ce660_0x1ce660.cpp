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

// Function: entry_001ce660
// Address: 0x1ce660 - 0x1ce6b4
void entry_001ce660_0x1ce660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce660_0x1ce660");
#endif

    ctx->pc = 0x1ce660u;

    // 0x1ce660: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce664: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ce664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ce668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce66c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce670: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CE670u;
    {
        const bool branch_taken_0x1ce670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce670) {
            ctx->pc = 0x1CE710u;
            return;
        }
    }
    ctx->pc = 0x1CE678u;
    // 0x1ce678: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce67c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce680: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce688: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE688u;
    {
        const bool branch_taken_0x1ce688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce688) {
            ctx->pc = 0x1CE6FCu;
            return;
        }
    }
    ctx->pc = 0x1CE690u;
    // 0x1ce690: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce694: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce698: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE698u;
    {
        const bool branch_taken_0x1ce698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce698) {
            ctx->pc = 0x1CE6B4u;
            return;
        }
    }
    ctx->pc = 0x1CE6A0u;
    // 0x1ce6a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6ac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1CE6ACu;
    {
        const bool branch_taken_0x1ce6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6ac) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE6B4u;
}
