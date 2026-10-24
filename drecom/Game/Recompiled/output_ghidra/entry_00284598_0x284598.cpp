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

// Function: entry_00284598
// Address: 0x284598 - 0x2845f0
void entry_00284598_0x284598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284598_0x284598");
#endif

    ctx->pc = 0x284598u;

    // 0x284598: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x284598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28459c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2845a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2845a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2845a4: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2845A4u;
    {
        const bool branch_taken_0x2845a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845a4) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x2845ACu;
    // 0x2845ac: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2845b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2845b4: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x2845b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2845b8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2845bc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2845bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2845c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2845c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2845c4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2845c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2845c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2845c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2845cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2845ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2845d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2845d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2845d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2845d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2845d8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x2845D8u;
    {
        const bool branch_taken_0x2845d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845d8) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x2845E0u;
    // 0x2845e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2845e4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2845e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2845e8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2845E8u;
    {
        const bool branch_taken_0x2845e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845e8) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x2845F0u;
}
