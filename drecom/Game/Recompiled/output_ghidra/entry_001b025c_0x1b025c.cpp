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

// Function: entry_001b025c
// Address: 0x1b025c - 0x1b02b8
void entry_001b025c_0x1b025c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b025c_0x1b025c");
#endif

    ctx->pc = 0x1b025cu;

    // 0x1b025c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0260: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b0260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0264: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0330u;
            return;
        }
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0x8ee40a68  lw          $a0, 0xA68($s7)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b0270: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0274: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b0274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1b0278: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b027c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b027cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0280: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0284: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b0288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b028c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0290: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b0290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b0294: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b0294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0298: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b029c: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b029cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b02a0: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02a4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b02a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b02a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b02a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b02ac: 0xa7a304be  sh          $v1, 0x4BE($sp)
    ctx->pc = 0x1b02acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1214), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b02b0: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b02b0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b02b4: 0xafa004ac  sw          $zero, 0x4AC($sp)
    ctx->pc = 0x1b02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 0));
    ctx->pc = 0x1b02b8u;
}
