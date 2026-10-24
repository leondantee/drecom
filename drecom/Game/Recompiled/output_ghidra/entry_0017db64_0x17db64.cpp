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

// Function: entry_0017db64
// Address: 0x17db64 - 0x17dbc0
void entry_0017db64_0x17db64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db64_0x17db64");
#endif

    ctx->pc = 0x17db64u;

    // 0x17db64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db6c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db74: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17db78: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17db7c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17db80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db84: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17db88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db8c: 0xa06500d0  sb          $a1, 0xD0($v1)
    ctx->pc = 0x17db8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 5));
    // 0x17db90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db94: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db9c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dba0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dba4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17dba8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbac: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbb4: 0xa06001a0  sb          $zero, 0x1A0($v1)
    ctx->pc = 0x17dbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x17dbb8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dbbc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x17dbc0u;
}
