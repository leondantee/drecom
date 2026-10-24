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

// Function: entry_001871c4
// Address: 0x1871c4 - 0x187220
void entry_001871c4_0x1871c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001871c4_0x1871c4");
#endif

    ctx->pc = 0x1871c4u;

    // 0x1871c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1871c8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1871cc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1871ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1871d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1871d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1871d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1871d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1871d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1871dc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1871dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1871e0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1871e4: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1871e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1871ec: 0x8c850158  lw          $a1, 0x158($a0)
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1871f0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1871f4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1871f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1871f8: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x1871f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1871fc: 0xac830158  sw          $v1, 0x158($a0)
    ctx->pc = 0x1871fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 3));
    // 0x187200: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x187204: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x187208: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187208u;
    {
        const bool branch_taken_0x187208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187208) {
            ctx->pc = 0x187220u;
            return;
        }
    }
    ctx->pc = 0x187210u;
    // 0x187210: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x187214: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x187218: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x187218u;
    {
        const bool branch_taken_0x187218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187218) {
            ctx->pc = 0x187258u;
            return;
        }
    }
    ctx->pc = 0x187220u;
}
