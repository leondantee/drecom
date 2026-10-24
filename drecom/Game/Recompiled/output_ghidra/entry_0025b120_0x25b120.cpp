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

// Function: entry_0025b120
// Address: 0x25b120 - 0x25b140
void entry_0025b120_0x25b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b120_0x25b120");
#endif

    ctx->pc = 0x25b120u;

    // 0x25b120: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b124: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b128: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25b12c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B12Cu;
    {
        const bool branch_taken_0x25b12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b12c) {
            ctx->pc = 0x25B140u;
            return;
        }
    }
    ctx->pc = 0x25B134u;
    // 0x25b134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b138: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b13c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25b13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x25b140u;
}
