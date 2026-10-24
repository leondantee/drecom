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

// Function: caseD_5
// Address: 0x1209e0 - 0x120b00
void caseD_5_0x1209e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1209e0");
#endif

    ctx->pc = 0x1209e0u;

    // 0x1209e0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209ec: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1209ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1209f0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209fc: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1209fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x120a00: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a08: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a0c: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x120a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x120a10: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a1c: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x120a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x120a20: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a28: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a2c: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x120a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x120a30: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a3c: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x120a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x120a40: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a48: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a4c: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x120a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120a50: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a58: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a5c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x120a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120a60: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a68: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a6c: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x120a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120a70: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a78: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a7c: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120a80: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a88: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a8c: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120a90: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120a94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a98: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120a9c: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x120a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120aa0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120aa4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120aa8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120aac: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x120aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120ab0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ab8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120abc: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x120abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120ac0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ac8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120acc: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x120accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x120ad0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ad4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ad8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120adc: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x120adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x120ae0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120ae4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120ae8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120aec: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x120aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x120af0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120af4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120af8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120afc: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x120afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    ctx->pc = 0x120b00u;
}
