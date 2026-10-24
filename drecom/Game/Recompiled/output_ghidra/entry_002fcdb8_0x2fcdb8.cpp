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

// Function: entry_002fcdb8
// Address: 0x2fcdb8 - 0x2fcdf0
void entry_002fcdb8_0x2fcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcdb8_0x2fcdb8");
#endif

    ctx->pc = 0x2fcdb8u;

    // 0x2fcdb8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdbc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fcdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fcdc0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCDC0u;
    {
        const bool branch_taken_0x2fcdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcdc0) {
            ctx->pc = 0x2FCE18u;
            return;
        }
    }
    ctx->pc = 0x2FCDC8u;
    // 0x2fcdc8: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fcdc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdcc: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x2fcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x2fcdd0: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2fcdd0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcdd4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fcdd8: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2fcdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fcddc: 0x12440004  beq         $s2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDDCu;
    {
        const bool branch_taken_0x2fcddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fcddc) {
            ctx->pc = 0x2FCDF0u;
            return;
        }
    }
    ctx->pc = 0x2FCDE4u;
    // 0x2fcde4: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x2fcde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x2fcde8: 0x34660008  ori         $a2, $v1, 0x8
    ctx->pc = 0x2fcde8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2fcdec: 0xae460b18  sw          $a2, 0xB18($s2)
    ctx->pc = 0x2fcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 6));
    ctx->pc = 0x2fcdf0u;
}
