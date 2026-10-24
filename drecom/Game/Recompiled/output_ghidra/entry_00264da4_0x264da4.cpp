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

// Function: entry_00264da4
// Address: 0x264da4 - 0x264dfc
void entry_00264da4_0x264da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264da4_0x264da4");
#endif

    ctx->pc = 0x264da4u;

    // 0x264da4: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264da8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x264da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x264dac: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264db0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264db4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264db8: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x264db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x264dbc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x264dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x264dc0: 0x2c3f021  addu        $fp, $s6, $v1
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264dc4: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x264dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x264dc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264dcc: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264dd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264dd4: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264dd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ddc: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264de0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264de4: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x264de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x264de8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264dec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264df0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264df4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x264DF4u;
    {
        const bool branch_taken_0x264df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264df4) {
            ctx->pc = 0x264F58u;
            return;
        }
    }
    ctx->pc = 0x264DFCu;
}
