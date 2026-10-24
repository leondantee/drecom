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

// Function: entry_001b9464
// Address: 0x1b9464 - 0x1b94f0
void entry_001b9464_0x1b9464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9464_0x1b9464");
#endif

    switch (ctx->pc) {
        case 0x1b9474u: goto label_1b9474;
        default: break;
    }

    ctx->pc = 0x1b9464u;

    // 0x1b9464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9468: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b9468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b946c: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B946Cu;
    SET_GPR_U32(ctx, 31, 0x1B9474u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B946Cu, 0x1B9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9474u;
label_1b9474:
    // 0x1b9474: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b9474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9478: 0x10e000c4  beqz        $a3, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1B9478u;
    {
        const bool branch_taken_0x1b9478 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9478) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9480u;
    // 0x1b9480: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9484: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b9484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b9488: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b948c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b9490: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B9490u;
    {
        const bool branch_taken_0x1b9490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9490) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9498u;
    // 0x1b9498: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b949c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b94a0: 0x3c06feff  lui         $a2, 0xFEFF
    ctx->pc = 0x1b94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65279 << 16));
    // 0x1b94a4: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x1b94a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b94a8: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x1b94a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b94ac: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1b94acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1b94b0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b94b4: 0x910413a6  lbu         $a0, 0x13A6($t0)
    ctx->pc = 0x1b94b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5030)));
    // 0x1b94b8: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x1b94b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b94bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b94c0: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B94C0u;
    {
        const bool branch_taken_0x1b94c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b94c0) {
            ctx->pc = 0x1B94F0u;
            return;
        }
    }
    ctx->pc = 0x1B94C8u;
    // 0x1b94c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b94cc: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B94CCu;
    {
        const bool branch_taken_0x1b94cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b94cc) {
            ctx->pc = 0x1B94F0u;
            return;
        }
    }
    ctx->pc = 0x1B94D4u;
    // 0x1b94d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b94d8: 0x122500ac  beq         $s1, $a1, . + 4 + (0xAC << 2)
    ctx->pc = 0x1B94D8u;
    {
        const bool branch_taken_0x1b94d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b94d8) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B94E0u;
    // 0x1b94e0: 0x122000aa  beqz        $s1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1B94E0u;
    {
        const bool branch_taken_0x1b94e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e0) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B94E8u;
    // 0x1b94e8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B94E8u;
    {
        const bool branch_taken_0x1b94e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e8) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B94F0u;
}
