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

// Function: entry_0015f80c
// Address: 0x15f80c - 0x15f850
void entry_0015f80c_0x15f80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f80c_0x15f80c");
#endif

    ctx->pc = 0x15f80cu;

    // 0x15f80c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f810: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15f814: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15F814u;
    {
        const bool branch_taken_0x15f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f814) {
            ctx->pc = 0x15F850u;
            return;
        }
    }
    ctx->pc = 0x15F81Cu;
    // 0x15f81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f820: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f824: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f828: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f82c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f830: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f834: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f838: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f83c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f840: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f848: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15F848u;
    {
        const bool branch_taken_0x15f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f848) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F850u;
}
