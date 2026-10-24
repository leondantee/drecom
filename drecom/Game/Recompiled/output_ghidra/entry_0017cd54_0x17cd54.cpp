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

// Function: entry_0017cd54
// Address: 0x17cd54 - 0x17cd80
void entry_0017cd54_0x17cd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd54_0x17cd54");
#endif

    ctx->pc = 0x17cd54u;

    // 0x17cd54: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd60: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CD60u;
    {
        const bool branch_taken_0x17cd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17cd60) {
            ctx->pc = 0x17CD80u;
            return;
        }
    }
    ctx->pc = 0x17CD68u;
    // 0x17cd68: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x17cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x17cd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd70: 0x0  nop
    ctx->pc = 0x17cd70u;
    // NOP
    // 0x17cd74: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x17cd78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17CD78u;
    {
        const bool branch_taken_0x17cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd78) {
            ctx->pc = 0x17CDBCu;
            return;
        }
    }
    ctx->pc = 0x17CD80u;
}
