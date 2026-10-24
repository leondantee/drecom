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

// Function: entry_00118494
// Address: 0x118494 - 0x1184e4
void entry_00118494_0x118494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118494_0x118494");
#endif

    ctx->pc = 0x118494u;

    // 0x118494: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x118494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x118498: 0x26874928  addiu       $a3, $s4, 0x4928
    ctx->pc = 0x118498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x11849c: 0x475021  addu        $t2, $v0, $a3
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1184a0: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1184a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1184a4: 0x552a000f  bnel        $t1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1184A4u;
    {
        const bool branch_taken_0x1184a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x1184a4) {
            ctx->pc = 0x1184A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1184A4u;
            // 0x1184a8: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1184E4u;
            return;
        }
    }
    ctx->pc = 0x1184ACu;
    // 0x1184ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1184b0: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1184b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1184b4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1184b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1184b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1184bc: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1184bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1184c0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1184c4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1184c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1184c8: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x1184c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1184cc: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x1184ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1184d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1184d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1184d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1184d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1184d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1184d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1184dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1184DCu;
    {
        const bool branch_taken_0x1184dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184DCu;
        // 0x1184e0: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184dc) {
            ctx->pc = 0x118530u;
            return;
        }
    }
    ctx->pc = 0x1184E4u;
}
