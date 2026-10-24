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

// Function: entry_001a1230
// Address: 0x1a1230 - 0x1a1260
void entry_001a1230_0x1a1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1230_0x1a1230");
#endif

    ctx->pc = 0x1a1230u;

    // 0x1a1230: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1234: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a123c: 0xa0640016  sb          $a0, 0x16($v1)
    ctx->pc = 0x1a123cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1244: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1248: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a124c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1250: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a1250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1254: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a1258: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a125c: 0x0  nop
    ctx->pc = 0x1a125cu;
    // NOP
    ctx->pc = 0x1a1260u;
}
