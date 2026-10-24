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

// Function: entry_00108288
// Address: 0x108288 - 0x108354
void entry_00108288_0x108288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108288_0x108288");
#endif

    ctx->pc = 0x108288u;

    // 0x108288: 0x8c6a3dc8  lw          $t2, 0x3DC8($v1)
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15816)));
    // 0x10828c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x108290: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108294: 0x8e6c3d7c  lw          $t4, 0x3D7C($s3)
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15740)));
    // 0x108298: 0x8ca33dc0  lw          $v1, 0x3DC0($a1)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DC0u));
    // 0x10829c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10829cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1082a0: 0x8e4d3dac  lw          $t5, 0x3DAC($s2)
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
    // 0x1082a4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1082a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1082a8: 0x8c4b3d48  lw          $t3, 0x3D48($v0)
    ctx->pc = 0x1082a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15688)));
    // 0x1082ac: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1082b0: 0x8c883db0  lw          $t0, 0x3DB0($a0)
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383DB0u));
    // 0x1082b4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1082b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1082b8: 0xdcce4488  ld          $t6, 0x4488($a2)
    ctx->pc = 0x1082b8u;
    SET_GPR_U64(ctx, 14, FAST_READ64(0x384488u));
    // 0x1082bc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1082c0: 0xdcef4490  ld          $t7, 0x4490($a3)
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 15, FAST_READ64(0x384490u));
    // 0x1082c4: 0x25303de8  addiu       $s0, $t1, 0x3DE8
    ctx->pc = 0x1082c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 15848));
    // 0x1082c8: 0xaf0c002c  sw          $t4, 0x2C($t8)
    ctx->pc = 0x1082c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 12));
    // 0x1082cc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1082ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1082d0: 0xaf0d0030  sw          $t5, 0x30($t8)
    ctx->pc = 0x1082d0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 13));
    // 0x1082d4: 0x26323df8  addiu       $s2, $s1, 0x3DF8
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 15864));
    // 0x1082d8: 0xaf0b0034  sw          $t3, 0x34($t8)
    ctx->pc = 0x1082d8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 11));
    // 0x1082dc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1082dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082e0: 0xaf0a0038  sw          $t2, 0x38($t8)
    ctx->pc = 0x1082e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 10));
    // 0x1082e4: 0xaf08003c  sw          $t0, 0x3C($t8)
    ctx->pc = 0x1082e4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 8));
    // 0x1082e8: 0xaf030040  sw          $v1, 0x40($t8)
    ctx->pc = 0x1082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 3));
    // 0x1082ec: 0xaf000028  sw          $zero, 0x28($t8)
    ctx->pc = 0x1082ecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 0));
    // 0x1082f0: 0x8c873d70  lw          $a3, 0x3D70($a0)
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383D70u));
    // 0x1082f4: 0x8d233de8  lw          $v1, 0x3DE8($t1)
    ctx->pc = 0x1082f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DE8u));
    // 0x1082f8: 0x8ca63d74  lw          $a2, 0x3D74($a1)
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D74u));
    // 0x1082fc: 0xaf030044  sw          $v1, 0x44($t8)
    ctx->pc = 0x1082fcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 3));
    // 0x108300: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108304: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DECu));
    // 0x108308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10830c: 0xaf040048  sw          $a0, 0x48($t8)
    ctx->pc = 0x10830cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 4));
    // 0x108310: 0xff0e0018  sd          $t6, 0x18($t8)
    ctx->pc = 0x108310u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 14));
    // 0x108314: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x108314u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DF0u));
    // 0x108318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10831c: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x10831cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
    // 0x108320: 0xff0f0020  sd          $t7, 0x20($t8)
    ctx->pc = 0x108320u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 15));
    // 0x108324: 0x8e243df8  lw          $a0, 0x3DF8($s1)
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DF8u));
    // 0x108328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10832c: 0xaf040050  sw          $a0, 0x50($t8)
    ctx->pc = 0x10832cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 80), GPR_U32(ctx, 4));
    // 0x108330: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x108330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DFCu));
    // 0x108334: 0xaf030054  sw          $v1, 0x54($t8)
    ctx->pc = 0x108334u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 84), GPR_U32(ctx, 3));
    // 0x108338: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x108338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383E00u));
    // 0x10833c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10833cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108340: 0xaf060060  sw          $a2, 0x60($t8)
    ctx->pc = 0x108340u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 6));
    // 0x108344: 0xaf040058  sw          $a0, 0x58($t8)
    ctx->pc = 0x108344u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 88), GPR_U32(ctx, 4));
    // 0x108348: 0xaf07005c  sw          $a3, 0x5C($t8)
    ctx->pc = 0x108348u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 92), GPR_U32(ctx, 7));
    // 0x10834c: 0x3e00008  jr          $ra
    ctx->pc = 0x10834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10834Cu;
        // 0x108350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108354u;
}
