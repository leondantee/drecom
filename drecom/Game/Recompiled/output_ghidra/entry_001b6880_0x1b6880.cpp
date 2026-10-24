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

// Function: entry_001b6880
// Address: 0x1b6880 - 0x1b690c
void entry_001b6880_0x1b6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6880_0x1b6880");
#endif

    switch (ctx->pc) {
        case 0x1b6890u: goto label_1b6890;
        default: break;
    }

    ctx->pc = 0x1b6880u;

    // 0x1b6880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6888: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B6888u;
    SET_GPR_U32(ctx, 31, 0x1B6890u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6888u, 0x1B6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6890u;
label_1b6890:
    // 0x1b6890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6894: 0x10800112  beqz        $a0, . + 4 + (0x112 << 2)
    ctx->pc = 0x1B6894u;
    {
        const bool branch_taken_0x1b6894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6894) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B689Cu;
    // 0x1b689c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b68a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b68a4: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1b68a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1b68a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1b68a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1b68ac: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B68B4u;
    // 0x1b68b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b68b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b68bc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b68c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b68c4: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b68c8: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x1b68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x1b68cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b68d0: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b68d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b68d4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b68d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b68d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b68dc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B68DCu;
    {
        const bool branch_taken_0x1b68dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68dc) {
            ctx->pc = 0x1B690Cu;
            return;
        }
    }
    ctx->pc = 0x1B68E4u;
    // 0x1b68e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b68e8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B68E8u;
    {
        const bool branch_taken_0x1b68e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68e8) {
            ctx->pc = 0x1B690Cu;
            return;
        }
    }
    ctx->pc = 0x1B68F0u;
    // 0x1b68f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b68f4: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x1B68F4u;
    {
        const bool branch_taken_0x1b68f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68f4) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B68FCu;
    // 0x1b68fc: 0x108000f8  beqz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B68FCu;
    {
        const bool branch_taken_0x1b68fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68fc) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6904u;
    // 0x1b6904: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1B6904u;
    {
        const bool branch_taken_0x1b6904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6904) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B690Cu;
}
