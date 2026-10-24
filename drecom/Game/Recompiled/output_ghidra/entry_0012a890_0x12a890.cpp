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

// Function: entry_0012a890
// Address: 0x12a890 - 0x12a93c
void entry_0012a890_0x12a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a890_0x12a890");
#endif

    switch (ctx->pc) {
        case 0x12a8f8u: goto label_12a8f8;
        default: break;
    }

    ctx->pc = 0x12a890u;

    // 0x12a890: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a894: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x12a894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x12a898: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a8a0: 0x0  nop
    ctx->pc = 0x12a8a0u;
    // NOP
    // 0x12a8a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a8a8: 0x0  nop
    ctx->pc = 0x12a8a8u;
    // NOP
    // 0x12a8ac: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x12A8ACu;
    {
        const bool branch_taken_0x12a8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a8ac) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A8B4u;
    // 0x12a8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a8b8: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x12a8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x12a8bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x12a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12a8c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12a8c4: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x12A8C4u;
    {
        const bool branch_taken_0x12a8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8c4) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A8CCu;
    // 0x12a8cc: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x12a8ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x12a8d0: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x12A8D0u;
    {
        const bool branch_taken_0x12a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8d0) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A8D8u;
    // 0x12a8d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a8dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a8e0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12a8e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a8e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12A8E8u;
    {
        const bool branch_taken_0x12a8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a8e8) {
            ctx->pc = 0x12A93Cu;
            return;
        }
    }
    ctx->pc = 0x12A8F0u;
    // 0x12a8f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A8F0u;
    SET_GPR_U32(ctx, 31, 0x12A8F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A8F0u, 0x12A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8F8u;
label_12a8f8:
    // 0x12a8f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a8fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a900: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12A900u;
    {
        const bool branch_taken_0x12a900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a900) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A908u;
    // 0x12a908: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a90c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a910: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a914: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a918: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a91c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a920: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a924: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a928: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a92c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a930: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a934: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12A934u;
    {
        const bool branch_taken_0x12a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a934) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A93Cu;
}
