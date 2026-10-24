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

// Function: entry_00231e84
// Address: 0x231e84 - 0x231ec4
void entry_00231e84_0x231e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231e84_0x231e84");
#endif

    ctx->pc = 0x231e84u;

    // 0x231e84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e88: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x231e8c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x231e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x231e90: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x231e90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x231e94: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e98: 0x8462002a  lh          $v0, 0x2A($v1)
    ctx->pc = 0x231e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x231e9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231E9Cu;
    {
        const bool branch_taken_0x231e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e9c) {
            ctx->pc = 0x231EC4u;
            return;
        }
    }
    ctx->pc = 0x231EA4u;
    // 0x231ea4: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x231ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x231ea8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231eac: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231eb0: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x231eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x231eb4: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x231eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x231eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231ebc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231ec0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x231ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->pc = 0x231ec4u;
}
