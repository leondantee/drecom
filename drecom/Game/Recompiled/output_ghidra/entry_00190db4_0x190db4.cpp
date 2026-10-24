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

// Function: entry_00190db4
// Address: 0x190db4 - 0x190dd0
void entry_00190db4_0x190db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190db4_0x190db4");
#endif

    ctx->pc = 0x190db4u;

    // 0x190db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190dbc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190dc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190dc4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x190dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x190dc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x190dcc: 0x0  nop
    ctx->pc = 0x190dccu;
    // NOP
    ctx->pc = 0x190dd0u;
}
