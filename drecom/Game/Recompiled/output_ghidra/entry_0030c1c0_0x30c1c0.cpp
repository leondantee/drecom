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

// Function: entry_0030c1c0
// Address: 0x30c1c0 - 0x30c208
void entry_0030c1c0_0x30c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c1c0_0x30c1c0");
#endif

    ctx->pc = 0x30c1c0u;

    // 0x30c1c0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x30c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30c1c4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c1c8: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30c1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30c1d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c1d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c1e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30c1e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c1e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c1ec: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30c1f0: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x30c1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30c1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c1fc: 0x0  nop
    ctx->pc = 0x30c1fcu;
    // NOP
    // 0x30c200: 0xe6c00128  swc1        $f0, 0x128($s6)
    ctx->pc = 0x30c200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 296), bits); }
    // 0x30c204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30c204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x30c208u;
}
