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

// Function: entry_00314b38
// Address: 0x314b38 - 0x314b70
void entry_00314b38_0x314b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314b38_0x314b38");
#endif

    ctx->pc = 0x314b38u;

    // 0x314b38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b3c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b40: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x314b40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x314b44: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x314b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x314b48: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x314b48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x314b4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b50: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314b50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b54: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x314b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x314b58: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x314b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x314b5c: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x314b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x314b60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x314b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x314b64: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x314b64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x314b68: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x314b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x314b6c: 0x0  nop
    ctx->pc = 0x314b6cu;
    // NOP
    ctx->pc = 0x314b70u;
}
