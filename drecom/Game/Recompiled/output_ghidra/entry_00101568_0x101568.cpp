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

// Function: entry_00101568
// Address: 0x101568 - 0x1015b4
void entry_00101568_0x101568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101568_0x101568");
#endif

    switch (ctx->pc) {
        case 0x101570u: goto label_101570;
        default: break;
    }

    ctx->pc = 0x101568u;

    // 0x101568: 0xc046760  jal         func_119D80
    ctx->pc = 0x101568u;
    SET_GPR_U32(ctx, 31, 0x101570u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x101570u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x101570u) { return; }
    ctx->pc = 0x101570u;
label_101570:
    // 0x101570: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101574: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101578: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x101578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x10157c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x10157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101580: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x101580u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x101584: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x101584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
    // 0x101588: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x101588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10158c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x10158cu;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x101590: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101594: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x101594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x101598: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10159c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x10159cu;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 5));
    // 0x1015a0: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x1015a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x1015a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1015a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1015a8u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 5));
    // 0x1015ac: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1015ACu;
    {
        const bool branch_taken_0x1015ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015ACu;
        // 0x1015b0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015ac) {
            ctx->pc = 0x1017D0u;
            return;
        }
    }
    ctx->pc = 0x1015B4u;
}
