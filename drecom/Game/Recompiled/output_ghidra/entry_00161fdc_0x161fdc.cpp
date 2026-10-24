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

// Function: entry_00161fdc
// Address: 0x161fdc - 0x162028
void entry_00161fdc_0x161fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161fdc_0x161fdc");
#endif

    ctx->pc = 0x161fdcu;

    // 0x161fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fe0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161fe8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ff0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ff4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x161ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161ff8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x161ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x161ffc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162000: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x162004: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162008: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16200c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x162010: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162014: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x162014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162018: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16201c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162020: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162020) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x162028u;
}
