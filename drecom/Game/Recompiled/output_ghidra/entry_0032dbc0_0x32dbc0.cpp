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

// Function: entry_0032dbc0
// Address: 0x32dbc0 - 0x32dbf8
void entry_0032dbc0_0x32dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032dbc0_0x32dbc0");
#endif

    ctx->pc = 0x32dbc0u;

    // 0x32dbc0: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32dbc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32dbc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32dbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32dbc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32dbcc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DBCCu;
    {
        const bool branch_taken_0x32dbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32dbcc) {
            ctx->pc = 0x32DBF8u;
            return;
        }
    }
    ctx->pc = 0x32DBD4u;
    // 0x32dbd4: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x32dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x32dbd8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32dbd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dbdc: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dbe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32dbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dbe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32dbe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dbec: 0x0  nop
    ctx->pc = 0x32dbecu;
    // NOP
    // 0x32dbf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32dbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32dbf4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x32dbf8u;
}
