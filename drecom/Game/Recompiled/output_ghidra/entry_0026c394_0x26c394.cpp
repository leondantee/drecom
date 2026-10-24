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

// Function: entry_0026c394
// Address: 0x26c394 - 0x26c3e8
void entry_0026c394_0x26c394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c394_0x26c394");
#endif

    ctx->pc = 0x26c394u;

    // 0x26c394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c398: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
    // 0x26c39c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C39Cu;
    {
        const bool branch_taken_0x26c39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c39c) {
            ctx->pc = 0x26C3E8u;
            return;
        }
    }
    ctx->pc = 0x26C3A4u;
    // 0x26c3a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c3a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3ac: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x26c3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x26c3b0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26c3b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c3bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c3c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c3c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c3d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c3dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26c3e0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x26C3E0u;
    {
        const bool branch_taken_0x26c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c3e0) {
            ctx->pc = 0x26C9F8u;
            return;
        }
    }
    ctx->pc = 0x26C3E8u;
}
