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

// Function: entry_0025af78
// Address: 0x25af78 - 0x25af98
void entry_0025af78_0x25af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025af78_0x25af78");
#endif

    ctx->pc = 0x25af78u;

    // 0x25af78: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af80: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25af84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AF84u;
    {
        const bool branch_taken_0x25af84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af84) {
            ctx->pc = 0x25AF98u;
            return;
        }
    }
    ctx->pc = 0x25AF8Cu;
    // 0x25af8c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x25af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af90: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af94: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25af94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x25af98u;
}
