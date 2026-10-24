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

// Function: entry_00117560
// Address: 0x117560 - 0x1175ac
void entry_00117560_0x117560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117560_0x117560");
#endif

    ctx->pc = 0x117560u;

    // 0x117560: 0x25ab4928  addiu       $t3, $t5, 0x4928
    ctx->pc = 0x117560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 18728));
    // 0x117564: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x117564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x117568: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x11756c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x11756cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x117570: 0x54e8000e  bnel        $a3, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x117570u;
    {
        const bool branch_taken_0x117570 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x117570) {
            ctx->pc = 0x117574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117570u;
            // 0x117574: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1175ACu;
            return;
        }
    }
    ctx->pc = 0x117578u;
    // 0x117578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11757c: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x11757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x117580: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x117580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x117584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x117584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117588: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x117588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x11758c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x117590: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x117594: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x117594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x117598: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x117598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11759c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11759cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1175a0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1175a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1175a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1175A4u;
    {
        const bool branch_taken_0x1175a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175A4u;
        // 0x1175a8: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175a4) {
            ctx->pc = 0x1175F0u;
            return;
        }
    }
    ctx->pc = 0x1175ACu;
}
