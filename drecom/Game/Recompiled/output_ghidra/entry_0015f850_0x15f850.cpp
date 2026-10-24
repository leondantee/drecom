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

// Function: entry_0015f850
// Address: 0x15f850 - 0x15f898
void entry_0015f850_0x15f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f850_0x15f850");
#endif

    ctx->pc = 0x15f850u;

    // 0x15f850: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f854: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15f858: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15F858u;
    {
        const bool branch_taken_0x15f858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f858) {
            ctx->pc = 0x15F898u;
            return;
        }
    }
    ctx->pc = 0x15F860u;
    // 0x15f860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f864: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f868: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f86c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f86cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f870: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f874: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f880: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f884: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f888: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f890: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15F890u;
    {
        const bool branch_taken_0x15f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f890) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F898u;
}
