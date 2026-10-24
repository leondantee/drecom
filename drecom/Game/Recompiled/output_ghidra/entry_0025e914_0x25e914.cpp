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

// Function: entry_0025e914
// Address: 0x25e914 - 0x25e944
void entry_0025e914_0x25e914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e914_0x25e914");
#endif

    ctx->pc = 0x25e914u;

    // 0x25e914: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e918: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e91c: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25e920: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25e924: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e928: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e92c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e930: 0x9083107a  lbu         $v1, 0x107A($a0)
    ctx->pc = 0x25e930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4218)));
    // 0x25e934: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25e938: 0xa083107a  sb          $v1, 0x107A($a0)
    ctx->pc = 0x25e938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4218), (uint8_t)GPR_U32(ctx, 3));
    // 0x25e93c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25E93Cu;
    {
        const bool branch_taken_0x25e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e93c) {
            ctx->pc = 0x25E964u;
            return;
        }
    }
    ctx->pc = 0x25E944u;
}
