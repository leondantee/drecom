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

// Function: entry_00118888
// Address: 0x118888 - 0x1188b4
void entry_00118888_0x118888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118888_0x118888");
#endif

    ctx->pc = 0x118888u;

    // 0x118888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11888c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x11888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118890: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x118890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x118894: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x118894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x118898: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11889c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11889cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1188a0: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1188a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1188a4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1188a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1188a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1188a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1188ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1188acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188b0: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1188b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x1188b4u;
}
