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

// Function: entry_002ce8c0
// Address: 0x2ce8c0 - 0x2ce930
void entry_002ce8c0_0x2ce8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce8c0_0x2ce8c0");
#endif

    ctx->pc = 0x2ce8c0u;

    // 0x2ce8c0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2ce8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce8c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ce8c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce8cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CE8CCu;
    {
        const bool branch_taken_0x2ce8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8cc) {
            ctx->pc = 0x2CE930u;
            return;
        }
    }
    ctx->pc = 0x2CE8D4u;
    // 0x2ce8d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2ce8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2ce8d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ce8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ce8dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce8e0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CE8E0u;
    {
        const bool branch_taken_0x2ce8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8e0) {
            ctx->pc = 0x2CE930u;
            return;
        }
    }
    ctx->pc = 0x2CE8E8u;
    // 0x2ce8e8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2ce8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2ce8ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ce8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ce8f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ce8f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce8f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE8F8u;
    {
        const bool branch_taken_0x2ce8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8f8) {
            ctx->pc = 0x2CE930u;
            return;
        }
    }
    ctx->pc = 0x2CE900u;
    // 0x2ce900: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x2ce900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2ce904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ce904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ce908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ce908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ce90c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE90Cu;
    {
        const bool branch_taken_0x2ce90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ce90c) {
            ctx->pc = 0x2CE930u;
            return;
        }
    }
    ctx->pc = 0x2CE914u;
    // 0x2ce914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce918: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x2ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2ce91c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ce91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ce920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ce924: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2ce924u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2ce928: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ce928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce92c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ce92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x2ce930u;
}
