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

// Function: entry_0033fda8
// Address: 0x33fda8 - 0x33fe04
void entry_0033fda8_0x33fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fda8_0x33fda8");
#endif

    ctx->pc = 0x33fda8u;

    // 0x33fda8: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x33fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33fdac: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33FDACu;
    {
        const bool branch_taken_0x33fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdac) {
            ctx->pc = 0x33FD8Cu;
            return;
        }
    }
    ctx->pc = 0x33FDB4u;
    // 0x33fdb4: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdb8: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdbc: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdc0: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdc4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fdc8: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdcc: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd0: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd4: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd8: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fde0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fde4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33fde4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fde8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fdec: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33fdf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FDF0u;
    {
        const bool branch_taken_0x33fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdf0) {
            ctx->pc = 0x33FE04u;
            return;
        }
    }
    ctx->pc = 0x33FDF8u;
    // 0x33fdf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33fdfc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe00: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x33fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    ctx->pc = 0x33fe04u;
}
