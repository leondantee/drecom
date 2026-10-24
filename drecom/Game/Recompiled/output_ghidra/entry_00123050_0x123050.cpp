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

// Function: entry_00123050
// Address: 0x123050 - 0x1230d4
void entry_00123050_0x123050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123050_0x123050");
#endif

    ctx->pc = 0x123050u;

    // 0x123050: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x123054: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x123058: 0x2c630384  sltiu       $v1, $v1, 0x384
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
    // 0x12305c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12305Cu;
    {
        const bool branch_taken_0x12305c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12305c) {
            ctx->pc = 0x1230D4u;
            return;
        }
    }
    ctx->pc = 0x123064u;
    // 0x123064: 0x24040f00  addiu       $a0, $zero, 0xF00
    ctx->pc = 0x123064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x123068: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x123068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12306c: 0xa464122c  sh          $a0, 0x122C($v1)
    ctx->pc = 0x12306cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4652), (uint16_t)GPR_U32(ctx, 4));
    // 0x123070: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x123070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123074: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x123078: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12307c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12307cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x123080: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x123080u;
    {
        const bool branch_taken_0x123080 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x123080) {
            ctx->pc = 0x1230D4u;
            return;
        }
    }
    ctx->pc = 0x123088u;
    // 0x123088: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12308c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x123090: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x123094: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x123094u;
    {
        const bool branch_taken_0x123094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123094) {
            ctx->pc = 0x1230D4u;
            return;
        }
    }
    ctx->pc = 0x12309Cu;
    // 0x12309c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1230a0: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1230a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1230a8: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1230a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1230ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1230b0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1230b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1230b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1230b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1230b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1230bc: 0x28612711  slti        $at, $v1, 0x2711
    ctx->pc = 0x1230bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10001) ? 1 : 0);
    // 0x1230c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1230C0u;
    {
        const bool branch_taken_0x1230c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1230c0) {
            ctx->pc = 0x1230D4u;
            return;
        }
    }
    ctx->pc = 0x1230C8u;
    // 0x1230c8: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x1230c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1230cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1230d0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1230d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1230d4u;
}
