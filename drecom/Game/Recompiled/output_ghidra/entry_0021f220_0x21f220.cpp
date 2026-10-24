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

// Function: entry_0021f220
// Address: 0x21f220 - 0x21f23c
void entry_0021f220_0x21f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f220_0x21f220");
#endif

    ctx->pc = 0x21f220u;

    // 0x21f220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f224: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f22c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f230: 0x24570118  addiu       $s7, $v0, 0x118
    ctx->pc = 0x21f230u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f234: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x21f234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21f238: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x21f238u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21f23cu;
}
