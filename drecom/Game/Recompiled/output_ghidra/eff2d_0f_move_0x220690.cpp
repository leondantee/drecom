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

// Function: eff2d_0f_move
// Address: 0x220690 - 0x2207f8
void eff2d_0f_move_0x220690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0f_move_0x220690");
#endif

    switch (ctx->pc) {
        case 0x2206fcu: goto label_2206fc;
        case 0x22071cu: goto label_22071c;
        case 0x22072cu: goto label_22072c;
        case 0x220744u: goto label_220744;
        case 0x220760u: goto label_220760;
        case 0x220784u: goto label_220784;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207ccu: goto label_2207cc;
        case 0x2207e8u: goto label_2207e8;
        default: break;
    }

    ctx->pc = 0x220690u;

    // 0x220690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x220694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x220698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x220698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x22069c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2206a0: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x2206a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2206a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2206a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2206a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2206A8u;
    {
        const bool branch_taken_0x2206a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2206a8) {
            ctx->pc = 0x2206B8u;
            goto label_2206b8;
        }
    }
    ctx->pc = 0x2206B0u;
    // 0x2206b0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2206B0u;
    {
        const bool branch_taken_0x2206b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206b0) {
            ctx->pc = 0x2207E8u;
            goto label_2207e8;
        }
    }
    ctx->pc = 0x2206B8u;
label_2206b8:
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
            goto label_220768;
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
            goto label_2207e8;
        }
    }
    ctx->pc = 0x220768u;
label_220768:
    // 0x220768: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x220768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22076c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220770: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x220770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220774: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x220774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x220778: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22077c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22077Cu;
    SET_GPR_U32(ctx, 31, 0x220784u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22077Cu, 0x220784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220784u;
label_220784:
    // 0x220784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22078c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x22078cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220790: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x220790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220794: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x220794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220798: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x22079c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22079Cu;
    SET_GPR_U32(ctx, 31, 0x2207A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22079Cu, 0x2207A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207A4u;
label_2207a4:
    // 0x2207a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207a8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2207a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x2207ACu;
    SET_GPR_U32(ctx, 31, 0x2207B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2207B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2207B4u) { return; }
    ctx->pc = 0x2207B4u;
label_2207b4:
    // 0x2207b4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2207b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2207b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2207b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2207bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2207bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2207c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2207C4u;
    SET_GPR_U32(ctx, 31, 0x2207CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2207CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2207CCu) { return; }
    ctx->pc = 0x2207CCu;
label_2207cc:
    // 0x2207cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2207ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207d4: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x2207d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2207d8: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2207d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2207dc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2207dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207e0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2207E0u;
    SET_GPR_U32(ctx, 31, 0x2207E8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2207E0u, 0x2207E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207E8u;
label_2207e8:
    // 0x2207e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2207e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2207ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2207ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2207f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2207F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2207F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2207F8u;
}
