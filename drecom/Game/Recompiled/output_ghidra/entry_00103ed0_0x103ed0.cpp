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

// Function: entry_00103ed0
// Address: 0x103ed0 - 0x103f30
void entry_00103ed0_0x103ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ed0_0x103ed0");
#endif

    ctx->pc = 0x103ed0u;

    // 0x103ed0: 0xf  sync
    ctx->pc = 0x103ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x103ed4: 0x25e941f8  addiu       $t1, $t7, 0x41F8
    ctx->pc = 0x103ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103ed8: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103edc: 0x8d240280  lw          $a0, 0x280($t1)
    ctx->pc = 0x103edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x103ee0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103ee4: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x103ee8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x103eec: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x103eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x103ef0: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x103ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x103ef4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103ef8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103efc: 0x34a5d420  ori         $a1, $a1, 0xD420
    ctx->pc = 0x103efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54304);
    // 0x103f00: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x103f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x103f04: 0x240a0105  addiu       $t2, $zero, 0x105
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x103f08: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f0c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x103f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x103f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103f14: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x103f18: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x103f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x103f1c: 0x8f033bec  lw          $v1, 0x3BEC($t8)
    ctx->pc = 0x103f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 15340)));
    // 0x103f20: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x103f20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x103f24: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x103f24u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x103f28: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x103f28u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 10));
    // 0x103f2c: 0xad2b0138  sw          $t3, 0x138($t1)
    ctx->pc = 0x103f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
    ctx->pc = 0x103f30u;
}
