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

// Function: entry_001623a4
// Address: 0x1623a4 - 0x1623f0
void entry_001623a4_0x1623a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001623a4_0x1623a4");
#endif

    ctx->pc = 0x1623a4u;

    // 0x1623a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1623a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1623a8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1623a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1623b0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1623b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623b4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1623b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1623b8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1623b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1623bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1623c0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1623c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1623c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1623c8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1623c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1623cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1623ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1623d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1623d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1623d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1623d8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1623d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623dc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1623dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1623e0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1623e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1623e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1623e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1623E8u;
    {
        const bool branch_taken_0x1623e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623e8) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x1623F0u;
}
