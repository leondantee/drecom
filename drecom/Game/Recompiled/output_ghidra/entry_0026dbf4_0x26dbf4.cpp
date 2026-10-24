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

// Function: entry_0026dbf4
// Address: 0x26dbf4 - 0x26dc20
void entry_0026dbf4_0x26dbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dbf4_0x26dbf4");
#endif

    ctx->pc = 0x26dbf4u;

    // 0x26dbf4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26dbf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dbf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26dbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26dbfc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x26dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26dc00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DC00u;
    {
        const bool branch_taken_0x26dc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc00) {
            ctx->pc = 0x26DC20u;
            return;
        }
    }
    ctx->pc = 0x26DC08u;
    // 0x26dc08: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc14: 0x0  nop
    ctx->pc = 0x26dc14u;
    // NOP
    // 0x26dc18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26dc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dc1c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    ctx->pc = 0x26dc20u;
}
