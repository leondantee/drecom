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

// Function: entry_001588f4
// Address: 0x1588f4 - 0x15892c
void entry_001588f4_0x1588f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588f4_0x1588f4");
#endif

    ctx->pc = 0x1588f4u;

    // 0x1588f4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1588f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1588f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1588fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1588fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x158900: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158900u;
    {
        const bool branch_taken_0x158900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158900) {
            ctx->pc = 0x15892Cu;
            return;
        }
    }
    ctx->pc = 0x158908u;
    // 0x158908: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x158908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15890c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x15890cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158910: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158914: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x158914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15891c: 0x0  nop
    ctx->pc = 0x15891cu;
    // NOP
    // 0x158920: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x158924: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x158924u;
    {
        const bool branch_taken_0x158924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158924) {
            ctx->pc = 0x158970u;
            return;
        }
    }
    ctx->pc = 0x15892Cu;
}
