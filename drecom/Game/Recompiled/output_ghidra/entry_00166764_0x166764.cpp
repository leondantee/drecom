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

// Function: entry_00166764
// Address: 0x166764 - 0x1667d0
void entry_00166764_0x166764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166764_0x166764");
#endif

    ctx->pc = 0x166764u;

    // 0x166764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x166764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166768: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16676c: 0x30517fff  andi        $s1, $v0, 0x7FFF
    ctx->pc = 0x16676cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166770: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x166770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x166774: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166778: 0x94a40070  lhu         $a0, 0x70($a1)
    ctx->pc = 0x166778u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x16677c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x16677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166780: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x166780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x166784: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16678c: 0xa4a20070  sh          $v0, 0x70($a1)
    ctx->pc = 0x16678cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x166790: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166794: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x166798: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x166798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16679c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1667a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1667a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1667a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1667a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1667a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1667a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1667ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1667acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1667b0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1667b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1667b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1667b8: 0x94a40070  lhu         $a0, 0x70($a1)
    ctx->pc = 0x1667b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1667bc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1667bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1667c0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1667c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1667c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1667c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1667c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1667cc: 0xa4a20070  sh          $v0, 0x70($a1)
    ctx->pc = 0x1667ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1667d0u;
}
