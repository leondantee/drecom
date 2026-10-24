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

// Function: entry_00162170
// Address: 0x162170 - 0x1621bc
void entry_00162170_0x162170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162170_0x162170");
#endif

    ctx->pc = 0x162170u;

    // 0x162170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162174: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162178: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16217c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16217cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162180: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162184: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162188: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16218c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162194: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x162198: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16219c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1621a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1621a4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1621a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1621a8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1621a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621ac: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1621acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1621b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621b4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1621B4u;
    {
        const bool branch_taken_0x1621b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621b4) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x1621BCu;
}
