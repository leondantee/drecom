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

// Function: entry_001fa478
// Address: 0x1fa478 - 0x1fa4d4
void entry_001fa478_0x1fa478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa478_0x1fa478");
#endif

    ctx->pc = 0x1fa478u;

    // 0x1fa478: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa47c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1fa480: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa484: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa488: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa488u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa48c: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa48cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa490: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa498: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa49c: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1fa49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1fa4a0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4a4: 0x34210020  ori         $at, $at, 0x20
    ctx->pc = 0x1fa4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32);
    // 0x1fa4a8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4ac: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4b0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1fa4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1fa4b4: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1fa4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1fa4b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA4B8u;
    {
        const bool branch_taken_0x1fa4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4b8) {
            ctx->pc = 0x1FA4D4u;
            return;
        }
    }
    ctx->pc = 0x1FA4C0u;
    // 0x1fa4c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fa4c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa4c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa4cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa4d0: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    ctx->pc = 0x1fa4d4u;
}
