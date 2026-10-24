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

// Function: entry_001fa340
// Address: 0x1fa340 - 0x1fa38c
void entry_001fa340_0x1fa340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa340_0x1fa340");
#endif

    ctx->pc = 0x1fa340u;

    // 0x1fa340: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa340u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa344: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa348: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa34c: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa34cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa350: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa350u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa354: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa358: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa35c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa360: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fa360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa364: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa368: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa36c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fa370: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA370u;
    {
        const bool branch_taken_0x1fa370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa370) {
            ctx->pc = 0x1FA38Cu;
            return;
        }
    }
    ctx->pc = 0x1FA378u;
    // 0x1fa378: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fa378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa37c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa380: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa384: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa388: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    ctx->pc = 0x1fa38cu;
}
