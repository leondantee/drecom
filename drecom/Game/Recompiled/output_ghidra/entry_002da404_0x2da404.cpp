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

// Function: entry_002da404
// Address: 0x2da404 - 0x2da434
void entry_002da404_0x2da404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da404_0x2da404");
#endif

    ctx->pc = 0x2da404u;

    // 0x2da404: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da408: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da410: 0x0  nop
    ctx->pc = 0x2da410u;
    // NOP
    // 0x2da414: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da418: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2da418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2da41c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2da41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2da420: 0x920200d8  lbu         $v0, 0xD8($s0)
    ctx->pc = 0x2da420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2da424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da428: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da42c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA42Cu;
    {
        const bool branch_taken_0x2da42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da42c) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA434u;
}
