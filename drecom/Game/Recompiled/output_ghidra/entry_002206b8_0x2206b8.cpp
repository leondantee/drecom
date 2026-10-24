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

// Function: entry_002206b8
// Address: 0x2206b8 - 0x220768
void entry_002206b8_0x2206b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002206b8_0x2206b8");
#endif

    switch (ctx->pc) {
        case 0x2206fcu: goto label_2206fc;
        case 0x22071cu: goto label_22071c;
        case 0x22072cu: goto label_22072c;
        case 0x220744u: goto label_220744;
        case 0x220760u: goto label_220760;
        default: break;
    }

    ctx->pc = 0x2206b8u;

    // 0x2206b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2206b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206bc: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x2206bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x2206c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2206c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2206c4: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x2206c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x2206c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206cc: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x2206ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x2206d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2206d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2206d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2206d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2206d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2206D8u;
    {
        const bool branch_taken_0x2206d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206d8) {
            ctx->pc = 0x220768u;
            return;
        }
    }
    ctx->pc = 0x2206E0u;
    // 0x2206e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2206e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2206e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206e8: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x2206e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2206ec: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2206ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2206f0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2206f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206f4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2206F4u;
    SET_GPR_U32(ctx, 31, 0x2206FCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2206F4u, 0x2206FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206FCu;
label_2206fc:
    // 0x2206fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2206fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220700: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x220704: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220708: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x220708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22070c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x22070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220710: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x220714: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x220714u;
    SET_GPR_U32(ctx, 31, 0x22071Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x220714u, 0x22071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22071Cu;
label_22071c:
    // 0x22071c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220720: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x220720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220724: 0xc040c24  jal         func_103090
    ctx->pc = 0x220724u;
    SET_GPR_U32(ctx, 31, 0x22072Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22072Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22072Cu) { return; }
    ctx->pc = 0x22072Cu;
label_22072c:
    // 0x22072c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x220730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x220730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220734: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x220734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220738: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22073c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x22073Cu;
    SET_GPR_U32(ctx, 31, 0x220744u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x220744u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220744u) { return; }
    ctx->pc = 0x220744u;
label_220744:
    // 0x220744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x220744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220748: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x220748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22074c: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x22074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x220750: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x220750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x220754: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220758: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x220758u;
    SET_GPR_U32(ctx, 31, 0x220760u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x220758u, 0x220760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220760u;
label_220760:
    // 0x220760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x220760u;
    {
        const bool branch_taken_0x220760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220760) {
            ctx->pc = 0x2207E8u;
            return;
        }
    }
    ctx->pc = 0x220768u;
}
