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

// Function: entry_0030b3e0
// Address: 0x30b3e0 - 0x30b460
void entry_0030b3e0_0x30b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b3e0_0x30b3e0");
#endif

    ctx->pc = 0x30b3e0u;

    // 0x30b3e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b3e4: 0x24441340  addiu       $a0, $v0, 0x1340
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30b3e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30b3ec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x30b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30b3f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b3f8: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x30b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x30b3fc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x30b3fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b400: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b404: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x30b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30b408: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x30b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x30b40c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b414: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x30b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x30b418: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x30b418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x30b41c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b420: 0x24441340  addiu       $a0, $v0, 0x1340
    ctx->pc = 0x30b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30b424: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x30b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30b428: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x30b428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30b42c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b434: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x30b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x30b438: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x30b438u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b43c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b440: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x30b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30b444: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x30b444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x30b448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b450: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x30b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x30b454: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x30b454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x30b458: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x30b458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30b45c: 0x0  nop
    ctx->pc = 0x30b45cu;
    // NOP
    ctx->pc = 0x30b460u;
}
