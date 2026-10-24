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

// Function: entry_001e7480
// Address: 0x1e7480 - 0x1e7508
void entry_001e7480_0x1e7480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7480_0x1e7480");
#endif

    ctx->pc = 0x1e7480u;

    // 0x1e7480: 0x27c6ffff  addiu       $a2, $fp, -0x1
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e7484: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x1e7484u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7488: 0x14c0fdcd  bnez        $a2, . + 4 + (-0x233 << 2)
    ctx->pc = 0x1E7488u;
    {
        const bool branch_taken_0x1e7488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7488) {
            ctx->pc = 0x1E6BC0u;
            return;
        }
    }
    ctx->pc = 0x1E7490u;
    // 0x1e7490: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E7490u;
    {
        const bool branch_taken_0x1e7490 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7490) {
            ctx->pc = 0x1E7508u;
            return;
        }
    }
    ctx->pc = 0x1E7498u;
    // 0x1e7498: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e749c: 0xd32021  addu        $a0, $a2, $s3
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1e74a0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1e74a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e74a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e74a8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e74a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e74ac: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1e74acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1e74b0: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x1e74b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e74b4: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74b8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e74bc: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1e74bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1e74c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e74c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e74c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1e74c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e74c8: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1e74cc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1e74ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1e74d0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e74d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e74d4: 0x8fa50a48  lw          $a1, 0xA48($sp)
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e74d8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1e74d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1e74dc: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e74e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e74e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e74ec: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e74f0: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1e74f4: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x1e74f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e74f8: 0x8fa50a28  lw          $a1, 0xA28($sp)
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74fc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1e74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1e7500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7500u;
    {
        const bool branch_taken_0x1e7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7500) {
            ctx->pc = 0x1E7524u;
            return;
        }
    }
    ctx->pc = 0x1E7508u;
}
