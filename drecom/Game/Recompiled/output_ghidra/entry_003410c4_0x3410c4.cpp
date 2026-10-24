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

// Function: entry_003410c4
// Address: 0x3410c4 - 0x3411a8
void entry_003410c4_0x3410c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003410c4_0x3410c4");
#endif

    switch (ctx->pc) {
        case 0x3410f0u: goto label_3410f0;
        default: break;
    }

    ctx->pc = 0x3410c4u;

    // 0x3410c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3410c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3410cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3410ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3410d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3410d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3410d4: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x3410D4u;
    {
        const bool branch_taken_0x3410d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3410d4) {
            ctx->pc = 0x34152Cu;
            return;
        }
    }
    ctx->pc = 0x3410DCu;
    // 0x3410dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3410dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3410e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3410e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3410e4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x3410e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3410e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3410E8u;
    SET_GPR_U32(ctx, 31, 0x3410F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3410E8u, 0x3410F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410F0u;
label_3410f0:
    // 0x3410f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3410f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3410f4: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3410f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3410f8: 0x2482001e  addiu       $v0, $a0, 0x1E
    ctx->pc = 0x3410f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x3410fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3410fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x341100: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341104: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34110c: 0xa443006a  sh          $v1, 0x6A($v0)
    ctx->pc = 0x34110cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x341110: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341114: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x341114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x341118: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x341118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34111c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x34111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x341120: 0x10a2006a  beq         $a1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x341120u;
    {
        const bool branch_taken_0x341120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341120) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341128u;
    // 0x341128: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x341128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x34112c: 0x10a30067  beq         $a1, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x34112Cu;
    {
        const bool branch_taken_0x34112c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34112c) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341134u;
    // 0x341134: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x341134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x341138: 0x10a20064  beq         $a1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x341138u;
    {
        const bool branch_taken_0x341138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341138) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341140u;
    // 0x341140: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x341144: 0x10a20061  beq         $a1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x341144u;
    {
        const bool branch_taken_0x341144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341144) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x34114Cu;
    // 0x34114c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341150: 0x10a2005e  beq         $a1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x341150u;
    {
        const bool branch_taken_0x341150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341150) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341158u;
    // 0x341158: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x341158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34115c: 0x10a2005b  beq         $a1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x34115Cu;
    {
        const bool branch_taken_0x34115c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34115c) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341164u;
    // 0x341164: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x341164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x341168: 0x10a20058  beq         $a1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x341168u;
    {
        const bool branch_taken_0x341168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341168) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341170u;
    // 0x341170: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x341170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x341174: 0x10a40055  beq         $a1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x341174u;
    {
        const bool branch_taken_0x341174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x341174) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x34117Cu;
    // 0x34117c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x34117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x341180: 0x10a60052  beq         $a1, $a2, . + 4 + (0x52 << 2)
    ctx->pc = 0x341180u;
    {
        const bool branch_taken_0x341180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x341180) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341188u;
    // 0x341188: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34118c: 0x10a2004f  beq         $a1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x34118Cu;
    {
        const bool branch_taken_0x34118c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34118c) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x341194u;
    // 0x341194: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x341194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x341198: 0x10a2004c  beq         $a1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x341198u;
    {
        const bool branch_taken_0x341198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341198) {
            ctx->pc = 0x3412CCu;
            return;
        }
    }
    ctx->pc = 0x3411A0u;
    // 0x3411a0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3411A0u;
    {
        const bool branch_taken_0x3411a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3411a0) {
            ctx->pc = 0x3411A8u;
            return;
        }
    }
    ctx->pc = 0x3411A8u;
}
