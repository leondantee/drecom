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

// Function: entry_00158834
// Address: 0x158834 - 0x158878
void entry_00158834_0x158834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158834_0x158834");
#endif

    ctx->pc = 0x158834u;

    // 0x158834: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x158834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158838: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x158838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15883c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x158840: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x158840u;
    {
        const bool branch_taken_0x158840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158840) {
            ctx->pc = 0x158878u;
            return;
        }
    }
    ctx->pc = 0x158848u;
    // 0x158848: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x158848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15884c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x158850: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158854: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158854u;
    {
        const bool branch_taken_0x158854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158854) {
            ctx->pc = 0x158878u;
            return;
        }
    }
    ctx->pc = 0x15885Cu;
    // 0x15885c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x15885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158860: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x158860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158864: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158868: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x158868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x15886c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15886cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158870: 0x0  nop
    ctx->pc = 0x158870u;
    // NOP
    // 0x158874: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x158878u;
}
