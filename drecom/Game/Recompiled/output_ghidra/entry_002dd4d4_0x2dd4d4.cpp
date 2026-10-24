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

// Function: entry_002dd4d4
// Address: 0x2dd4d4 - 0x2dd510
void entry_002dd4d4_0x2dd4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd4d4_0x2dd4d4");
#endif

    ctx->pc = 0x2dd4d4u;

    // 0x2dd4d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd4d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dd4dc: 0x1060023a  beqz        $v1, . + 4 + (0x23A << 2)
    ctx->pc = 0x2DD4DCu;
    {
        const bool branch_taken_0x2dd4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4dc) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD4E4u;
    // 0x2dd4e4: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dd4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dd4e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dd4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dd4ec: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dd4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dd4f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD4F0u;
    {
        const bool branch_taken_0x2dd4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4f0) {
            ctx->pc = 0x2DD510u;
            return;
        }
    }
    ctx->pc = 0x2DD4F8u;
    // 0x2dd4f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd4fc: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2dd4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2dd500: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2dd500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dd504: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2dd504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd508: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x2DD508u;
    {
        const bool branch_taken_0x2dd508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd508) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD510u;
}
