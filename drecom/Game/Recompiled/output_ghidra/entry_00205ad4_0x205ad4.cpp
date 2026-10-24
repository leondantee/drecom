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

// Function: entry_00205ad4
// Address: 0x205ad4 - 0x205b00
void entry_00205ad4_0x205ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205ad4_0x205ad4");
#endif

    ctx->pc = 0x205ad4u;

    // 0x205ad4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ad8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x205ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x205adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205ae0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ae4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x205ae8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205aec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x205aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205af0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205af4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x205af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x205af8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x205AF8u;
    {
        const bool branch_taken_0x205af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205af8) {
            ctx->pc = 0x205BF8u;
            return;
        }
    }
    ctx->pc = 0x205B00u;
}
