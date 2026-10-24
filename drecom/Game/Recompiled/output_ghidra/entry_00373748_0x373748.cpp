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

// Function: entry_00373748
// Address: 0x373748 - 0x373788
void entry_00373748_0x373748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373748_0x373748");
#endif

    ctx->pc = 0x373748u;

    // 0x373748: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37374c: 0x8c7005f4  lw          $s0, 0x5F4($v1)
    ctx->pc = 0x37374cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x373750: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x373750u;
    {
        const bool branch_taken_0x373750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x373750) {
            ctx->pc = 0x373788u;
            return;
        }
    }
    ctx->pc = 0x373758u;
    // 0x373758: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x373758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37375c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373760: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373764: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x373764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x373768: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x373768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37376c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373770: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373774: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x373774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x373778: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x373778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37377c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373780: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373784: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x373784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x373788u;
}
