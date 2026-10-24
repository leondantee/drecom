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

// Function: entry_0025b140
// Address: 0x25b140 - 0x25b160
void entry_0025b140_0x25b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b140_0x25b140");
#endif

    ctx->pc = 0x25b140u;

    // 0x25b140: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b144: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b148: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b14c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B14Cu;
    {
        const bool branch_taken_0x25b14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b14c) {
            ctx->pc = 0x25B160u;
            return;
        }
    }
    ctx->pc = 0x25B154u;
    // 0x25b154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b158: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b15c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25b15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x25b160u;
}
