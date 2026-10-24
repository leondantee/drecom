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

// Function: entry_00371cac
// Address: 0x371cac - 0x371cc0
void entry_00371cac_0x371cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371cac_0x371cac");
#endif

    ctx->pc = 0x371cacu;

    // 0x371cac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371cb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371cb4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x371cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cb8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371cbc: 0x0  nop
    ctx->pc = 0x371cbcu;
    // NOP
    ctx->pc = 0x371cc0u;
}
