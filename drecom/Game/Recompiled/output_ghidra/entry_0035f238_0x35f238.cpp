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

// Function: entry_0035f238
// Address: 0x35f238 - 0x35f258
void entry_0035f238_0x35f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f238_0x35f238");
#endif

    ctx->pc = 0x35f238u;

    // 0x35f238: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x35f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35f23c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35f240: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35f240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35f244: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x35f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x35f248: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x35f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f24c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x35f24cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35f250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35f254: 0x0  nop
    ctx->pc = 0x35f254u;
    // NOP
    ctx->pc = 0x35f258u;
}
