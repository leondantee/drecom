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

// Function: entry_0022147c
// Address: 0x22147c - 0x2214d0
void entry_0022147c_0x22147c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022147c_0x22147c");
#endif

    ctx->pc = 0x22147cu;

    // 0x22147c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221480: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x221480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x221484: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221488: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x221488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x22148c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221490: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x221490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x221494: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221498: 0xa0c410a8  sb          $a0, 0x10A8($a2)
    ctx->pc = 0x221498u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x22149c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214a0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2214a4: 0x30830fff  andi        $v1, $a0, 0xFFF
    ctx->pc = 0x2214a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2214a8: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x2214a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2214ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2214ACu;
    {
        const bool branch_taken_0x2214ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214ac) {
            ctx->pc = 0x2214D0u;
            return;
        }
    }
    ctx->pc = 0x2214B4u;
    // 0x2214b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214b8: 0x8c271a58  lw          $a3, 0x1A58($at)
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2214bc: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2214c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214c4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2214c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2214c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2214C8u;
    {
        const bool branch_taken_0x2214c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214c8) {
            ctx->pc = 0x221514u;
            return;
        }
    }
    ctx->pc = 0x2214D0u;
}
