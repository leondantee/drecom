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

// Function: entry_001d0274
// Address: 0x1d0274 - 0x1d0294
void entry_001d0274_0x1d0274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0274_0x1d0274");
#endif

    ctx->pc = 0x1d0274u;

    // 0x1d0274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0278: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1d0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d027c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0280: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1d0280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1d0284: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0288: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1d0288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d028c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d0290: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1d0290u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1d0294u;
}
