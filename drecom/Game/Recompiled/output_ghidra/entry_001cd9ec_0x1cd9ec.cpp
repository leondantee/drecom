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

// Function: entry_001cd9ec
// Address: 0x1cd9ec - 0x1cda40
void entry_001cd9ec_0x1cd9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd9ec_0x1cd9ec");
#endif

    ctx->pc = 0x1cd9ecu;

    // 0x1cd9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd9f8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd9fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda00: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cda00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cda04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cda08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cda0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda10: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cda10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cda14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cda18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cda1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cda20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda24: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cda24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda2c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda34: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1cda34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x1cda38: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CDA40u;
}
