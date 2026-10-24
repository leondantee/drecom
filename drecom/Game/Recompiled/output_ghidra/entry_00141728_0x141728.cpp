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

// Function: entry_00141728
// Address: 0x141728 - 0x1417f0
void entry_00141728_0x141728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141728_0x141728");
#endif

    switch (ctx->pc) {
        case 0x1417d8u: goto label_1417d8;
        default: break;
    }

    ctx->pc = 0x141728u;

    // 0x141728: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14172c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x141730: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x141734: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141738: 0x106000f5  beqz        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x141738u;
    {
        const bool branch_taken_0x141738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141738) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x141740u;
    // 0x141740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141744: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x141748: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x14174c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x14174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x141750: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141754: 0x146000ee  bnez        $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x141754u;
    {
        const bool branch_taken_0x141754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141754) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x14175Cu;
    // 0x14175c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141760: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141764: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x141768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14176c: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x14176Cu;
    {
        const bool branch_taken_0x14176c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14176c) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x141774u;
    // 0x141774: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141778: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14177c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x141780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141784: 0x146000e2  bnez        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x141784u;
    {
        const bool branch_taken_0x141784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141784) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x14178Cu;
    // 0x14178c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141790: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141794: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x141798: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14179c: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x14179Cu;
    {
        const bool branch_taken_0x14179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14179c) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x1417A4u;
    // 0x1417a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417a8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1417ac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1417acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1417b0: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1417B0u;
    {
        const bool branch_taken_0x1417b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417b0) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x1417B8u;
    // 0x1417b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1417bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1417c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1417c4: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1417C4u;
    {
        const bool branch_taken_0x1417c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417c4) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x1417CCu;
    // 0x1417cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1417ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1417d0: 0xc055574  jal         func_1555D0
    ctx->pc = 0x1417D0u;
    SET_GPR_U32(ctx, 31, 0x1417D8u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x1417D0u, 0x1417D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417D8u;
label_1417d8:
    // 0x1417d8: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1417D8u;
    {
        const bool branch_taken_0x1417d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417d8) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x1417E0u;
    // 0x1417e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1417e4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1417e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1417e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1417ec: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1417ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1417f0u;
}
