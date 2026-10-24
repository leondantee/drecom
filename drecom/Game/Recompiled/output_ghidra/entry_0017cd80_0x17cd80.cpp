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

// Function: entry_0017cd80
// Address: 0x17cd80 - 0x17cdac
void entry_0017cd80_0x17cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd80_0x17cd80");
#endif

    ctx->pc = 0x17cd80u;

    // 0x17cd80: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd84: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17cd88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cd8c: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CD8Cu;
    {
        const bool branch_taken_0x17cd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17cd8c) {
            ctx->pc = 0x17CDACu;
            return;
        }
    }
    ctx->pc = 0x17CD94u;
    // 0x17cd94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x17cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x17cd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd9c: 0x0  nop
    ctx->pc = 0x17cd9cu;
    // NOP
    // 0x17cda0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x17cda4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17CDA4u;
    {
        const bool branch_taken_0x17cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cda4) {
            ctx->pc = 0x17CDBCu;
            return;
        }
    }
    ctx->pc = 0x17CDACu;
}
