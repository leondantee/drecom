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

// Function: entry_002e66d8
// Address: 0x2e66d8 - 0x2e6740
void entry_002e66d8_0x2e66d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e66d8_0x2e66d8");
#endif

    ctx->pc = 0x2e66d8u;

    // 0x2e66d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e66dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e66e0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E66E0u;
    {
        const bool branch_taken_0x2e66e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66e0) {
            ctx->pc = 0x2E6740u;
            return;
        }
    }
    ctx->pc = 0x2E66E8u;
    // 0x2e66e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66ec: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e66f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66f4: 0x0  nop
    ctx->pc = 0x2e66f4u;
    // NOP
    // 0x2e66f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e66f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e66fc: 0x0  nop
    ctx->pc = 0x2e66fcu;
    // NOP
    // 0x2e6700: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E6700u;
    {
        const bool branch_taken_0x2e6700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6700) {
            ctx->pc = 0x2E6740u;
            return;
        }
    }
    ctx->pc = 0x2E6708u;
    // 0x2e6708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e670c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e671c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e671cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e672c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e672cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e6738: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6738u;
    {
        const bool branch_taken_0x2e6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6738) {
            ctx->pc = 0x2E6740u;
            return;
        }
    }
    ctx->pc = 0x2E6740u;
}
