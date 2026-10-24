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

// Function: entry_001b6478
// Address: 0x1b6478 - 0x1b6504
void entry_001b6478_0x1b6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6478_0x1b6478");
#endif

    switch (ctx->pc) {
        case 0x1b6488u: goto label_1b6488;
        default: break;
    }

    ctx->pc = 0x1b6478u;

    // 0x1b6478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b647c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b647cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b6480: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B6480u;
    SET_GPR_U32(ctx, 31, 0x1B6488u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6480u, 0x1B6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b648c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B648Cu;
    {
        const bool branch_taken_0x1b648c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b648c) {
            ctx->pc = 0x1B6518u;
            return;
        }
    }
    ctx->pc = 0x1B6494u;
    // 0x1b6494: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6498: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b649c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b64a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b64a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b64a4: 0x1060020e  beqz        $v1, . + 4 + (0x20E << 2)
    ctx->pc = 0x1B64A4u;
    {
        const bool branch_taken_0x1b64a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64a4) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B64ACu;
    // 0x1b64ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b64acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b64b0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b64b4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1b64b8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1b64b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b64bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1b64bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b64c0: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1b64c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b64c8: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b64c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b64cc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b64ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b64d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b64d4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B64D4u;
    {
        const bool branch_taken_0x1b64d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64d4) {
            ctx->pc = 0x1B6504u;
            return;
        }
    }
    ctx->pc = 0x1B64DCu;
    // 0x1b64dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b64e0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B64E0u;
    {
        const bool branch_taken_0x1b64e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64e0) {
            ctx->pc = 0x1B6504u;
            return;
        }
    }
    ctx->pc = 0x1B64E8u;
    // 0x1b64e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b64ec: 0x108301fc  beq         $a0, $v1, . + 4 + (0x1FC << 2)
    ctx->pc = 0x1B64ECu;
    {
        const bool branch_taken_0x1b64ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64ec) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B64F4u;
    // 0x1b64f4: 0x108001fa  beqz        $a0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x1B64F4u;
    {
        const bool branch_taken_0x1b64f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f4) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B64FCu;
    // 0x1b64fc: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x1B64FCu;
    {
        const bool branch_taken_0x1b64fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64fc) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6504u;
}
