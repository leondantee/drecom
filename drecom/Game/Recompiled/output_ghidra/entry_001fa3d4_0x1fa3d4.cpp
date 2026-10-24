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

// Function: entry_001fa3d4
// Address: 0x1fa3d4 - 0x1fa430
void entry_001fa3d4_0x1fa3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa3d4_0x1fa3d4");
#endif

    ctx->pc = 0x1fa3d4u;

    // 0x1fa3d4: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa3d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa3d8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1fa3dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa3e0: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa3e4: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa3e8: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa3e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa3ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa3f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa3f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa3f8: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1fa3fc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa400: 0x34210020  ori         $at, $at, 0x20
    ctx->pc = 0x1fa400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32);
    // 0x1fa404: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa408: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa40c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1fa40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1fa410: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1fa414: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA414u;
    {
        const bool branch_taken_0x1fa414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa414) {
            ctx->pc = 0x1FA430u;
            return;
        }
    }
    ctx->pc = 0x1FA41Cu;
    // 0x1fa41c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fa420: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa424: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa428: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa42c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa42cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    ctx->pc = 0x1fa430u;
}
