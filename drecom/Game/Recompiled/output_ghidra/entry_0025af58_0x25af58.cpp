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

// Function: entry_0025af58
// Address: 0x25af58 - 0x25af78
void entry_0025af58_0x25af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025af58_0x25af58");
#endif

    ctx->pc = 0x25af58u;

    // 0x25af58: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25af60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25af64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AF64u;
    {
        const bool branch_taken_0x25af64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af64) {
            ctx->pc = 0x25AF78u;
            return;
        }
    }
    ctx->pc = 0x25AF6Cu;
    // 0x25af6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25af6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25af70: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af74: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x25af78u;
}
